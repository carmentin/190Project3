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

	void draw(GLuint shaderprogram, GLuint texture);
	GLuint loadQuadTexture(unsigned char* data, int width, int height);

	GLuint VBO, VAO, EBO;

	glm::vec3 vertices[4] = { 
		glm::vec3(-1.f, -1.f, 0.f), //0 bottom left
		glm::vec3(1.f, -1.f, 0.f), //1 bottom right
		glm::vec3(1.f, 1.f, 0.f),  //2 top right
		glm::vec3(-1.f, 1.f, 0.f) }; //3 top left
};

const GLfloat quad_vertices[] = {
	-1.0f, -1.0f, 0.0f,		0.f, 0.f,
	 1.0f, -1.0f, 0.0f,		1.f, 0.f,
	-1.0f,  1.0f, 0.0f,		0.f, 1.f,
	-1.0f,  1.0f, 0.0f,		0.f, 1.f,
	 1.0f, -1.0f, 0.0f,		1.f, 0.f,
	 1.0f,  1.0f, 0.0f,		1.f, 1.f
	//{0.0f, 0.0f, 0.0f}, {1.0f, 0.0f, 0.0f}, {1.0f, }
};

#endif