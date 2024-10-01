
# Git Bash Commands

## Basic Commands
- **`git init`**: Initializes a new Git repository.
- **`git clone <repository-url>`**: Clones an existing repository from a remote source.
- **`git add <file>`**: Stages changes to the specified file for the next commit. Use `git add .` to stage all changes.
- **`git commit -m "message"`**: Commits the staged changes with a descriptive message.
- **`git status`**: Displays the state of the working directory and staging area.
- **`git log`**: Shows the commit history for the current branch.

## Branching and Merging
- **`git branch`**: Lists all local branches in the repository.
- **`git branch <branch-name>`**: Creates a new branch.
- **`git checkout <branch-name>`**: Switches to the specified branch.
- **`git merge <branch-name>`**: Merges the specified branch into the current branch.

## Remote Repositories
- **`git remote -v`**: Lists the remote repositories associated with the local repository.
- **`git push <remote> <branch>`**: Pushes changes to the specified branch on the remote repository.
- **`git pull <remote> <branch>`**: Fetches and merges changes from the remote repository to the current branch.

## Stashing
- **`git stash`**: Saves changes in the working directory temporarily without committing them.
- **`git stash pop`**: Restores the most recently stashed changes and removes them from the stash.

## Viewing Changes
- **`git diff`**: Shows the differences between the working directory and the index (staged changes).
- **`git diff --cached`**: Shows the differences between the index and the last commit (staged vs. last commit).

## Other Useful Commands
- **`git reset <file>`**: Unstages a file, keeping the changes in the working directory.
- **`git reset --hard`**: Resets the working directory and index to match the last commit, discarding all changes.
- **`git fetch <remote>`**: Fetches updates from a remote repository without merging.
- **`git cherry-pick <commit>`**: Applies the changes from a specific commit to the current branch.
