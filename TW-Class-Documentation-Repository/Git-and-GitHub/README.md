# Git and GitHub

## Version control

Version control records changes to files over time so earlier versions can be inspected, compared and recovered. It helps track modifications, identify who changed something and support collaboration.

## Git vs GitHub

- **Git** is a distributed version control system. It works locally and records project history through commits.
- **GitHub** is an online hosting and collaboration platform for Git repositories. It adds features such as Issues, pull requests and project boards.

## Main Git areas

1. **Working directory:** files being edited.
2. **Staging area:** selected changes prepared for the next commit.
3. **Local repository:** committed project history.

The usual flow is **edit → stage → commit → push**.

## Basic workflow

```bash
git init
git status
git add .
git commit -m "Add project files"
git branch -M main
git remote add origin REPOSITORY_URL
git push -u origin main
```

Replace `REPOSITORY_URL` with the URL of your own GitHub repository.

## Branch collaboration

A branch provides an independent line of development. Create a feature branch, make and commit changes, push it, then open a pull request on GitHub for review and merging.

```bash
git switch -c feature-name
# edit files
git add .
git commit -m "Add feature"
git push -u origin feature-name
```

More commands and explanations are in `GIT_COMMANDS.md`.
