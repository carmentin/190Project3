#version 330 core

in vec3 texCoords;
uniform samplerCube cubebox;

uniform vec3 incolor;
out vec3 color;

void main()
{
    color = texture(cubebox, texCoords).rgb;
}
