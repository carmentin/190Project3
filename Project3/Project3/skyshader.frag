#version 330 core
// This is a sample fragment shader.

in vec3 texCoords;
uniform samplerCube myTextureSampler;
out vec3 color;

void main()
{
    color = texture(myTextureSampler, texCoords).rgb;
}
