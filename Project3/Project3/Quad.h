#ifndef _QUAD_H_
#define _QUAD_H_

#define GLFW_INCLUDE_GLEXT
#ifdef __APPLE__
#define GLFW_INCLUDE_GLCOREARB
#else
#include <GL/glew.h>
#endif
#include <GLFW/glfw3.h>
// Use of degrees is deprecated. Use radians instead.
#ifndef GLM_FORCE_RADIANS
#define GLM_FORCE_RADIANS
#endif

#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <iostream>
#include <vector>

class Quad
{
public:
	Quad();
	~Quad();

	void draw(GLuint shaderprogram);

	GLuint VBO, VAO, EBO;
};

const GLfloat quad_vertices[6][3] = {
	{-1.0f, -1.0f, 0.0f}, {	1.0f, -1.0f, 0.0f}, {-1.0f,  1.0f, 0.0f},
	{-1.0f,  1.0f, 0.0f}, { 1.0f, -1.0f, 0.0f}, {1.0f,  1.0f, 0.0f} 
};

#endif