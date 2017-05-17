#version 330 core

in vec3 texCoords;
uniform samplerCube cubebox;
out vec3 color;

void main()
{
    color = texture(cubebox, texCoords).rgb;
}
