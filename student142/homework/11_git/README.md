# CPTR 142: Homework Assignment #11

## Problem Overview

In this homework assignment we work with Git.
If you were not able to finish the recent in-class checkpoint on Git, you may wish to do so now.

## Create a Local Repository

Similar to the in-class checkpoint, follow the following steps:

1. In a C++ Code.CS workspace, on the left edge of the screen is a "Explorer" icon.
  When you can tree view of the directories, continue.

1. In the root directory, create a folder, `gitExercise`, and navigate to it.
  You can create the directory from the GUI or from a command line.
  In any case, you need a terminal in the new directory.

    > cd ~/code/cpp/; mkdir gitExercise; cd gitExercise

1. Create a git repository.

    > git init

1. Create a file.

    > touch index.html

1. Run this command.

    > git add -A

1. Run this command.

    > git commit -m "Initialize repository"

## In Your Local Git Repository

From the bash command prompt enter the following:
> cd ~/code/cpp/gitExercise/; git status

```text
On branch master
nothing to commit, working tree clean
```

> git log

```text
commit 049741de20c2c97dc29956f1ef7b705679581f47 (HEAD -> master)
Author: tinkha <tinkha@cs.wallawalla.edu>
Date:   Fri Feb 21 00:17:57 2020 +0000

    Initialize repository
```

Select the file `index.html` from the directory tree on the left and edit it to appear as follows:

```html
<html>
    <head>
        <title>CPTR 142 - Git Assignment</title>
    </head>
    <body>
        <h1>This is our Git Assignment page!</h1>
    </body>
</html>
```

> git status

```text
Outputted nothing
```

> git diff

```text
Outputted nothing
```

Commit your changes to your local Git repository with an appropriate commit message.

```text
I did
git commit -m "Changes from assignment Read Me."
```

This gives you a brief introduction to working with a local Git repository.

## In a Shared Git Repository

### Fork student142_hw11

Log in to our [CS GitLab](https://gitlab.cs.wallawalla.edu/) using your CS Lab credentials
(which are different from your WWU credentials) and navigate to our
[student142_hw11](https://gitlab.cs.wallawalla.edu/cptr142/student142_hw11) project.
Star the project so that you can find it again easily, and click the `Fork` button.
This will create a copy of the project in your GitLab namespace.
Once you are in your copy (or _clone_) of the shared project, star it so you can find it again easily.

### Clone to Code.CS

* Copy the SSH GitLab link for the project to your clipboard.
* In Code.CS, open your c++ workspace.
* In the bash shell, clone the new repository.
  This command will look something like the following, but with your USERID:

```sh
cd ~/code/cpp
git clone git@gitlab.cs.wallawalla.edu:USERID/student142_hw11.git
```

If you are asked to verify the authenticity of `gitlab.cs.wallawalla.edu (192.147.173.125)`, say `yes`.

```text
bash: git@gitlab.cs.wallawalla.edu:tinkha/student142_hw11.git: No such file or directory
tinkha@code:~/code/cpp$ cd ~/code/cpp
tinkha@code:~/code/cpp$ git clone git@gitlab.cs.wallawalla.edu:tinkha/student142_hw11.git
Cloning into 'student142_hw11'...
remote: Enumerating objects: 8, done.
remote: Counting objects: 100% (8/8), done.
remote: Compressing objects: 100% (7/7), done.
remote: Total 8 (delta 0), reused 8 (delta 0)
Receiving objects: 100% (8/8), done.
```

* In the bash shell, enter the following to add another:

```sh
cd student142_hw11
git remote
git remote add upstream git@gitlab.cs.wallawalla.edu:cptr142/student142_hw11.git
git remote -v
```

```text
origin  git@gitlab.cs.wallawalla.edu:tinkha/student142_hw11.git (fetch)
origin  git@gitlab.cs.wallawalla.edu:tinkha/student142_hw11.git (push)
upstream        git@gitlab.cs.wallawalla.edu:tinkha/student142_hw11.git (fetch)
upstream        git@gitlab.cs.wallawalla.edu:tinkha/student142_hw11.git (push)
```

Using the Code.CS directory tree on the left, add a new file to the `student142_hw11` directory
with your first name, last name, and the extension `.md`, for example `JamesFoster.md`.
Edit the file with a quote of your choice (be creative, but mindful of our community standards!).

Add and commit the new file to your local repository.
After the commit, check the git status and push your changes to your GitLab remote.

```text
Replace this line with your commands and the output from the terminal.
```

### Generate a Merge Request

* Return to your GitLab page, refresh the page, and you should be able to see your new file.
* To share your edits with the class, click on `Merge Requests` on the left side of the page
  then click the `New merge request` button.
* On the next page select `master` as the source branch and click `Compare branches and continue`.
* Update the Title if you wish and write a description of you change.
* Click the `Submit merge request` button.
* At this point your instructor can accept the merge request and it will then be available to others.

### To See Changes From Others

```sh
git fetch remote
git pull
git fetch upstream
git pull upstream master
git push
```

## Save this file

Return to your Code.CS workspace for homework, save edits to this file to Code.CS `(<Ctrl>+<S>)`,
then push them to GitLab (using the appropriate script).
