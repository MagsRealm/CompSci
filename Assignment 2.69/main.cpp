#include "physics.h"
#include <vector>
#include <string>

#define LEFT 1
#define RIGHT 2

using namespace std;
using namespace sf; //for graphics


int main()
{
    Texture Background_sky;
    RectangleShape skybox;
    Background_sky.loadFromFile("sky.png");
    skybox.setSize(Vector2f(320,512));
    skybox.setTexture(&Background_sky);


    srand(time(0));
    RenderWindow window(VideoMode(320,512),"SFML Works");  //creates a window on the screen that is 800 by 600
    window.setFramerateLimit(60); //sets the game loop to run 60 times per second
    b2World world(b2Vec2(0.0, 9.8));

    //restart

    Font font1;
    font1.loadFromFile("FONT.ttf");
    Text text1;
    text1.setFont(font1);
    text1.setColor(Color::White);
    text1.setCharacterSize(window.getSize().y * 0.043f);
    text1.setString("L");

    Text text2;
    text2.setFont(font1);
    text2.setColor(Color::White);
    text2.setCharacterSize(window.getSize().y * 0.043f);
    text2.setString("R");


    //Vectorthing
    vector<Block> floor2;

    vector<RectangleShape> cloudimage;
    Texture cloud_txt;
    cloud_txt.loadFromFile("cloud.png");

    //walls
    Block floor = physics::createBox(world,-1000,5000,3000,30,b2_staticBody); //floor
    floor->GetFixtureList()->SetRestitution(0);


    int floor2_y=4900;
    int floor2_x=0;

    floor2.push_back(physics::createBox(world, rand()%240,floor2_y,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-100,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-200,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-300,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-400,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-500,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-600,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-700,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-800,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-900,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));

    if (physics::getPosition(floor2.back()).x>160)
    {
        floor2_x=rand()%100;
    }
    else
    {
        floor2_x=120+rand()%100;
    }
    floor2.push_back(physics::createBox(world, floor2_x,floor2_y-1000,80,2,b2_staticBody));
    floor2.back()->GetFixtureList()->SetRestitution(0);
    physics::setBlockColor(floor2.back(),Color::Transparent);
    cloudimage.push_back(RectangleShape(Vector2f(110,10)));
    cloudimage.back().setTexture(&cloud_txt);
    cloudimage.back().setPosition(Vector2f(physics::getPosition(floor2.back()).x-45,physics::getPosition(floor2.back()).y-5));



    //Jump Level
    RectangleShape Batt_sprite1;
    Texture Batt_tx1;
    Batt_tx1.loadFromFile("battery1.png");

    RectangleShape Batt_sprite2;
    Texture Batt_tx2;
    Batt_tx2.loadFromFile("battery2.png");

    RectangleShape Batt_sprite3;
    Texture Batt_tx3;
    Batt_tx3.loadFromFile("battery3.png");

    RectangleShape Batt_sprite4;
    Texture Batt_tx4;
    Batt_tx4.loadFromFile("battery4.png");


    //Timers
    sf::Clock clock1;

    View gview;
    gview.setCenter(Vector2f(160,256));
    gview.setSize(Vector2f(320,512));
    window.setView(gview);

    RectangleShape Mailman_sprite;
    Texture Mailman_sprite_tx;
    Mailman_sprite_tx.loadFromFile("mailman.png");

    //Mailman_sprite.setSize(Vector2f(32,40));
    //Mailman_sprite.setPosition(Vector2f(100,100));

    Mailman_sprite.setTexture(&Mailman_sprite_tx);
    Mailman_sprite.setTextureRect(IntRect(30,0,30,30));
    Block dude(physics::createBox(world, 80, 4990,26,40));
    dude->GetFixtureList()->SetRestitution(.15);
    physics::noSpin(dude);
    physics::setBlockColor(dude, Color::White);

    //size pos text for battery
    Batt_sprite1.setSize(Vector2f(80,40));
    Batt_sprite1.setTexture(&Batt_tx1);

    Batt_sprite2.setSize(Vector2f(80,40));
    Batt_sprite2.setTexture(&Batt_tx2);

    Batt_sprite3.setSize(Vector2f(80,40));
    Batt_sprite3.setTexture(&Batt_tx3);

    Batt_sprite4.setSize(Vector2f(80,40));
    Batt_sprite4.setTexture(&Batt_tx4);


    physics::setBlockTextureRect(dude, &Mailman_sprite_tx, IntRect(30,0,30,30));


    int batt;
    int Left_Right;
    int batt_sprite_draw;
    bool isMouseDown = false;
    bool isMouseUp = false;
    int launchTime;
    float xMove = 100.0;

    while (window.isOpen()&& !Keyboard::isKeyPressed(Keyboard::Escape))     //the main game loop, exits if someone closes the window
    {

//        cout<<xMove<< endl;

        window.setView(gview);

        //battpos
        Batt_sprite1.setPosition(Vector2f(physics::getPosition(dude).x-50,physics::getPosition(dude).y+100));
        Batt_sprite2.setPosition(Vector2f(physics::getPosition(dude).x-50,physics::getPosition(dude).y+100));
        Batt_sprite3.setPosition(Vector2f(physics::getPosition(dude).x-50,physics::getPosition(dude).y+100));

        isMouseDown = false;
        isMouseUp = false;
        Event event; //creates an event object, events include mouse clicks, mouse movement, keyboard presses, etc..
        while (window.pollEvent(event)) //loop that checks for events
        {
            if (event.type == Event::Closed) //checks if window is closed
                window.close();
            if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                isMouseDown = true;
            if (event.type == Event::MouseButtonReleased && event.mouseButton.button == Mouse::Left)
                isMouseUp = true;

        }   window.clear(); //clears the screen//ends the event loop

        window.draw(skybox);
        skybox.setPosition(Vector2f(0,physics::getPosition(dude).y-406));

        cout<<skybox.getPosition().x<<endl;
        cout<<skybox.getPosition().y<<endl;
        cout<<"-"<<endl;


        if (clock1.getElapsedTime().asSeconds()>3)
        {
            clock1.restart();

        }
        if (isMouseDown)
        {
            clock1.restart();
            xMove = 0.0;
        }
        if (isMouseUp)
        {

            if (clock1.getElapsedTime().asSeconds()<1)
            {

                launchTime=5;

            }
            if (clock1.getElapsedTime().asSeconds()<2 && clock1.getElapsedTime().asSeconds()>1)
            {
                launchTime=7;

            }
            if (clock1.getElapsedTime().asSeconds()<3 && clock1.getElapsedTime().asSeconds()>2)
            {
                launchTime=9;

            }
        }
        //battery drawing case
        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (clock1.getElapsedTime().asSeconds()<1)
            {
                batt_sprite_draw = 1;
            }
            if (clock1.getElapsedTime().asSeconds()<2 && clock1.getElapsedTime().asSeconds()>1)
            {
                batt_sprite_draw = 2;
            }
            if (clock1.getElapsedTime().asSeconds()<3 && clock1.getElapsedTime().asSeconds()>2)
            {
                batt_sprite_draw = 3;
            }
        }
        else
        {
            batt_sprite_draw = 4;
        }

    if (physics::getPosition(dude).x<0){
        physics::setVelocity(dude,Vector2f(-physics::getVelocity(dude).x,physics::getVelocity(dude).y));
    xMove=100;


    }
    if (physics::getPosition(dude).x>320){
        physics::setVelocity(dude,Vector2f(-physics::getVelocity(dude).x,physics::getVelocity(dude).y));
    xMove=-100;
}





        //Left or Right case // TODO
        if (Mouse::getPosition(window).x <= window.getSize().x / 2.0f){
            Left_Right = LEFT;
            sf::Vector2f batt_pos;
            batt_pos.x = (gview.getCenter().x - 150);
            batt_pos.y = (gview.getCenter().y - window.getSize().y / 2.0f) + window.getSize().y * 0.08f;
            text1.setPosition(Vector2f(gview.getCenter().x + window.getSize().x * 0.35f, gview.getCenter().y - window.getSize().y * 0.4f));

        } else {
            Left_Right = RIGHT;
            text2.setPosition(Vector2f(gview.getCenter().x + window.getSize().x * 0.35f, gview.getCenter().y - window.getSize().y * 0.4f));
        }


        //jump
        if (physics::checkCollision(dude) == true)
        {

            physics::setVelocity(dude, Vector2f(xMove, physics::getVelocity(dude).y));

            if (Mouse::getPosition(window).x <= window.getSize().x / 2.0f)
            {
                xMove = -100.0;
                if (isMouseUp)
                    physics::moveBody(dude, Vector2f(0,-2.2*launchTime));
            }


            if (Mouse::getPosition(window).x >= window.getSize().x / 2.0f)
            {
                xMove = 100.0;

                if (isMouseUp)
                    physics::moveBody(dude, Vector2f(0,-2.2*launchTime));
            }

            if (Mouse::isButtonPressed(Mouse::Left))
                xMove = 0;
        }


        gview.setCenter(Vector2f(160,physics::getPosition(dude).y-150)); // Move View

        sf::Vector2f batt_pos;
        batt_pos.x = (gview.getCenter().x - 150);
        batt_pos.y = (gview.getCenter().y - window.getSize().y / 2.0f) + window.getSize().y * 0.08f;

        Batt_sprite1.setPosition(batt_pos);
        Batt_sprite2.setPosition(batt_pos);
        Batt_sprite3.setPosition(batt_pos);
        Batt_sprite4.setPosition(batt_pos);







//        for(int i=0; i<=1;i++){
//            window.draw(floor2[i]);
//        }


        physics::displayWorld(world,window);

        //cloud drawing
        for (int i=0; i<cloudimage.size();i++ )
            window.draw(cloudimage[i]);


        switch (batt_sprite_draw)
        {
            case 1:
                window.draw(Batt_sprite1);
                break;
            case 2:
                window.draw(Batt_sprite2);
                break;
            case 3:
                window.draw(Batt_sprite3);
                break;
            case 4:
                window.draw(Batt_sprite4);
                break;
        }

        switch (Left_Right)
        {
            case LEFT:
                window.draw(text1);
                break;
            case RIGHT:
                window.draw(text2);
                break;


        }



        window.display();   //displays everything on the video card to the monitor
    }   //ends the game loop

    return 0;
}
