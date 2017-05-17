#include "Quad.h"

Quad::Quad()
{
	//Vertex Array Object
	glGenVertexArrays(1, &(this->VAO));
	glBindVertexArray(this->VAO);

	//Vertex Buffer Object
	glGenBuffers(1, &(this->VBO));
	glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(quad_vertices), quad_vertices, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
}

Quad::~Quad()
{
	glDeleteVertexArrays(1, &(this->VAO));
	glDeleteBuffers(1, &(this->VBO));
}

void Quad::draw(GLuint shaderProgram) 
{
	glBindVertexArray(this->VAO);
	glDrawArrays(GL_TRIANGLES,0,6);
	glBindVertexArray(0);
}
