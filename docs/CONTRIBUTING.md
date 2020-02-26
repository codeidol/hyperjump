# How To Contribute

There are several ways to contribute to the development of **Engine**. The most often encountered problem is not knowing where to begin or what to do. If you are able to program or understand the technical information that is pertinent to this project, helping the development can be easy.

- [What To Do?](#what-to-do?)
- [How To Contribute?](#how-to-contribute?)
- [Where To Start?](#where-to-start?)

## What To Do?

### Fix bugs

You can try to fix a few bugs that are already listed. Squashing bugs is not a simple task. It requires a lot more skill than simply searching for them, and can be time consuming; however, by doing that you greatly help **Engine** become a stable application.

### Fix tests

Tests are used to check the functionality and correctness of APIs on **Engine**. There are some unit tests that you could help **Engine** pass and some that are broken or yet to be written.

### Test Engine

By localizing bugs, developers can identify what causes the bug and which part it affects. There are a variety of methods to [debug] Engine while testing it. After identifying a bug, check if it is already known about by searching on github and adding any additional information to the report. If you think that it is an unidentified bug, consider [filing a bug report].

### Implement new things

Considering Engine is alpha quality software, there is a lot of [missing functionality]. Before starting a project to implement something, find out whether another person is working on the same thing. If you find that someone is already working on it, ask if any assistance is needed for what specifically is being worked on or a related project. More often than not, someone will start to implement something and move onto something else before it's complete. Make sure you stay committed to what you are going to implement, and do not be afraid to ask for assistance if you need help with something.

### Write documentation

There are some important points if you would like to help document Engine:

1. Make sure the documentation does not exist yet (if it does, help improve it).
2. Respect [clean room reverse engineering] practices.
3. Add your knowledge to a place where the other developers can find it.

## How To Contribute?

Your contribution can be of numerous forms. We currently accept two ways to contribute - Pull Requests and Patches.

### Pull Requests

We gladly accept __[Pull Requests]__. Pull requests let you tell others about changes you have pushed to a repository on GitHub. Once a pull request is opened, you can discuss and review the potential changes with collaborators and add follow-up commits before the changes are merged into the repository. __Pull request is a preferred way to submit your work__ - it makes reviewing and merging your contribution much easier.

### Patches

A __[patch]__ is a set of changes to existing source code. The changes in a patch can be merged into existing source code. This process is referred to as applying a patch (to source code). Which changes a patch contains and the way the patch is structured can have significant impact on the consequences that can happen from applying the patch. 

See [Submitting Patches] for details.

### Commit style

Our commit style is defined in a __[commit template]__. Use it as a reference or turn it on using `git config commit.template .gitmessage`. This will set this template as an initial commit message for the new commits in your local repository.

### Rules and Recommendations

- *Use your __real name__ and __real email__.* We do not accept anonymous contributions!
- *Ensure your contribution is properly described.* Include the relevant issue number if applicable.
- *Put only related changes.* It will make reviewing easier as the reviewer needs to recall less information about the existing source code that is changed.
- *Search for similar pull requests/patches before submitting.* It may be that a similar pull request or issue was opened previously. Comment and review on that one instead.
- *Keep your contribution small and focused on the topic.* It can be tempting to fix existing issues as you come across them while reading the source code. Resist the temptation and put in a note in the source code instead, or (even better) put the issue in the issue tracking system.
- *Respect our __[Coding Style]__ and __[Programming Guidelines]__.*
- *Do not be afraid to ask questions.* Ask our developers on [Discord] or [IRC] channel.

## Where To Start?

Finding a good project to start with can be a challenge, because when starting out you are (usually) not aware of all the possibilities. To help you find a project, here are some ideas to try:

- Find a test that fails, and try to make it succeed
- Look at the source code and find something to work on
- Ask for help on [IRC] or [Discord]
- Additionally, there are some tests that cause crashes/hangs, but these might be slightly harder

# See Also

- [Rules for managing Pull Requests](PULL_REQUESTS_MANAGEMENT.md)