// reading a text file
#include <GL/glew.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <glm/glm.hpp>
using namespace std;

struct vertexData {
   glm::vec3 pos;
};
vector<vertexData> readVertexData(string fileName);
vector<string> split(string str, char del);

int main () {
   vector<vertexData> vertices = readVertexData("data/cube.obj");
   for (int i = 0; i < vertices.size(); i++) {
      cout << vertices[i].pos.x << ", " << vertices[i].pos.y << ", " << vertices[i].pos.z << endl;
   }
}

vector<vertexData> readVertexData(string filename) {
   string line;
   ifstream myfile(filename);
   vector<vertexData> vertices;
   if (myfile.is_open()) {
      while (getline(myfile, line)) {
         vector<string> tokens = split(line, ' ');
         if (tokens.size() != 0 && tokens[0] == "v") {
            float x = std::stof(tokens[1]);
            float y = std::stof(tokens[2]);
            float z = std::stof(tokens[3]);
            struct vertexData vertex;
            vertex.pos = glm::vec3(x, y, z);
            vertices.push_back(vertex);
         }
      }
      myfile.close();
   }

   else cout << "Unable to open file"; 

   return vertices;
}

// String tokenizer based on the tutorial from https://www.geeksforgeeks.org/how-to-split-a-string-in-cc-python-and-java/
vector<string> split(string str, char del) {
   vector<string> tokens;
   // declaring temp string to store the curr "word" upto del
   string temp = "";

   for(int i=0; i<(int)str.size(); i++){
      // If cur char is not del, then append it to the cur "word", otherwise
      // you have completed the word, print it, and start a new word.
      if(str[i] != del) {
         temp += str[i];
      }
      else {
         if (temp.size() > 0) {
            tokens.push_back(temp);
         }
         temp = "";
      }
   }

   if (temp.size() > 0) {
      tokens.push_back(temp);
   }

   return tokens;
}