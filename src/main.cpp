#include "lve/first_app.h"
#include <exception>
#include <iostream>
#include <stdexcept>

int main() {
	lve::FirstApp app;

	try {
		app.run();
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}