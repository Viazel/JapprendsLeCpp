#include "lve_window.h"
#include <stdexcept>

namespace lve {
	LveWindow::LveWindow(int w, int h, std::string name) : width(std::move(w)), height(std::move(h)), windowName(std::move(name)) {
		initWindow();
	}

	LveWindow::~LveWindow() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	bool LveWindow::shouldClose() {
		return glfwWindowShouldClose(window);
	}

	void LveWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR* surface) {

		if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS) {
			throw std::runtime_error("failed to create window surface");
		}

	}

	void LveWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}