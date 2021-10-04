#include <glm/glm.hpp>
#include <vector>
#include <string>
using namespace std;

struct vertexData {
   glm::vec3 pos;
};

vector<vertexData> readVertexData(string fileName);

vector<string> split(string str, char del);