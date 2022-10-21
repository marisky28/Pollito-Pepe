#include <SFML/Graphics.hpp>
#include "Pollito.h"

int main()
{
    Pollito pepe(15);
    Pollito pio(90);
    Pollito chiken(100);
    Pollito plumadizimo(2.5);
    chiken.polliPio();

    sf::RenderWindow window(sf::VideoMode(320, 360), "SFML works!");
    sf::CircleShape cabecita(100.f);
    cabecita.setFillColor(sf::Color::Yellow);
    cabecita.setPosition(sf::Vector2f{ 50,0 });

    sf::CircleShape cuerpecito(100);
    cuerpecito.setFillColor(sf::Color::Yellow);
    cuerpecito.setPosition(sf::Vector2f{ 50,125 });

    sf::CircleShape ojitoLeft(20.f);
    ojitoLeft.setFillColor(sf::Color::Black);
    ojitoLeft.setPosition(sf::Vector2f{ 100,70 });

    sf::CircleShape ojitoRight(20.f);
    ojitoRight.setFillColor(sf::Color::Black);
    ojitoRight.setPosition(sf::Vector2f{ 165,70 });

    sf::CircleShape brilloRight(5.f);
    brilloRight.setFillColor(sf::Color::White);
    brilloRight.setPosition(sf::Vector2f{ 175,80 });

    sf::RectangleShape Piquito({ 50.f,50.f });
    Piquito.setFillColor(sf::Color::Red);
    Piquito.setPosition(sf::Vector2f{ 150,75 });
    Piquito.setRotation(45.f);

    sf::CircleShape brilloLeft(5.f);
    brilloLeft.setFillColor(sf::Color::White);
    brilloLeft.setPosition(sf::Vector2f{ 105,80 });
    
    sf::RectangleShape Frente({ 100.f,50.f });
    Frente.setFillColor(sf::Color::Yellow);
    Frente.setPosition(sf::Vector2f{ 100,65 });

    sf::RectangleShape patitaLeft({ 100.f,50.f });
    patitaLeft.setFillColor(sf::Color::Red);
    patitaLeft.setPosition(sf::Vector2f{ 35, 290 });
    
    sf::RectangleShape patitaRight({ 100.f,50.f });
    patitaRight.setFillColor(sf::Color::Red);
    patitaRight.setPosition(sf::Vector2f{ 170, 290 });

    sf::RectangleShape alitasLeft({ 100.f, 100.f});
    alitasLeft.setFillColor(sf::Color::Yellow);
    alitasLeft.setRotation(45.f);
    alitasLeft.setPosition({ 85,140 });

    sf::RectangleShape alitasRight({ 100.f, 100.f });
    alitasRight.setFillColor(sf::Color::Yellow);
    alitasRight.setRotation(45.f);
    alitasRight.setPosition({ 215,140 });

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(patitaLeft);
        window.draw(patitaRight);
        window.draw(cabecita);
        window.draw(cuerpecito);
        window.draw(Piquito);
        window.draw(Frente);
        window.draw(ojitoLeft);
        window.draw(ojitoRight);
        window.draw(brilloRight);
        window.draw(brilloLeft);
        window.draw(alitasLeft);
        window.draw(alitasRight);
        


        window.display();
    }

    return 0;
}