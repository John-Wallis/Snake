#include "head.hpp"

Main_surface_logic::Main_surface_logic(const Surface_drawing& val) {
	val.Main_surface_drawing();

}

Main_surface_logic::~Main_surface_logic() {
	closegraph();	//注销主界面窗口

}

const std::string Main_surface_logic::message() const {
	ExMessage msg{};

	while (true) {
		msg = getmessage(EX_MOUSE);

		switch (msg.lbutton) {
		case 1:
		{
			if (msg.x >= 390 && msg.x <= msg.x + 300) {
				if (msg.y >= 360 && msg.y <= 360 + 60)
					return "Start";

				else if (msg.y >= 470 && msg.y <= 470 + 60)
					return "Option";

				else if (msg.y >= 580 && msg.y <= 580 + 60)
					return "Exit";
			}
			break;
		}
		case 0:
			break;
		}

	}
}

