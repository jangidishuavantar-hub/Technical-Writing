# Upload this assignment to your GitHub account

1. Sign in at https://github.com/.
2. Create a **new empty repository**. A suggested name is `TW-Class-Documentation`.
3. Do not add a README on GitHub if you are uploading this folder with its existing README.
4. Extract this project ZIP on your computer.
5. Open Git Bash or a terminal inside the extracted `TW-Class-Documentation-Repository` folder.
6. Run the commands below. Replace the URL with the repository URL copied from your GitHub page.

```bash
git init
git add .
git status
git commit -m "Add TW class documentation"
git branch -M main
git remote add origin REPOSITORY_URL
git push -u origin main
```

For later changes:

```bash
git add .
git commit -m "Update class documentation"
git push
```

## Before submission

- Open the GitHub repository in your browser and confirm all six topic folders and the main README are visible.
- Check that `.tex`, `.cpp`, `.md` and `Doxyfile` files are uploaded.
- Practise the commands in `GIT_COMMANDS.md` in a separate test repository. Be ready to explain `status`, `add`, `commit`, `log`, `diff`, `restore`, `revert`, `branch`, `switch`, `merge`, `remote`, `push`, `pull`, `fetch`, `clone`, `rebase` and `tag`.
