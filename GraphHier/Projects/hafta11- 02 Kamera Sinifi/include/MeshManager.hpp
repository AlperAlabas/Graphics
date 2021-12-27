#ifndef MeshManager_hpp
#define MeshManager_hpp
#include<map>
#include<string>
#include "VertexTypes.hpp"
#include "VertexArrayObject.hpp"
class Mesh2D;
class Mesh3D;
class VertexArrayObject;



class MeshManager
{
public:
    Mesh2D* createTriangle();
    Mesh2D* createCircle();
    Mesh2D* createHex();
    Mesh2D* createSquare();
    Mesh3D* createCube();
    Mesh3D* createPyramid();
    Mesh3D* createGrid();
    Mesh3D* createCylinder(float,float);
private:
    VertexArrayObject createTextureBuffers(TexturedVertexList& vertices,IndexList& indices);
    VertexArrayObject createBuffers(VertexList&  vertices,IndexList& indices);

    std::map<std::string,VertexArrayObject> vaoMap;
};


#endif