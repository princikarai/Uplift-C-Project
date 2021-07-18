# ⭐HOW TO MAKE A PULL REQUEST:

[Github Cheatsheet](https://education.github.com/git-cheat-sheet-education.pdf)

## Fork this repository

Fork this repository by clicking on the fork button on the top of this page.
This will create a copy of this repository in your account.

![fork](https://user-images.githubusercontent.com/72801405/112112697-d99d5e80-8bdb-11eb-9521-291f2f104258.PNG)

## Clone the repository

Now clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the code button and then click the _copy to clipboard_ icon.

Open a terminal and run the following git command:

```
git clone "URL you just copied"
```

issue-5
where "URL you just copied" (without the quotation marks) is the URL to this repository (your fork of this project). See the previous steps to obtain the URL.
main

<img align="right" width="300" src="https://firstcontributions.github.io/assets/Readme/copy-to-clipboard.png" alt="copy URL to clipboard" />

For example:

```
git clone https://github.com/this-is-you/first-contributions.git
```

where `this-is-you` is your GitHub username. Here you're copying the contents of the first-contributions repository on GitHub to your computer(local machine).

## Create a branch

Change to the repository directory on your computer (if you are not already there):

```
cd <name of the project>
```

Now create a branch using the `git checkout` command:

```
git checkout -b your-new-branch-name
```

For example:

```
git checkout -b add-alonzo-church
```

(The name of the branch does not need to have the word _add_ in it, but it's a reasonable thing to include because the purpose of this branch is to add your name to a list.)

## Make necessary changes and commit those changes

Create a new folder by your name (for example FirstName_LastName), add your files to the folder.

<img align="right" width="450" src="https://firstcontributions.github.io/assets/Readme/git-status.png" alt="git status" />

If you go to the project directory and execute the command `git status`, you'll see there are changes.

Add those changes to the branch you just created using the `git add` command:

```
git add .
```

Now commit those changes using the `git commit` command:

```
git commit -m "made a new folder <firstname_lastname> and added projects."
```

replace `<your-name>` with your name.

## Push changes to GitHub

Push your changes using the command `git push`:

```
git push origin <add-your-branch-name>
```

replacing `<add-your-branch-name>` with the name of the branch you created earlier.

## Submit your changes for review

If you go to your repository on GitHub, you'll see a `Compare & pull request` button. Click on that button.

![pullRequest](https://user-images.githubusercontent.com/72801405/112118221-25530680-8be2-11eb-8ed1-3a8d217371da.PNG)

Now submit the pull request.


Congratulations! Sit and relax, you've made your contribution to Uplift C and C++ Project.
