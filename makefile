helloTriangle_OBJECTS:= helloTriangle.o
cube_OBJECTS:= cube.o
dolphins_OBJECTS:= dolphins.o
flowers_OBJECTS:= flowers.o

default: helloTriangle cube dolphins flowers

helloTriangle:
	g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp helloTriangle.cpp -o helloTriangle.o
cube:
	g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp cube.cpp -o cube.o
dolphins:
	g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp dolphins.cpp -o dolphins.o
flowers:
	g++ -lglfw -lglew -framework OpenGL helperFunctions.cpp flowers.cpp -o flowers.o