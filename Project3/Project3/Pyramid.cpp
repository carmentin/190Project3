#include "Pyramid.h"


Pyramid::Pyramid(std::vector <glm::vec3> vertices)
{
	//Get vertices
	//std::memcpy(this->pyr_vertices, pyr_vertices, 54 * sizeof(GLfloat));

	//VAO
	glGenVertexArrays(1, &(this->VAO));
	glBindVertexArray(this->VAO);

	//VBO
	glGenBuffers(1, &(this->VBO));
	glBindBuffer(GL_ARRAY_BUFFER, this->VBO);
	glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(glm::vec3), &vertices[0], GL_STATIC_DRAW);

	//EBO
	glGenBuffers(1, &(this->EBO));
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, this->EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(pyr_indices), pyr_indices, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GLfloat), (GLvoid*)0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
}


Pyramid::~Pyramid()
{
	glDeleteVertexArrays(1, &(this->VAO));
	glDeleteBuffers(1, &(this->VBO));
	glDeleteBuffers(1, &(this->EBO));
}

void Pyramid::draw(GLuint shaderProgram) {
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	glBindVertexArray(this->VAO);
	glDrawElements(GL_TRIANGLES,12, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}