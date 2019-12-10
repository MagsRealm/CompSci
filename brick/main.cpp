#include "physics.h"
#include "Ball.h"
#include "Paddle.h"
#include <vector>
#include <string>

using namespace std;
using namespace sf; //for graphics


int main()
{
    RenderWindow window(VideoMode(800,600),"SFML Works");  //creates a window on the screen that is 800 by 600
    window.setFramerateLimit(60); //sets the game loop to run 60 times per second
    b2World world(b2Vec2(0.0, 0.0));
    //walls
    Block wall_bot = physics::createBox(world,0,600,800,10,b2_staticBody);
    wall_bot->GetFixtureList()->SetFriction(0.0);
    wall_bot->GetFixtureList()->SetRestitution(1.0);
    Block wall_top = physics::createBox(world,0,-10,800,10,b2_staticBody);
    wall_top->GetFixtureList()->SetFriction(0.0);
    wall_top->GetFixtureList()->SetRestitution(1.0);
    Block wall_right = physics::createBox(world,800,0,10,600,b2_staticBody);
    wall_right->GetFixtureList()->SetFriction(0.0);
    wall_right->GetFixtureList()->SetRestitution(1.0);
    Block wall_left = physics::createBox(world,-10,0,10,600,b2_staticBody);
    wall_left->GetFixtureList()->SetFriction(0.0);
    wall_left->GetFixtureList()->SetRestitution(1.0);


    Ball t1(world, 400,300, 25);
    Paddle p1(world, 50, 500, 200,20);


    while (window.isOpen()&& !Keyboard::isKeyPressed(Keyboard::Escape))     //the main game loop, exits if someone closes the window
    {
        Event event; //creates an event object, events include mouse clicks, mouse movement, keyboard presses, etc..
        while (window.pollEvent(event)) //loop that checks for events
        {
            if (event.type == Event::Closed) //checks if window is closed
                window.close();
        }   //ends the event loop

        world.Step(1.0/60, int32(8), int32(3)); //makes the world step 60 times a second

        t1.updatePosition();
        p1.updatePosition();
        t1.checkPaddleHit(p1);
        window.clear(); //clears the screen

        window.draw(t1);
        window.draw(p1);
        window.display();   //displays everything on the video card to the monitor
    }   //ends the game loop

    return 0;
}
