# Lab 3: Investigating Process Lifecycles and OS Interaction

## Introduction

This lab demonstrates how C programs interact with the Linux operating system and how processes are managed by the OS.

## Task 1: Long-Running Process

A C program runs for 30 seconds using sleep(). The process is executed in the background and monitored using the ps command.

## Task 2: Process Identity

The program uses getpid() to obtain its own Process ID and getppid() to obtain its Parent Process ID.

## Task 3: Exit Codes

The program demonstrates how return codes communicate success or failure to the operating system.

- 0 = Success
- 1 = Failure

The exit status is checked using echo $?.

## Task 4: Standard I/O

The program demonstrates standard input and output using scanf() and printf().

## Task 5: Conditional Execution

The program displays its PID, accepts a user choice, and returns different exit codes depending on the choice.

## Technologies Used

- C
- Linux
- GCC
- Git
- GitHub