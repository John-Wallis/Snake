#include "head.hpp"

Main_surface::Main_surface() {
	//������Ϸ�����洰��
	initgraph(1080, 720);
	setbkcolor(WHITE);
	cleardevice();

	//������Ϸ�����水ť
	setlinecolor(RGB(50, 50, 50));
	setfillcolor(RGB(211, 211, 211));
	fillroundrect(390, 360, 690, 420, 25, 32);	//��ʼ�� ��300����60 5 : 1
	fillroundrect(390, 470, 690, 530, 25, 32);	//����
	fillroundrect(390, 580, 690, 640, 25, 32);	//�˳�

	//������Ϸ���������
	settextstyle(86, 0, _T("��������¬˧�������"));
	settextcolor(BLACK);
	outtextxy(325, 120, _T("̰    ��    ��"));
	
	//������Ϸ�����水ť����
	settextstyle(36, 0, _T("����"));
	setbkmode(TRANSPARENT);
	outtextxy(469, 372, _T("��ʼ��Ϸ"));
	outtextxy(505, 482, _T("����"));
	outtextxy(469, 592, _T("�˳���Ϸ"));
	setbkmode(OPAQUE);	//�ָ�Ĭ�ϣ�����ɫ����ͼ���ģʽ
}


//const void Main_surface::start(Window val) const noexcept {
//	val.~Window();	//ע�������洰��
//
//}