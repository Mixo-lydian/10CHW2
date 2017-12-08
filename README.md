# 10C HW 1: Grade Calculator

This project is a Qt application that computes grades for two classes: PIC 10C, and Math 170A. Both classes are assumed to use a homework, 2-midterm, and 1-final structure. Users can manipulate spin boxes or sliders to adjust the scores of each assignment, and choose from up to two methods of grading per class (all scores, or dropping the lower midterm), then when they are ready, they will click the button and calculate the overall score of that student.

--- 
Files in this repo:

- [`readme.md`][read-me] This file, which explains how the application works.
- [`main.cpp`][main] The main file containing the necessary functions to run the program.
- [`mainwindow.h`][mainwindow.h] The header file which contains the MainWindow class and the declaration of custom functions as well as user-defined signals and slots.
- [`mainwindow.cpp`][mainwindow.cpp] The definitions for the functions in the header file. It also sets up the UI and establishes custom signals/slots.
- [`mainwindow.ui`][mainwindow.ui] The file that has all of the specifications for how the main window, and each object within it, appears.

[read-me]: readme.md
[main]: main.cpp
[mainwindow.cpp]: mainwindow.cpp
[mainwindow.h]: mainwindow.h
[mainwindow.ui]: mainwindow.uisign
