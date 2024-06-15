#pragma once
#include <SFML/Audio.hpp>

auto gameMusic{};

sf::Music music;
if (!music.openFromFile("GameMusic.wav")) {
    return -1;
}

music.setLoop(true);
music.play();