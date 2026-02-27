#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  if (n < 2)
    return false;
  if (n == 2 || n == 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }
  return true;
}

bool completePrime(int num)
{
  int temp = num;
  while (temp > 0)
  {
    if (!isPrime(temp))
    {
      return false;
    }
    temp = temp / 10;
  }

  int power = 10;
  while (power <= num)
  {
    if (!isPrime(num % power))
    {
      return false;
    }
    power = power * 10;
  }
  return true;
}

int main()
{
  int num;
  cin >> num;

  if (completePrime(num))
  {
    cout << "True";
  }
  else
  {
    cout << "False";
  }
}
