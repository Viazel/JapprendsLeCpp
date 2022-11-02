#include "Random.h"

Random::Random(std::string title) : title(std::move(title)) {
	std::cout << this->title << std::endl;
}

void Random::show() {
	std::cout << this->title << std::endl;
}