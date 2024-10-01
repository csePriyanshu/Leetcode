
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

# Unstage a file
- To unstage any file:
  
  ```bash
  git restore --staged <path_to_file/filename>`
  ```



# Resolving Divergent Branches in Git

When you encounter a message indicating that your local branch and the remote branch have diverged, you need to specify how to reconcile them. Here are the options you can use:

## Options for Reconciling Divergent Branches

### 1. Merge (Default Behavior)
This will create a merge commit that combines changes from both branches.

- To set this as the default behavior for future pulls:
  ```bash
  git config pull.rebase false
  ```

- To pull and merge in one command:
  ```bash
  git pull --no-rebase
  ```

### 2. Rebase
This will apply your local commits on top of the fetched commits, creating a linear history.

- To set this as the default behavior for future pulls:
  ```bash
  git config pull.rebase true
  ```

- To pull and rebase in one command:
  ```bash
  git pull --rebase
  ```

### 3. Fast-Forward Only
This will update your branch only if it can be fast-forwarded, meaning there are no new commits on your local branch since the last pull.

- To set this as the default behavior:
  ```bash
  git config pull.ff only
  ```

- To pull with this option:
  ```bash
  git pull --ff-only
  ```

## Setting Global Preferences
If you want to set your preference for all repositories, you can add the `--global` flag to any of the above commands. For example, to set rebase as your default behavior globally:

```bash
git config --global pull.rebase true
```

## Resolving Divergence in Your Current Situation
To resolve the current situation, choose one of the above options based on how you want to handle the divergence:

- **To merge the changes:**
  ```bash
  git pull --no-rebase
  ```

- **To rebase the changes:**
  ```bash
  git pull --rebase
  ```

## Final Steps
1. After running the appropriate pull command, review any merge conflicts (if they arise) and resolve them.
2. Once resolved, commit the changes (if needed) and continue with your workflow.
