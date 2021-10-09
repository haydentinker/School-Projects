# CPTR330 Student Repository

Welcome to the Walla Walla University Machine Learning for Data Science Git repository.
This repository is designed to be used with the [WWU RStudio](https://rstudio.cs.wallawalla.edu/) online R development environment.
Below you will find instructions on setting up your copy of that environment and keeping it up-to-date.

## Set-Up

Setting up your environment is a two-step process.
You must first fork your own version of this repository on the WWU Computer Science GitLab server and then link your personal fork to your WWU RStudio Server account.

### Forking the Repository

To fork of this repository, click on the *fork* button in the top right corner of the main page of the original repository at https://gitlab.cs.wallawalla.edu/cptr330/student330.

### Setting Up the RStudio Workspace

Now log into the [WWU RStudio Server](https://rstudio.cs.wallawalla.edu/) environment and follow the steps below.

1. Set up an SSL Private Key:
   1. In the top menu, select **Tools > Global Options...** to pull up the options box.

   2. Click on the **Git/SVN** option in the list at the left side of this box.

   3. If you do not already have an *SSH RSA Key*, click the **Create RSA Key...** button.  Once it has been created (or if you already had one), click **View public key**.

   4. Copy your public key using **Ctrl-C** and then go back to the CS Department Gitlab server.

   5. Click on the dropdown button in the very top right, which should drop down with your name and user options.  Click **Settings** in that list of options.

   6. Click on the **SSH Keys** option on the left side of the screen (it should have a skeleton key icon beside it).

   7. Paste your SSH Key into the large text area labeled *Key* and click the **Add key** button.  This should complete the one-time process of giving your RStudio Server account access to your Gitlab account.

2. Create a new RStudio Server project and link it to your Gitlab project.

   1. Before you leave Gitlab, find your *student330* project by typing this into the search box and selecting the *CPTR 330 Student Repository* with your name in front of it.

   2. Click the blue *Clone* dropdown button that can be found at the top right side of your project page and copy the URL labeled *Clone with SSH*.  It should look something like:

      ```
      git@gitlab.cs.wallawalla.edu:YourUsername/student330.git
      ```

   3. Now go back to RStudio Server and select **File > New Project...** from the top menu.

   4. Pick the **Version Control** option from the list provided, and then pick **Git** from the second list.

   5. Paste the URL you copied above into the first text box, labeled *Repository URL:*.

   6. Name the directory you want to store your project in.  The suggested name is *student330*, but you can use anything you like.

   7. Click the **Create Project** directory.  After some time, the screen should refresh with a copy of your repository loaded.

   8. Next add a link to the original *student330* project, to which I will add new assignments, as follows:

      1. Click the *Git* tab that appears in the top-left box on your RStudio Server screen.
      2. Select **More > Shell...** from the menu under that tab.
      3. In the *Terminal* window that opens, paste the following command and hit enter to run it.
         ```
         git remote add upstream git@gitlab.cs.wallawalla.edu:cptr330/student330.git
         ```

## Maintaining Your Environment

At the beginning of each week, you should refresh your environment to include the latest homework assignments.  To do this, double click on the `pull.sh` file in your main project directory, and then click the **Run Script** button in the top-right corner of the window that opens.

When you are finished working on an assignment and wish to submit it for grading, you will follow the same process with the `push.sh` script in your main project directory.
