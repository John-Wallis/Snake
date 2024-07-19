#include "head.hpp"

Window::Window() {
	initgraph(1080, 720);
	setbkcolor(WHITE);
	clean();
}

Window::~Window() {
	closegraph();
}

const void Window::clean() const noexcept {
	cleardevice();
}

