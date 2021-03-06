#pragma once
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>

class Camera2D
{
public:
	Camera2D();
	~Camera2D();

	void init(int screenWidth, int screenHeight);
	void update();

	void setPosition(const glm::vec2& newPos)
	{
		_pos = newPos;
		_needMatrixUpdate = true;
	}
	void setScale(float newScale)
	{
		_scale = newScale;
		_needMatrixUpdate = true;
	}
	glm::vec2 getPos()
	{
		return _pos;
	}
	float getScale()
	{
		return _scale;
	}
	glm::mat4 getCameraMatrix()
	{
		return _cameraMatrix;
	}

	glm::vec2 convertToWorldCoords(glm::vec2 screenCoords);

private:
	int _screenWidth;
	int _screenHeight;
	bool _needMatrixUpdate;
	float _scale;
	glm::vec2 _pos;
	glm::mat4 _cameraMatrix;
	glm::mat4 _orthoMatrix;
};

