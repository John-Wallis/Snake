#include "head.hpp"

const void Surface_drawing::Main_surface_drawing() const {
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

const void Surface_drawing::Main_surface_drawing(const int v1, const int v2) const {
	//�������ڹ�Сʱ����
	try {
		if (v1 + v2 < 600) throw std::range_error("Got too small window arguments.");
	}
	catch (const std::range_error& e) {
		std::cerr << e.what() << std::endl;
		exit(1);
	}

	//������Ϸ�����洰��
	initgraph(v1, v2);
	setbkcolor(WHITE);
	cleardevice();

	//�洢�ֲ�����
	int start_len_pix = (v1 - 300) / 2;
	int end_len_pix = start_len_pix + 300;
	int start_hig_pix = v2 / 2;

	//������Ϸ�����水ť
	setlinecolor(RGB(50, 50, 50));
	setfillcolor(RGB(211, 211, 211));
	fillroundrect(start_len_pix, start_hig_pix , end_len_pix, start_hig_pix + 60, 25, 32);	//��ʼ�� ��300����60 5 : 1
	fillroundrect(start_len_pix, start_hig_pix + 110, end_len_pix, start_hig_pix + 170, 25, 32);	//����
	fillroundrect(start_len_pix, start_hig_pix + 220, end_len_pix, start_hig_pix + 280, 25, 32);	//�˳�

	//������Ϸ���������
	settextstyle(86, 0, _T("��������¬˧�������"));
	settextcolor(BLACK);
	outtextxy((v1 - 430) / 2, (int)(v2 / 6), _T("̰    ��    ��"));

	//������Ϸ�����水ť����
	settextstyle(36, 0, _T("����"));
	setbkmode(TRANSPARENT);
	outtextxy(start_len_pix + 79, start_hig_pix + 12, _T("��ʼ��Ϸ"));
	outtextxy(start_len_pix + 115, start_hig_pix + 110 + 12, _T("����"));
	outtextxy(start_len_pix + 79, start_hig_pix + 220 + 12, _T("�˳���Ϸ"));
	setbkmode(OPAQUE);	//�ָ�Ĭ�ϣ�����ɫ����ͼ���ģʽ
}

const void Surface_drawing::Clear_surface() const noexcept {
	cleardevice();	//����������������

}