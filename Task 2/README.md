# Report: Understanding Git and GitHub

## Introduction

Git and GitHub are fundamental tools in modern software development and version control. Git, officially defined as a distributed version control system (VCS), enables developers to track changes in project files over time. GitHub, on the other hand, is a platform that hosts Git repositories in a collaborative environment, allowing developers to efficiently work together on projects.

This report aims to provide an overview of Git, GitHub, and their usage, making it an essential skill for developers today.

## Git: The Basics

### Installation and Setup

- Git can be installed from [https://git-scm.com/downloads](https://git-scm.com/downloads) and is available for various platforms, including macOS, Linux, and Windows.
- After installation, configuring Git with your name and email using the `git config` command is crucial for identifying yourself in the Git commits.

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```
### Repositories
- A Git repository, or repo, serves as a container for tracking a project.
- There are two main types of repositories: local (on your computer) and remote (hosted on a server, like GitHub).
### Initializing a Repository
- To create a new local repository, navigate to your project's folder and run `git init`. This creates a hidden `.git` directory to store tracking data.
## Tracking Changes with Git
### Staging and Committing
- The process of committing involves taking snapshots (commits) of your project at specific points in time.
- To stage files for a commit, use the `git add`command. You can stage specific files or all files in the project.
```bash
git add file.js           # Stage a specific file
git add .                 # Stage all files and folders
```
- After staging your changes, create a commit with a descriptive commit message.
```bash
git commit -m "Commit message" 
```
### Commit History
- Use `git log` to view the commit history of your project, including details like the author's name, commit hash, date, and commit message.
- You can revisit specific commits using `git checkout <commit-hash>`.
### Ignoring Files
- To prevent Git from tracking certain files or directories, create a `.gitignore file` in your project folder and list the files to be ignored.
## Branching in Git
- Git allows developers to work with different branches, which are individual timelines of project commits.
- Creating a new branch is done with `git branch <new-branch-name>`.
- Switch between branches using `git checkout <branch-name>`.
- Merge branches with `git merge <branch-name>`.
- Delete a branch with `git branch -d <branch-name>`.
### GitHub: Collaborative Development
- GitHub is a platform that hosts Git repositories, making it easy for teams to collaborate on software projects.
- Developers can push and pull changes to and from remote repositories on GitHub.
- Issues, pull requests, and project boards are some of the collaborative features GitHub offers.
- GitHub Actions allows for automated workflows, like continuous integration and deployment.
## Conclusion
Git and GitHub are powerful tools for developers. Git helps you track changes in your projects, allowing you to work efficiently, manage versions, and collaborate with others. GitHub provides a collaborative platform for hosting your Git repositories and offers advanced features for team development. These tools are essential for modern software development and are invaluable additions to your skillset.
navigate to the main folder of your project, then type the following command:

