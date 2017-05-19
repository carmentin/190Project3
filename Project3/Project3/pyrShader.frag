#version 330 core

in vec3 texCoords;

uniform vec4 incolor;
out vec3 color;

void main()
{
    color = vec4(incolor, 0.5);
}
