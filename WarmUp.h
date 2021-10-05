#include <glm/glm.hpp>
#include <vector>
#include <string>
using namespace std;

struct vertexData {
   glm::vec3 pos;
};

struct Triangle {
   struct vertexData vertex1;
   struct vertexData vertex2;
   struct vertexData vertex3;
};

/*
struct SeparateTriangles {
   vector<Triangle> triangles;
      
   void addTriangle(Triangle t);
};
*/

vector<Triangle> readVertexData(string fileName);

vector<string> split(string str, char del);