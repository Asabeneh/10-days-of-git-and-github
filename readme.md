- [Day 1](#day-1)
  - [Basic Command Lines](#basic-command-lines)
    - [Current working directory](#current-working-directory)
    - [Navigating directory](#navigating-directory)
    - [Making Directory](#making-directory)
    - [List files and directories](#list-files-and-directories)
    - [Detail list](#detail-list)
    - [Creating file](#creating-file)
    - [Opening and writing on file](#opening-and-writing-on-file)
    - [Opening file to read](#opening-file-to-read)
    - [Copy file](#copy-file)
    - [Rename file](#rename-file)
    - [Moving file and directory](#moving-file-and-directory)
    - [Delete file and directory](#delete-file-and-directory)
- [Day 2](#day-2)
  - [Git and GitHub](#git-and-github)
    - [1. Install Git](#1-install-git)
    - [2. Checking status of the repository](#2-checking-status-of-the-repository)
    - [3. Configure your name and your email](#3-configure-your-name-and-your-email)
    - [4. Create a local git repository](#4-create-a-local-git-repository)
    - [5. Initialize Git](#5-initialize-git)
    - [6. Add file to the staging area](#6-add-file-to-the-staging-area)
    - [7. Unstage a file](#7-unstage-a-file)
    - [8. Commit the changes](#8-commit-the-changes)
    - [9. Git log](#9-git-log)
    - [10. Git check out](#10-git-check-out)
    - [11. Creating a branch](#11-creating-a-branch)
    - [12. Create account on GitHub](#12-create-account-on-github)
    - [13. Create Repository on GitHub](#13-create-repository-on-github)
    - [14. Connecting git with remote repository](#14-connecting-git-with-remote-repository)
    - [15. Push](#15-push)
    - [16. Merge](#16-merge)
    - [17. Pull](#17-pull)
  - [Git cheat sheet:](#git-cheat-sheet)
    - [pull request](#pull-request)
- [Day 3](#day-3)
  - [Advanced git features](#advanced-git-features)
  - [GitHub page](#github-page)
  - [GitHub wiki](#github-wiki)
  - [GitHub markdown](#github-markdown)
- [Day 4](#day-4)
  - [Collaborating on GitHub](#collaborating-on-github)
  - [GitHub workflow](#github-workflow)
- [Day 5](#day-5)

# Day 1

## Basic Command Lines

Developers need to know basic Unix commands. Some tasks necessary need to be done using git bash, mac terminal or window command prompt. In this tutorial, we will use git bash to learn the basics of Unix command which you may need as a developer. This is not an exhaustive list but which is enough for daily uses. To make use of git bash first you should install [git](https://git-scm.com/). You can install by just clicking next button up to the end of the installation.

### Current working directory

Checking the working directory using the command _pwd_.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~$ pwd
/c/Users/Asabeneh
```

### Navigating directory

Now, let's go to the Desktop using cd(change directory).

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~$ cd Desktop
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop
```

To check where you are at, use the _pwd_ command age

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop$ pwd
/c/Users/Asabeneh/Desktop
```

We use _cd_ to get into a directory(folder) and we use _cd.._ to get out from a directory, in other words we use _cd_ go forward into a directory and _cd .._ to go backward from a directory.

### Making Directory

Now, let's create a directory inside the Desktop. Call the name of the directory, 10-days-of-code. You give it any name but I am in favor of this name.
Use the _mkdir_ command to make a directory(folder)

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop$ mkdir 10-days-of-code
```

Now let's go to the 10-days-of-code folder using _cd_ command.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop$ cd 10-days-of-code
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ pwd
/c/Users/Asabeneh/Desktop/10-days-of-code
```

### List files and directories

We can check the files and directories we have in a directory(folder) using the _ls_ command.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
```

No files or directories were found in the 10-days-of-code folder because we didn't create yet. Let's create some directories

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ mkdir day-1
```

Now let's check if there is some files or directories in the 10-days-of-code folder.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
day-1
```

Now, you see day-1 folder that you created.

Now let's create multiple folders at one and use _ls_ to see all the directories we have in the 10-days-of-code folder.

Making multiple folders at once

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ mkdir day-2 day-3 day-4 day-5 day-6 day-7 day-8 day-9 day-10
```

Using _ls_ we can see all the directories we have in the 10-days-of-code

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ ls
day-1  day-10  day-2  day-3  day-4  day-5  day-6  day-7  day-8  day-9
```

### Detail list

Let's see a detail list of the directories using multiple commands, _ls -la_.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ ls -la
total 20
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 .
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:05 ..
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:12 day-1
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-10
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-2
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-3
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-4
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-5
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-6
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-7
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-8
drwxr-xr-x 1 Asabeneh 197121 0 Jan 19 02:16 day-9
```

Using the above command, we can see the detail view of a directory or a file

### Creating file

Now, let's see how to create a file. We can use the _touch_ command to write a file.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ touch day-1.txt
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
day-1  day-1.txt  day-10  day-2  day-3  day-4  day-5  day-6  day-7  day-8  day-9
```

As you can see, there is day-1.txt in the list. That means we have created day-1.txt file inside the 10-days-of-code folder. You can also you _ls -la_ command to use the detail view of the folders and file.

### Opening and writing on file

Now, let's open the day-1.txt file and add some text on it. We use the _nano_ command to open and write.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ nano day-1.txt
```

![](/images/nano.png)

As you can see from the above figure, the cursor is active and you can write on the pad. You can only use arrow keys to move the cursor left, right, up and down. Let's write some text on the opened pad. There are instructors at the bottom that tells how to exit.For instance ctrl + x is to exit. When you exit either you save or cancel which comes when you click ctrl + x.

![](/images/writting_on_nano.png)

Now you can save the modified file by writing Y or you can cancel it by clicking ctrl + c.

After you write Y then click enter.

### Opening file to read

We can use the _cat_ command just only to read the file.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ cat day-1.txt
This is my first text. I have never written on nano text editor before
```

### Copy file

Let's have day-1-backup.txt from day-1.txt by copying using _cp_ command.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ cp day-1.txt day-1-backup.txt

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code $ ls
day-1  day-1.txt  day-10  day-1-backup.txt  day-2  day-3  day-4  day-5  day-6  day-7  day-8  day-9
```

### Rename file

The _mv_ command is used both to change the name of a file and to move a file into a different directory.

Let's have more file in the 10-days-of-code folder. We can use _touch_ command to create files.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ touch day-2.txt day-3.txt day-4.txt day-5.txt
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
day-1      day-10          day-2      day-3      day-4      day-5      day-6  day-8
day-1.txt  day-1-backup.txt  day-2.txt  day-3.txt  day-4.txt  day-5.txt  day-7  day-9
```

Now, let's rename the day-2.txt to second-day.txt using _mv_ command.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ mv day-2.txt second-day.txt

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
day-1      day-10          day-2  day-3.txt  day-4.txt  day-5.txt  day-7  day-9
day-1.txt  day-1-backup.txt  day-3  day-4      day-5      day-6      day-8  second-day.txt

```

Let's rename the day-10 directory to day-ten.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ mv day-10 day-ten
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
day-1      day-1-backup.txt  day-3      day-4      day-5      day-6  day-8  day-ten
day-1.txt  day-2           day-3.txt  day-4.txt  day-5.txt  day-7  day-9  second-day.txt
```

### Moving file and directory

The _mv_ and _cp_ commands can be used to put files into a directory. The _cp_ move the copy of the file or the folder to another folder, however mv just move it without copying.
Let's move the day-1.txt day-1 folder.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ mv day-1.txt day-1
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
day-1           day-2  day-3.txt  day-4.txt  day-5.txt  day-7  day-9    second-day.txt
day-1-backup.txt  day-3  day-4      day-5      day-6      day-8  day-ten
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ cd day-1
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code/day-1$ ls
day-1.txt
```

Let's try to move a file using _cp_ command. Let's move the day-1-backup.txt to day-1 folder

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-git/10-days-of-code
$ cp day-1-backup.txt day-1

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-git/10-days-of-code
$ cd day-1
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-git/10-days-of-code/day-1
$ ls
day-1.txt  day-1-backup.txt

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-git/10-days-of-code/day-1
$ cd ..
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-git/10-days-of-code
$ ls
day-1             day-2  day-3.txt  day-4.txt  day-5.txt  day-7  day-9    second-day.txt
day-1-backup.txt  day-3  day-4      day-5      day-6      day-8  day-ten
```

The copied version of day-1-backup.txt moved to day-1 folder.
Now lets create multiple backup files first and move them to backup folder

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ mkdir backups
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ cd backups
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code/backups$ touch day-2-backup.txt day-3-backup.txt
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code/backups$ ls
day-2-backup.txt  day-3-backup.txt
```

Moving multiple files

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ mv -t backups day-1-backup.txt day-2-backup.txt  day-3-backup.txt
```

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ cd backups/
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code/backups
$ ls
day-1-backup.txt  day-2-backup.txt  day-3-backup.txt
```

### Delete file and directory

Let's remove file using _rm_ command. Let's remove day-1-backup.txt file from day-1 folder.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ cd day-1

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code/day-1
$ ls
day-1.txt  day-1-backup.txt

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code/day-1
$ rm  day-1-backup.txt

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code/day-1$ ls
day-1.txt
```

Let's delete the day-ten folder using _rmdir_ command. The _rmdir_ delete a folder.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ rmdir day-ten

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ ls
backups  day-2  day-3.txt  day-4.txt  day-5.txt  day-7  day-9
day-1    day-3  day-4      day-5      day-6      day-8  second-day.txt
```

Now, let's copy the backups folder to backups-2 and backup-3 using _cp_ command. Then we will delete backups-3. The _cp_ with _-r_ has been used to copy it recursively.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ cp -r backups backups-2

Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
backups    day-1  day-3      day-4      day-5      day-6  day-8  second-day.txt
backups-2  day-2  day-3.txt  day-4.txt  day-5.txt  day-7  day-9
```

Now let's do the above step to create backups-3

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ cp -r backups backups-3
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code
$ ls
backups    backups-3  day-2  day-3.txt  day-4.txt  day-5.txt  day-7  day-9
backups-2  day-1      day-3  day-4      day-5      day-6      day-8  second-day.txt
```

Now the backups-3 has files and neither the _rm_ nor the _rmdir_ delete it. Therefore, we can use multiple command to delete it. Let's try it with the following command.

```sh
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ rm -rf backups-3
Asabeneh@DESKTOP-KGC1AKC MINGW64 ~/Desktop/10-days-of-code$ ls
backups    day-1  day-3      day-4      day-5      day-6  day-8  second-day.txt
backups-2  day-2  day-3.txt  day-4.txt  day-5.txt  day-7  day-9
```

_Congratulations! Now you knew basic command lines_

# Day 2

## Git and GitHub

Git is a version control software. In one way or the other you may need to use a git and a GitHub together.

You need to use git and GitHub either to store your projects on the cloud or to collaborate with your team. This means it allows developers or writers to work on the same project even if they are located in a different locations.

A version control is a means of recording changes to a file or set of files over time so that you can recall specific versions later.

If you prefer watching the tutorial click this [link](https://www.youtube.com/watch?v=9cCApTLb_Io&list=PLbvhRHYrmshSCAHZbibqh_px_LxnU54dk)

### 1. Install Git

First you need to install the version control software, Git.

- Git:
  Install [git](https://git-scm.com/downloads)

### 2. Checking status of the repository

The _git status_ command allows you to know the status of the project:
If it is

- initiated
- modified
- staged

We can write the command _git status_ at any time. It is a means to to check what is happening on your project.

### 3. Configure your name and your email

Open the Git bash if your device is Windows, or open the Mac terminal if your device is MacOS and then write the following commands

```shell
git config --global user.name 'yourname'
git config --global user.email 'youremail'
```

### 4. Create a local git repository

On this step your will create a folder (directory) for your project. A project is just a simple folder that stores all the files related to a certain project. A local repository is a project or a folder which is on your computer.

If you Git bash is not opened, go to start and type git bash. Git terminal will popup on Windows devices. If it is MasOS just open the Mac terminal. On the terminal write:

```shell
mkdir project_name
cd project_name
```

By the way, you can also create the folders the usual way using on the GUI(Graphical User Interface) of the Windows or Mac.

### 5. Initialize Git

After creating a new local repository or in an existing local repository, initialize the repository by the following command:

```shell
   git init
```

Once, the repository is initialized git tracks the changes in the files and folders of the project.

### 6. Add file to the staging area

File can be added to the staging area in multiple ways.
To add single file, we use the _git add_ command followed by a file name

```shell
   git add filename
```

To add multiple files using their file names using the command _git add_ followed by file names

```shell
   git add filename1 filename2
```

Sometimes, we may make a lots of changes and adding file one by one is tiring and not product. Therefore, we can use a short and product way. The _git add_ command followed by a dot allows to add files and folders at once to the stage area. Remember, there is a space between the add and the dot.

To add all files and folders at once

```shell
   git add .
```

### 7. Unstage a file

```shell
    git reset HEAD filename
```

### 8. Commit the changes

Commit means taking a snapshot or a copy of your file at that point of time.You may associate it with as saving a file with a new name (save as).

```shell
   git commit -m 'your message'
```

Your commit message has to be associated with the changes or modification you make.

### 9. Git log

The _git log_ command allows to know the commit history of the project

### 10. Git check out

We can identify the commit id of each commit using the _git log_ command. Then we can make use use of this id to retire any previous commit.

```sh
git checkout commit-id
```

### 11. Creating a branch

You can create copy of the master using branch. You built an awesome application. You like to keep this awesome application as it is but you like to add some features.
This is the time, you need branching the master. Branch is the copy of the master at branching instant. After branching, the branch and the master they don't see each other. You can create as many branches as you want.

To create a branch:

- Only to create branch

```shell
    git checkout  branch-name
```

To create branch:

- To create and checkout to the branch at the same time:

```shell
    git checkout -b branch-name
```

To switch between branches:

```shell
    git checkout main
    git checkout branch-name
```

To list down all the branches:

```shell
    git branch
```

### 12. Create account on GitHub

Now, create an account on GitHub and sign in using your emails and password

- GitHub
  Sign up on [GitHub](https://github.com/)

### 13. Create Repository on GitHub

Go to [GitHub](https://github.com/) and create a repository by click the plus icon on the top right corner.

### 14. Connecting git with remote repository

In this step you will connect your local git repository with your remote GitHub repository

```shell
    git remote add origin remote_repository_ul
```

The word origin could be any word. It is a means to assign the repository URL.
If this is step is passed without error, you are ready to push it to your remote GitHub repository. Push means actually uploading what you have on your local to remote repository.

### 15. Push

Before you push(upload), please commits any changes and if it is ready push your files to your remote GitHub repository using the following command.

```shell
    git push -u origin master
```

### 16. Merge

When you work on an individual project or a team project you may have different branches. Mostly you will have master(main), develop and other branches.Then you will merge other branches to your develop and your develop to master. It is possible to merge any branches. For instance lets merge feature branch to develop

```shell
    git checkout develop
    git merge feature
```

Using the above code, now the develop and feature branches do have the same content

### 17. Pull

If your team merge new features to the develop. Then you will be behind, now you need to make your project to current stage by pulling from develop

```shell
    git checkout yourbranch
    git pull origin develop
```

```sh
    git checkout develop
    git merge yourbranch
    git push -u origin develop
```

If you are a sole developer that works by yourself then you can test the _git pull_ command by modifying some of the files from your remote repository and pull it using the _git pull_ command.

_Congratulations! Now, you have solid foundation of Git and GitHub_

## Git cheat sheet:

Here you have the basic git commands which might be useful:

```shell
git --version     // to check the version
git help          // To get help from git
git help commit   // To get commit help

git init          // Initilaizing git repository on local machine

git config --list // to check what is configured
git config        // to get information about configuration
git config --global user.name "username" //Configuring git user name
git config --global user.email "email" //Configuring git user email

git add filename
git add first.txt # adding only one file
git add second.txt third.txt // to add multiple file
git add . //To add all the files and folders to the staging area

git commit -m 'commit message' // after staging using add
git commit -a -m 'commit message' // staging using a and commiting
git commit -am 'commit message' // staging and committing

git commit -am "Message" #Grab every thing in the working copy and -a allows to skip the staging copy
git log  // To see the history on the repository
git log --author ="name" #To check change by specific user
git status  //To check changes or status of the file


git diff #Compare workin copy in the repository
git diff --staged # Compare files in the staging area

git rm filename
git mv filename1 filename2
git mv filename foldernam/filename2
git commit -am "This skip the stage process"
git checkout -- filename #To get working copy back
git reset  HEAD filename // removes from the staging area/unstage
git checkout 01e7ba -- filename # Tracking the differentversion of the project
git remote add anyname repositoryUrl
git push -u remote master // to push the file into github
git checkout 01e7ba -- filename
git remote add anyname repositoryUrl
```

### pull request

# Day 3

## Advanced git features

## GitHub page

Every GitHub repository allows you to generate a URL of your project. For instance, this a country project GitHub page.

## GitHub wiki

Every GitHub repository has a wiki page. A wiki page allows you to write or document.
![](./images/wiki.png)

## GitHub markdown

Markdown file can be used to write a documentation or anything. The markdown file extension is .md

Markdown is an HTML like markup language that allows to write text and render it on browser. If you are familiar with HTML, you pick the syntax of markdown in a matter of minutes.
Follow this [link](https://guides.github.com/features/mastering-markdown/)to learn about markdown

# Day 4

## Collaborating on GitHub

## GitHub workflow

# Day 5
