# Git Command Reference

Commands below follow the topics covered in the Git and GitHub lecture slides. Run practice commands inside a test repository.

## 1. Installation and identity

```bash
git --version
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```

## 2. Create and inspect a repository

```bash
mkdir my-project
cd my-project
git init
git status
git ls-files
```

`git init` creates a repository. `git status` shows untracked, modified and staged files. `git ls-files` lists files known to Git's index.

## 3. Stage and commit

```bash
git add file.txt
git add .
git diff
git diff --staged
git diff HEAD
git commit -m "Add project documentation"
```

- `git add` stages changes.
- `git diff` shows unstaged tracked changes.
- `git diff --staged` shows staged changes.
- `git diff HEAD` compares tracked working-tree changes with the current commit.
- A commit records staged changes in repository history.

## 4. View history

```bash
git log
git log --oneline
```

The log shows commit identifiers, author, date and message.

## 5. Ignore, rename and remove files

Example `.gitignore`:

```gitignore
__pycache__/
*.pyc
.env
*.log
data/
```

```bash
git mv old.txt new.txt
git rm old.txt
```

`.gitignore` prevents matching untracked files from being added by default. It does not remove a secret that was already committed.

## 6. Undoing changes — read before running

```bash
git restore --staged file.txt
git restore file.txt
git revert COMMIT_ID
```

- `git restore --staged` unstages a file but preserves working-directory edits.
- `git restore file.txt` discards unstaged edits to that tracked file. **This can permanently lose work.**
- `git revert COMMIT_ID` creates a new commit that reverses an earlier commit while preserving existing history. This is generally safer for changes already shared.

Always inspect `git status` and `git diff` first. Do not copy a sample commit ID; use the actual ID from your own `git log`.

## 7. Remote repositories and GitHub

```bash
git remote add origin REPOSITORY_URL
git remote -v
git branch -M main
git push -u origin main
git clone REPOSITORY_URL
git fetch origin
git pull
```

- `remote add` connects the local repository to a remote.
- `push` sends local commits to the remote.
- `clone` creates a local copy of a remote repository and its history.
- `fetch` downloads remote updates without integrating them.
- `pull` fetches and integrates updates into the current branch.

## 8. Branches and merging

```bash
git branch
git branch feature-name
git switch feature-name
git switch main
git switch -c feature-name
git switch main
git merge feature-name
```

A branch isolates work. `git merge` integrates another branch into the branch currently checked out. If a merge conflict occurs, edit the conflicting file, remove conflict markers, stage the resolution and complete the merge.

## 9. Rebase

```bash
git switch feature-name
git rebase main
```

Rebase replays commits on a new base and rewrites commit identities. Avoid rebasing shared commits unless the team understands the consequences.

## 10. Tags and releases

```bash
git tag
git tag -a v1.0.0 -m "Version 1.0.0"
git show v1.0.0
git push origin v1.0.0
```

Tags identify important commits, often releases. Semantic versioning commonly uses `MAJOR.MINOR.PATCH`.

## 11. GitHub collaboration concepts

- **Issues:** report bugs, suggest features and track tasks.
- **Projects:** organise work using boards or tables.
- **Fork:** creates a separate hosted repository copy under another account.
- **Clone:** creates a local copy on your computer.
- **Pull request:** proposes changes for review and integration into another branch.
- **Code review:** reviewers check correctness, readability and possible bugs.

## 12. Common problems

| Problem | First check |
|---|---|
| Untracked files | Stage the required files with `git add` |
| Nothing to commit | Check `git status` and whether changes were staged |
| Push rejected | Fetch remote changes and integrate them |
| Merge conflict | Edit the conflict, remove markers, stage and complete merge |
| Wrong branch | Check with `git branch` |
| Authentication failed | Check credentials and repository permissions |

## 13. Good practices

1. Commit frequently and logically.
2. Write clear, specific commit messages.
3. Use descriptive branch names.
4. Review changes before committing.
5. Fetch or pull updates regularly.
6. Test changes before merging.
7. Never commit passwords, API keys or private tokens.
8. Keep a useful README in each project.
