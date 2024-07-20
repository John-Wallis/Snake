#include "head.hpp"

Main_surface::Main_surface() {
	//创建游戏主界面窗口
	initgraph(1080, 720);
	setbkcolor(WHITE);
	cleardevice();

	//绘制游戏主界面按钮
	setlinecolor(RGB(50, 50, 50));
	setfillcolor(RGB(211, 211, 211));
	fillroundrect(390, 360, 690, 420, 25, 32);	//开始键 长300，宽60 5 : 1
	fillroundrect(390, 470, 690, 530, 25, 32);	//设置
	fillroundrect(390, 580, 690, 640, 25, 32);	//退出

	//绘制游戏主界面标题
	settextstyle(86, 0, _T("联盟起艺卢帅正锐黑体"));
	settextcolor(BLACK);
	outtextxy(325, 120, _T("贪    吃    蛇"));
	
	//绘制游戏主界面按钮文字
	settextstyle(36, 0, _T("黑体"));
	setbkmode(TRANSPARENT);
	outtextxy(469, 372, _T("开始游戏"));
	outtextxy(505, 482, _T("设置"));
	outtextxy(469, 592, _T("退出游戏"));
	setbkmode(OPAQUE);	//恢复默认（背景色）绘图填充模式
}


//const void Main_surface::start(Window val) const noexcept {
//	val.~Window();	//注销主界面窗口
//
//}