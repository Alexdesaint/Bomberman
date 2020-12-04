#pragma once

#include <Blob/Core/Window.hpp>
#include <Blob/Shapes.hpp>

#include <Game.hpp>
#include <Core/ContactListener.hpp>

#include <BomberBlob/BombManager.hpp>
#include <BomberBlob/Bomber.hpp>
#include <BomberBlob/Bonus.hpp>
#include <BomberBlob/Box.hpp>
#include <BomberBlob/Explosion.hpp>
#include <BomberBlob/IndestructibleBox.hpp>

class BomberBlob : public Game {
private:
    Textures textures;
    b2World world;

    Blob::Core::Camera camera;

    float width = 15, height = 15;

    Blob::Shapes::Plane ground;
    std::list<BombManager> bombs;
    std::list<IndestructibleBox> indestructibleBoxes;
    std::list<Box> boxes;
    std::list<Bonus> bonus;
    std::list<Bomber> bombers;

    ContactListener contactListener;

    void gameLoop();
public:
    BomberBlob(Blob::Core::Window &window, std::map<int, Player> &players);

    void settings();

    void run() final;
};
