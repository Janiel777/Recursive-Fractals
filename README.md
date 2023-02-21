# PA1: Openframeworks Audiovisualizer
The objective for this first project is to complete this audiovisualizer with the help of OpenFrameworks!

# What it can do out of the box
After compiling and running the project for the first time, you should be able to do a couple of things:

- Using the "P" key, you should be able to play music from "beat.wav" 
- Using different number keys, you can visualize the music in different ways:
    - 1: Rectangle Height Visualizer
    - 2: Circle Radius Visualizer
    - 3: Rectangle Width Visualizer (implemented)
    - 4: Custom Visualizer (to be implemented)

# Classes
This project contains two classes that should be of your concern: ofApp and AudioVisualizer.

## ofApp
This is the class that brings most things together. Here, you will find the code that causes the audio to play and pause. It is also to where the visualization happens. Here, you can observe how the code to change between modes works, and how the song is actually played. 

## AudioVisualizer
The AudioVisualizer class provides us with the data needed to do the visualization. Using some of the tools OpenFrameworks provides us and math, we can obtain information such as the amplitude of the sound.

# What has been added since development started
Since development started you are now able to do different things:
- Using the "A" key now suspends de audio visualizer in place while pressing it again unsuspends it.
- Using the "D" key now cycles through select sounds on the queue. These sounds are: 
    - 1: beat.wav
    - 2: geesebeat.wav
    - 3: pigeon-coo.wav
    - 4: rock-song.wav
- Using the "-" key now lowers the volume of the sound while pressing the "=" key increases it.
- Using the "r" key now records the key inputs in the audio visualizer program.
- Using the "t" key replays the recording done using "r" 
- Using the "c" key cancels that replay of the recording.
## New features have also been implemented:
- The rectangle height visualizer has been completed.
- The rectangle width visualizer has been implemented and completed.
- There is now an indicator for when you are recording and replaying the inputs.
- An updated UI that shows all the commands you can use before entering the program.

# Project Members:
- Julian Armando Toro Doval
    - Email: julian.toro1@upr.edu
- Ezequiel Mendez Lopez
    - Email: ezequiel.mendez2@upr.edu
