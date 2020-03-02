# The Engine

Welcome to all visitors who stumbles upon our **Engine** source code! From this repository you can build your own 3D engine.

Our primary focus lies with Windows development at the moment, but we are intending to release for Linux and Mac platforms as well.

Please note that we are in a **very early** stage in development so this project is quite unstable.

If you'd like to contribute, you can do so of course! We are quite happy if you're willing to join our ranks. Before that, please read [CONTRIBUTING](https://github.com/codeidol/engine/blob/master/CONTRIBUTING.md) to gain information about the project.

This project adheres to the Contributor Covenant [Code of Conduct](https://github.com/codeidol/engine/blob/master/CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code. Please report unacceptable behavior to codeidol@github.com.

Please review the [license agreement](https://github.com/codeidol/engine/blob/master/LICENSE.md) before proceeding! This is an open source project and completely free but it is not permitted to use for commercial purposes.

If you require any help or assistance, please contact us on nextgenstar@github. Have fun!

### Version Control

The development takes place primarily in `master` branch.

In order to keep our repository clean, please do NOT commit directly to `master`. If you are intending to add a new feature or fix, please create a fork from latest `master`, then create a pull request for review.

Please find more information in [PULL_REQUESTS_MANAGEMENT](https://github.com/codeidol/engine/blob/master/PULL_REQUESTS_MANAGEMENT.md) how the reviewing should be done.

### First Steps

Before proceeding please go through this checklist to see what tools you need to develop the **Engine**.

#### Prerequisites

##### For Windows

- Install **[GitHub for Windows](https://windows.github.com/)** then **[fork and clone our repository](https://guides.github.com/activities/forking/)**. To use Git from the command line, see the [Setting up Git](https://help.github.com/articles/set-up-git/) and [Fork a Repo](https://help.github.com/articles/fork-a-repo/) articles.
- Install **[CMake for Windows]**(https://cmake.org/download/). To build **Engine** you don't have to run CMake directly. Under scripts\ folder you can find scripts to configure the project automatically with minimal effort.
- Install **[Visual Studio 2017]**(https://visualstudio.microsoft.com/downloads/). All desktop editions of Visual Studio 2017 can build the Engine, including [Visual Studio Community 2017](http://www.visualstudio.com/products/visual-studio-community-vs), which is free for small teams and individual developers.

##### For Linux

TODO

##### For Mac

TODO

#### Setup Development Environment

Please follow these steps to configure your local development environment.

##### For Windows

- Open your source folder in Explorer and execute **configure.cmd**. This automatic script shall check and configure your development environment.
- Load the project into Visual Studio by double-clicking on the **targets/engine.sln** file. Right click on the **editor** target and select **Build**.

##### For Linux/Mac

- Execute `./scripts/configure.sh`. This bash script shall check and configure your development environment accordingly.
- Please view your `./targets` directory and you're ready to go!
