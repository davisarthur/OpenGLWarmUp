# OpenGL Warm Up
My project includes 4 programs that can be run.

## Hello Triangle
The ```helloTriangle.cpp``` program renders a triangle with colored vertices. Use the following command to compile this program on Mac:
```
g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp helloTriangle.cpp -o helloTriangle.out
```
I do not own a Windows or Linux machine, but I believe the following command can be used for compilation on those platforms:
```
g++ -lglfw -lglew helperFunctions.cpp helloTriangle.cpp -o helloTriangle.out
```
Once compiled, the program can be run using the following command: ```./helloTriangle.out```

## Cube
The ```cube.cpp``` program loads the model from the ```data/cube.obj``` file and renders it with orthographic projection in wireframe 
mode. Use the following command to compile this program on Mac:
```
g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp cube.cpp -o cube.out
```
On Windows or Linux:
```
g++ -lglfw -lglew helperFunctions.cpp cube.cpp -o cube.out
```
Finally, to run the program use the following command: ```./cube.out```

## Dolphins
The ```dolphins.cpp``` program loads the model from the ```data/dolphins.obj``` file and renders it with orthographic projection. 
This file will prompt the user to enter information about which shaders they would like to use. Use the following command to compile 
this program on Mac:
```
g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp dolphins.cpp -o dolphins.out
```
On Windows or Linux:
```
g++ -lglfw -lglew helperFunctions.cpp dolphins.cpp -o dolphins.out
```
Finally, to run the program use the following command: ```./dolphins.out```

## Flowers
The ```flowers.cpp``` program loads the model from the ```data/flowers.obj``` file and renders it with orthographic projection. 
Use the following command to compile this program on Mac:
```
g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp flowers.cpp -o flowers.out
```
On Windows or Linux:
```
g++ -lglfw -lglew helperFunctions.cpp flowers.cpp -o flowers.out
```
Finally, to run the program use the following command: ```./flowers.out```
