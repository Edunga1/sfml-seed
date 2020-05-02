#include <iostream>
#include <SFML/Graphics.hpp>
#include "../config.h"
using namespace std;

int main(int argc, char* argv[]) {

  // Code adapted from the SFML 2 "Window" example.

  cout << "Version " << myproject_VERSION_MAJOR << "." << myproject_VERSION_MINOR << endl;

  sf::Window window(sf::VideoMode(800, 600), "myproject");

  while (window.isOpen()) {
    sf::Event Event;
    while (window.pollEvent(Event)) {
      if (Event.type == sf::Event::Closed)
        window.close();
    }
    window.display();
  }
}
