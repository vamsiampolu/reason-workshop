# Reason Workshop

If you are on windows, or any non-mainstream linux / OSX, please download virtualbox and set it up before arriving. I will provide a vbox image with the latest version of this repo set up, and with some text editors set up inside it for the day.

This workshop runs a step by step introduction to applying the language to building the game Tic-Tac-Toe, using Reason and React.

Please make sure you have cloned this repository and run all the installation instructions before coming to the workshop. If any instructions are unclear, or if you're having trouble getting set up, please email me at bassjacob @ gmail and I'll make sure to help you.

## Requirements

*   NodeJS >= v7.10.0 and npm >= 4 [Installation Instructions](https://nodejs.org/en/download). Do not use NodeJS 8 or npm 5, they are broken currently.
*   Install refmt, ocamlmerlin and ocamlmerlin-reason according to [reasonml js workflow](https://facebook.github.io/reason/jsWorkflow.html#javascript-workflow-editor-setup-global-utilities).
    (basically just run: `npm install -g git://github.com/reasonml/reason-cli.git#beta-v-1.13.5`)
*   Please follow the [reasonml tooling instructions](https://facebook.github.io/reason/tools.html#editor-integration) to set up your text editor. At time of writing this, the following editors are supported:
    *   vim / neovim
    *   emacs
    *   atom
    *   [vscode](https://github.com/freebroccolo/vscode-reasonml)

## Installation Instructions

```
# Install and set up the requirements above

# Clone this repository

git clone https://github.com/bassjacob/reason-workshop

# Change directory into the cloned folder

cd reason-workshop

# Install the project dependencies

npm i
```

## Getting Started
Before attending the workshop!!!

Once you have the repository cloned and the dependencies installed, please run the following command to test the installation. From inside the root of the repository (the folder you just cloned into) run the following command:

npm run watch

You should see a lot of output on your terminal, and after a few seconds you should be able to visit `localhost:8080` and see a webpage on the screen.

If you see anything different, or the command fails for any reason, please take a screenshot and contact me.

## Workshop

To run the workshop, run `npm run watch`. In a browser navigate to <http://localhost:8080/problems/1> and follow the instructions from there.

This project requires two ports to be free on your machine, 3000 and 8080. You can override these with the setting `SERVER_PORT` and `WEBPACK_PORT` like so:

```
# on linux / osx
SERVER_PORT=3000 WEBPACK_PORT=8080 npm run watch;
```

## Contact Me

Email: bassjacob @ gmail

Twitter: @bassjacob

Discord: [Join the Reason Discord channel](https://discord.gg/reasonml)
