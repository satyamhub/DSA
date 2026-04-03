#!/usr/bin/env bash
set -euo pipefail

# Auto-commit and push every second if there are changes.
# WARNING: This will create many commits quickly.

BRANCH=${1:-$(git rev-parse --abbrev-ref HEAD)}
REMOTE=${2:-origin}

while true; do
  if [[ -n "$(git status --porcelain)" ]]; then
    git add -A
    TS=$(date -u +"%Y-%m-%dT%H:%M:%SZ")
    git commit -m "autosave: ${TS}" >/dev/null || true
    git push "$REMOTE" "$BRANCH" >/dev/null
  fi
  sleep 1
  
  # Avoid tight loop if git is not configured
  if ! git rev-parse --git-dir >/dev/null 2>&1; then
    echo "Not a git repo. Exiting." >&2
    exit 1
  fi
done
