// reading a text file
#include <GL/glew.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>
#include <iostream>
#include <cstring>
#include <fstream>
#include "WarmUp.h"
using namespace std;

vector<Triangle> readCubeVertexData(string filename) {
   string line;
   ifstream myfile(filename);
   vector<vertexData> vertices;
   vector<Triangle> triangles;
   if (myfile.is_open()) {
      while (getline(myfile, line)) {
         vector<string> tokens = split(line, ' ');
         if (tokens.size() == 0) {
            continue;
         }
         else if (tokens[0] == "v") {
            float x = std::stof(tokens[1]);
            float y = std::stof(tokens[2]);
            float z = std::stof(tokens[3]);
            struct vertexData vertex;
            vertex.pos = glm::vec3(x, y, z);
            vertices.push_back(vertex);
         }
         else if (tokens[0] == "f") {
            int first = std::stoi(split(tokens[1], '/')[0]) - 1;
            int second = std::stoi(split(tokens[2], '/')[0]) - 1;
            int third = std::stoi(split(tokens[3], '/')[0]) - 1;
            int fourth = std::stoi(split(tokens[4], '/')[0]) - 1;
            
            Triangle t1;
            t1.vertex1 = vertices[first];
            t1.vertex2 = vertices[second];
            t1.vertex3 = vertices[third];
            triangles.push_back(t1);

            Triangle t2;
            t2.vertex1 = vertices[first];
            t2.vertex2 = vertices[third];
            t2.vertex3 = vertices[fourth];
            triangles.push_back(t2);
         }
      }
      myfile.close();
   }

   else cout << "Unable to open file"; 

   return triangles;
}

vector<Triangle> readDolphinVertexData(string filename) {
   string line;
   ifstream myfile(filename);
   vector<vertexData> vertices;
   vector<Triangle> triangles;
   if (myfile.is_open()) {
      while (getline(myfile, line)) {
         vector<string> tokens = split(line, ' ');
         if (tokens.size() == 0) {
            continue;
         }
         else if (tokens[0] == "v") {
            float x = std::stof(tokens[1]);
            float y = std::stof(tokens[2]);
            float z = std::stof(tokens[3]);
            struct vertexData vertex;
            vertex.pos = glm::vec3(x, y, z);
            vertices.push_back(vertex);
         }
         else if (tokens[0] == "f") {
            int first = std::stoi(split(tokens[1], '/')[0]) - 1;
            int second = std::stoi(split(tokens[2], '/')[0]) - 1;
            int third = std::stoi(split(tokens[3], '/')[0]) - 1;
            
            Triangle t1;
            t1.vertex1 = vertices[first];
            t1.vertex2 = vertices[second];
            t1.vertex3 = vertices[third];
            triangles.push_back(t1);
         }
      }
      myfile.close();
   }

   else cout << "Unable to open file"; 

   return triangles;
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

string readFile(string fileName) {
   string output = "";
   string line;
   ifstream myfile (fileName);
   if (myfile.is_open()) {
      while (getline(myfile, line)) {
         output += line + "\n";
      }
      myfile.close();
   }

   else cout << "Unable to open file";
   
   return output;
}