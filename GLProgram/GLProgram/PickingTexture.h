#pragma once
#include <GLTools.h>	// OpenGL toolkit
#include <GLShaderManager.h>
#ifdef _OPENGL_PickingTexture
class PickingTexture {
public:
	PickingTexture();
	~PickingTexture();

	bool Init(unsigned int windowWidth, unsigned int windowHeight);
	void EnalbeWriting();
	void DisableWriting();

	struct PixelInfo {
		unsigned int ObjectID;
		unsigned int DrawID;
		unsigned int PrimID;
		PixelInfo() {
			ObjectID = 0;
			DrawID = 0;
			PrimID = 0;
		}
	};
	PixelInfo ReadPixel(unsigned int x, unsigned int y);
private:
	GLuint m_fbo;
	GLuint m_pickingTexture;
	GLuint m_depthTexture;
};

#endif