#version 330 core

in vec3 texCoords;

uniform vec3 incolor;
out vec3 color;

void main()
{
    //color = vec4(incolor, 0.5);
	color = incolor;
	//color = vec3(1,0,1);
}
