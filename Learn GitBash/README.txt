My brain for GitBash Command Line

touch- create new file
cp- copy file
rm - remove file
rm -rf - remove directory and all files inside 
* - wildcard, selects group of files i.e: .txt/.cpp etc.
mv- move files/rename folders

To create a local repo use:
"git init"

To create a new file use:
"touch <file_name> 

To create a link to remote repo, use:
"git remote add <remote_name> <url>"
To set a new remote url use:
"git remote set-url add <remote_name> <new_url>
To remove a remote url, use:
"git remote set-url --delete <remote_name> <old_url> 

Push to remote use:
"git push -u (upstream) <remote_name> <branch_name>"

Resetting to previous commit locally, must use --force or -f to push to remote to revert changes:
"git push origin master -f"

To revert changes to previous commit:
"git reset <SHA_No> (7 letter log code)"
"git checkout HEAD <file_name>"

To display branches local and remotely use:
"git branch -a"
For local, just use:
"git branch"

To make a new branch and checkout use:
"git checkout -b <branch_name>"

To delete Local Branch, ensure branch isn't checkoed out, then use:
"git branch -d <branch_name>" or "git branch -D <branch_name>" to force delete regardless of merge status.
To delete remote branch use:
"git push <remote_name> --delete <branch_name>"

To store tracked file changes on the working directory without committing:
"git stash"
To restore changes from the stash:
"git stash pop"
To get rid of stashed changes:
"git stash drop"
To stash untracked files on the working directory without committing:
"git stash -u"
