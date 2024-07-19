#include "head.hpp"

const void Main_surface::start(Window val) const noexcept {
	val.~Window();	//注销主界面窗口

}