#version 330 core
// NOTE: Do NOT use any version older than 330! Bad things will happen!

// This is an example vertex shader. GLSL is very similar to C.
// You can define extra functions if needed, and the main() function is
// called when the vertex shader gets run.
// The vertex shader gets called once per vertex.

layout (location = 0) in vec3 position;
//layout (location = 1) in vec2 vertexUV;

uniform mat4 projection;
uniform mat4 modelview;
uniform mat4 transform;

//Output data
out vec3 texCoords;

void main()
{
    // OpenGL maintains the D matrix so you only need to multiply by P, V (aka C inverse), and M
	texCoords = normalize (position.xyz);
	gl_Position = projection * (modelview * transform) * vec4(position.x, position.y, position.z, 1.0);
}
