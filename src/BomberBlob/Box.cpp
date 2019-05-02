#include <BomberBlob/Box.hpp>

Box::Box(float x, float y, Blob::GL::Texture &texture) : RectStatic({x, y}, {0.8f, 0.8f}, BOX) {
    Cube::setPosition(x, y, 0.4f);
	setScale(0.8f, 0.8f, 0.8f);

	setTexture(texture);
	setTextureScale({4.f, 4.f});
}

void Box::hit(int objectType, Object &object) {
	if(objectType == EXPLOSION)
		destroyed = true;
}
