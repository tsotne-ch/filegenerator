# Script File Generator

Simple boilerplate generator for different programming languages. (and HTML)

<div>
  <img width="85%" alt="image(1)" src="https://github.com/tsotne-ch/filegenerator/assets/144833141/1a6ea9c9-a45b-49f3-8520-ca5870ce41a7">
</div>

## Has been tested on MacOS

The app has been tested on MacOS. 

generator_unix.cpp should work for both MacOS and Linux.
generator_win.cpp should work for Windows.

# How to run

## Compilation and Running

For Unix based systems:
```
g++ -o generate generate_unix.cpp
./generate
```

For Windows:
```
g++ -o generate.exe generate_win.cpp
generate.exe
```

## How to use it anywhere

In order to use it anywhere we need to save these files somewhere and add the directory to the OS's PATH variable which can be done in different ways.

## For Windows:

In Windows Search type in Enviroment Variables.

Click the following search result (should be "System properties")

Click the button named "Enviroment Variables"

In the Edit System Variable (or New System Variable) window, specify the value of the PATH environment variable. ...
Reopen Command prompt window, and run the app again.

## For Unix Based Systems (MacOS, Linux): 

Add the following code to the ~/.profile or ~/.bashrc file

```
export PATH="$PATH:/path/to/app"
```

Then you will be able to run the generate anywhere to very quickly and rapidly generate a simple boilerplate for your project with your programming lanugage.
