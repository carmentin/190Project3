#version 330 core

in vec2 texCoords;
uniform sampler2D renderedTexture;
uniform int broken;

out vec3 color;

void main()
{
	color = texture(renderedTexture, texCoords).rgb;
	if(broken > 0){
		color = vec3(0,0,0);
	}
}
