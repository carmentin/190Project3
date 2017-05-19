#ifndef _PYRAMID_H_
#define _PYRAMID_H_

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

class Pyramid
{
public:
	Pyramid(GLfloat pyr_vertices [18]);
	~Pyramid();

	void draw(GLuint);

	GLuint VBO, VAO, EBO;
	GLfloat pyr_vertices [18];
};


#endif

