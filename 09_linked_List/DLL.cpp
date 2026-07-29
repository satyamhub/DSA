#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int data1, Node *next1, Node *prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *convertArr2DLL(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < (int)arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
    }
    return head;
}

void printDLL(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        cout << temp->next;
        cout << endl;
        temp = temp->next;
    }
    cout << endl;
}

Node *removeHead(Node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    Node *prev = head;
    head = head->next;

    head->prev = NULL;
    prev->next = NULL;

    return head;
}

Node *removeTail(Node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }

    Node *tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    Node *newTail = tail->prev;
    newTail->next = nullptr;
    tail->prev = nullptr;
    delete tail;

    return head;
}

Node *newHead(Node *head, int val) {
    Node *newhead = new Node(val, head, nullptr);
    head->prev = newhead;
    return newhead;
}

Node *newTail(Node *head, int val) {
    if (head == NULL) {
        return new Node(val);
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    Node *newtail = new Node(val, NULL, temp);
    temp->next = newtail;

    return head;
}

Node *BruteReverseDLL(Node *head) {
    Node *temp = head;
    stack<int> st;
    while (temp != NULL) {

        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL) {

        temp->data = st.top();

        st.pop();
        temp = temp->next;
    }
    return head;
}

Node *OptimalReverseDLL(Node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node *current = head;
    Node *back = NULL;

    while (current!=NULL) {
        back = current->prev;
        current->prev = current->next;
        current->next = back;
        current = current->prev;
    }
    return back->prev;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArr2DLL(arr);
    head = OptimalReverseDLL(head);
    printDLL(head);

    return 0;
}
