#version 330 core

in vec2 texCoords;
uniform sampler2D renderedTexture;

out vec3 color;

void main()
{
	color = texture(renderedTexture, texCoords).rgb;
	//color = (0.3, 0.3, 0.3)
}
