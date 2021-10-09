#!/bin/sh

git add --all
export COMMIT_MESSAGE="`git status | grep -oP ":   \K(homework|exams)/[^/]*" | uniq | tr '\n' ' '; echo`"
git commit -am "Commit $COMMIT_MESSAGE"
git push

