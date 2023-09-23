# 🎆 42-Fract-ol

## 📑 About
The purpose of this project is to code Mandelbrot and Julia fractals using the 42 graphical library Minilibx.
 

## Prerequisites

This project is written in C, you need to have a gcc compiler to run the program.

Depending your device, you may also need to install some graphical packages :

`sudo apt-get update`

`sudo apt-get install xorg libxext-dev zlib1g-dev libbsd-dev libx11-dev`
 

## 💻 Instructions

### Prerequisites

1 : Download the fract-ol folder

2 : Download the Minilibx folder, [here](https://github.com/42Paris/minilibx-linux/) : 

Put the Minilibx folder in the frac-ol folder. 

### Compilation

First you need to compile the Minilibx. Go to the Minilibx folder and run the makefile in a terminal :

`make`

It will create a libmlx.a file : put this archive file in the parent folder fract-ol.

If it doesn't work, it is probably because you don't have the required package installed (see Prerequisites section).

Then run the makefile of the project (`make` again).

### 🕹 Testing

#### Manual

To see the Mandelbrot fractal, run the fractol with "mandelbrot" parameter :

`./fractol mandelbrot`

To see the Julia fractal, run the fractol with "julia <x> <y>" parameters, were x and y it the first items of the julia set, for instance :

`./fractol julia 0.2 0.01"`

## 💡 Project details

This project needs to have basical knowledge of complex numbers and mathematical sequence.

