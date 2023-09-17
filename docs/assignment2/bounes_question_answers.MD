# Answers

<h4>1, What is git repository?</h4>
```md
Git repository is a storage for any project that is in development or already developed projects.
a repository can be publicly or privately accessed. It is more like a project directory on the cloud with more interactive
features.
```
<h4>2, How to initialize a new git repository in a directory?</h4>
<p> open your desired directory, then right click and click git bash here then on the terminal window.</p>
<p style="opacity:0.5">$ git-bash</p>

```bash
$ git init
```
<p> this outputs</p>
```md
Initialized empty Git repository in C:/path_to_your_directory/your_directory_name.git/
```
<h4>3, What is a git command to clone a remote repository to local machine?</h4>
<p>open your desired directory to save the cloned files, then right click and click git bash here then on the terminal window.</p>
<h5>go to <a href="https://github.com"> github.com </a> and copy your desired repository link</h5>
<p style="opacity:0.5">$ git-bash</p>

```bash
$ git clone your_link
```
<h4>4, what is .gitignore?</h4>
.gitignore is a file that tells GitHub to exclude the files listed inside this folder It is important to exclude files 
that are not necessary but that helps the editors like .vscode directory for vscode editor
or .idea for jetbrains code editors and packages that occupies more space.
<p> For example: </p>
```md
# .gitignore
.vscode
.pipenv
```
<h1 style="text-align:center">--------------The End--------------</h1>
