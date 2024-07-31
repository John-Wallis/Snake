#include "head.hpp"

const void Surface_drawing::Main_surface_drawing() const {
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

const void Surface_drawing::Main_surface_drawing(const int v1, const int v2) const {
	//给定窗口过小时报错
	try {
		if (v1 + v2 < 600) throw std::range_error("Got too small window arguments.");
	}
	catch (const std::range_error& e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}

	//创建游戏主界面窗口
	initgraph(v1, v2);
	setbkcolor(WHITE);
	cleardevice();

	//存储局部变量
	int start_len_pix = (v1 - 300) / 2;
	int end_len_pix = start_len_pix + 300;
	int start_hig_pix = v2 / 2;

	//绘制游戏主界面按钮
	setlinecolor(RGB(50, 50, 50));
	setfillcolor(RGB(211, 211, 211));
	fillroundrect(start_len_pix, start_hig_pix , end_len_pix, start_hig_pix + 60, 25, 32);	//开始键 长300，宽60 5 : 1
	fillroundrect(start_len_pix, start_hig_pix + 110, end_len_pix, start_hig_pix + 170, 25, 32);	//设置
	fillroundrect(start_len_pix, start_hig_pix + 220, end_len_pix, start_hig_pix + 280, 25, 32);	//退出

	//绘制游戏主界面标题
	settextstyle(86, 0, _T("联盟起艺卢帅正锐黑体"));
	settextcolor(BLACK);
	outtextxy((v1 - 430) / 2, (int)(v2 / 6), _T("贪    吃    蛇"));

	//绘制游戏主界面按钮文字
	settextstyle(36, 0, _T("黑体"));
	setbkmode(TRANSPARENT);
	outtextxy(start_len_pix + 79, start_hig_pix + 12, _T("开始游戏"));
	outtextxy(start_len_pix + 115, start_hig_pix + 110 + 12, _T("设置"));
	outtextxy(start_len_pix + 79, start_hig_pix + 220 + 12, _T("退出游戏"));
	setbkmode(OPAQUE);	//恢复默认（背景色）绘图填充模式
}

const void Surface_drawing::Clear_surface() const noexcept {
	cleardevice();	//擦除窗口所有内容

}