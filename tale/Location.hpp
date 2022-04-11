#pragma once

#include <ostream>

enum Location { HOME, FOREST, PORCH, ROOM, STOMACH, ROAD };

std::ostream& operator<<(std::ostream& os, const Location& obj);
