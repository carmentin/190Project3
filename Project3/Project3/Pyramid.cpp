#include "Pyramid.h"


Pyramid::Pyramid(GLfloat pyr_vertices [18])
{
	//Get vertices
	std::memcpy(this->pyr_vertices, pyr_vertices, 18 * sizeof(GLfloat));

	//Vertex Array Object
	//Vertex Array Object
	glGenVertexArrays(1, &(this->VAO));
	glBindVertexArray(this->VAO);

	//Vertex Buffer Object
	glGenBuffers(1, &(this->VBO));
	glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(pyr_vertices), pyr_vertices, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
}


Pyramid::~Pyramid()
{
	glDeleteVertexArrays(1, &(this->VAO));
	glDeleteBuffers(1, &(this->VBO));
}

void Pyramid::draw(GLuint shaderProgram) {

	glBindVertexArray(this->VAO);
	glDrawArrays(GL_TRIANGLES, 0, 6);
	glBindVertexArray(0);
}