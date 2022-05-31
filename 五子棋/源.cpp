#include <graphics.h>
#include<stdio.h>
#include <conio.h>
#include<windows.h>
#include<mmsystem.h>
#include<time.h>
#pragma comment(lib,"Winmm.lib")
int qizi[30][30] = { 0 };
IMAGE x2, x3, x21, x31;
int dx[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
int dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int mx[2] = { -1,1 };
void bgm()//背景音乐
{

	mciSendString("open 1.mp3 ", NULL, 0, NULL);
	mciSendString("play 1.mp3 repeat", NULL, 0, NULL);

}
int check(int l, int e, bool st = false, int x = 0, int y = 0)
{
	if (st)
	{
		for (int k = 0; k < 4; k++)
		{
			bool flag = true;
			for (int z = 0; z < l; z++)
			{
				if (qizi[z * dx[k] + x][z * dy[k] + y] != e)flag = false;
			}
			if (flag)return e;
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 1; j < l; j++)
			{
				int a = x + dx[i] * j, b = y + dy[i] * j;
				for (int k = 0; k < 4; k++)
				{
					bool flag = true;
					for (int z = 0; z < l; z++)
					{
						if (qizi[z * dx[k] + a][z * dy[k] + b] != e)flag = false;
					}
					if (flag)return e;
				}
			}
		}
	}
	else
	{
		for (int x = 6; x < 25; x++)
		{
			for (int y = 6; y < 25; y++)
				for (int k = 0; k < 4; k++)
				{
					bool flag = true;
					for (int z = 0; z < l; z++)
					{
						if (qizi[z * dx[k] + x][z * dy[k] + y] != e)flag = false;
					}
					if (flag)return e;
				}
		}
	}
	return 0;
}
void transparentimage(int x, int y, IMAGE* srcimg, IMAGE* maskimg)
{
	putimage(x, y, maskimg, SRCAND);
	putimage(x, y, srcimg, SRCPAINT);
}
void map(int x, int y, bool st = false)
{
	int a = x / 41 + 5, b = y / 41 + 5, c = x % 41, d = y % 41;
	if (st)a = x, b = y;
	if (qizi[a][b] == 1)transparentimage(41 * (a - 6) + 38, 41 * (b - 6) + 43, &x2, &x21);
	if (qizi[a][b] == -1)transparentimage(41 * (a - 6) + 38, 41 * (b - 6) + 43, &x3, &x31);
}
bool chang(int x, int y, int e)
{
	int a = x / 41 + 5, b = y / 41 + 5, c = x % 41, d = y % 41;
	if (7 <= c && c <= 27 && 12 <= d && 32 >= d && qizi[a][b] == 0)
	{
		qizi[a][b] = e;
		return true;
	}
	return false;
}
void ai()
{
	for (int l = 5; l > 1; l--)for (int z = 0; z < 2; z++)
		for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++)
		{
			if (qizi[x][y] == 0)
			{
				qizi[x][y] = mx[z];
				if (check(l, mx[z], true, x, y) == mx[z])
				{
					if (z == 1)qizi[x][y] = -1;
					map(x, y, true);
					printf("%d %d %d %d\n", l, z, x, y);
					return;
				}
				else qizi[x][y] = 0;
			}
		}
	qizi[17][17] = -1;
	map(17, 17, true);
}
int  heibai()
{
	HWND hh = GetHWnd();
	SetWindowText(hh, "五子棋");
	int a = MessageBox(hh, "是否选择先手", "提示", MB_OKCANCEL);
	if (a == IDOK)return 1;
	else return 0;
}
void game1()
{
	closegraph();
	int a = 0, cc = 0, b = 0;
	initgraph(800, 801, EW_SHOWCONSOLE);
	IMAGE x;
	ExMessage c;
	char arr[] = "你赢了";
	char brr[] = "你输了";
	settextcolor(RED);
	settextstyle(20, 20, "微软雅黑");
	loadimage(&x, "棋盘.jpg");
	putimage(0, 0, &x);
	a = heibai();
	while (1)
	{
		if (a % 2 != 0)
		{
			getmessage(&c, EM_MOUSE);
			if (c.lbutton && c.x >= 47 && c.y >= 54 && c.x <= 804 && c.y <= 807)
			{

				if (chang(c.x, c.y, 1))
				{
					a++;
					map(c.x, c.y);
					cc = check(5, 1);
				}
			}
		}
		else
		{
			ai();
			a++;
			cc = check(5, -1);
		}
		if (cc != 0) {
			if (cc == 1) outtextxy(20, 20, arr);
			else outtextxy(20, 20, brr);
			system("pause");
			return;
		}
	}

}
void game2()
{
	closegraph();
	int x1, y1, cc = 0, sum = 0;
	char arr[] = "黑方胜利";
	char brr[] = "白方胜利";
	settextcolor(RED);
	settextstyle(20, 20, "微软雅黑");
	initgraph(855, 856, EW_SHOWCONSOLE);
	IMAGE x;
	ExMessage c;
	loadimage(&x, "棋盘.jpg");
	putimage(0, 0, &x);
	while (1)
	{
		if (peekmessage(&c, EM_MOUSE) && c.lbutton && c.x >= 47 && c.y >= 54 && c.x <= 804 && c.y <= 807)
		{
			if (sum % 2 == 0 && chang(c.x, c.y, 1))
			{
				sum++;
				map(c.x, c.y);
				cc = check(3, 1);
			}
			else if (sum % 2 != 0 && chang(c.x, c.y, -1))
			{
				sum++;
				map(c.x, c.y);
				cc = check(3, -1);
			}
			if (cc != 0) {
				if (cc == 1) outtextxy(20, 20, arr);
				else outtextxy(20, 20, brr);
				system("pause");
				return;
			}
		}
	}
}
void menu()
{
	for (int x = 0; x < 30; x++)for (int y = 0; y < 30; y++)qizi[x][y] = 1000;
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++)qizi[x][y] = 0;
	initgraph(800, 496, EW_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	IMAGE x, a1, a2, b1, b2;
	ExMessage c;
	setfillcolor(RGB(137, 207, 180));
	settextcolor(BLUE);
	settextstyle(35, 20, "微软雅黑");
	loadimage(&x, "hhh.jpg");
	loadimage(&a1, "单人模式按钮图片.png");
	loadimage(&a2, "单人模式按钮图片2.png");
	loadimage(&b1, "双人模式按钮.png");
	loadimage(&b2, "双人模式按钮2.png");
	loadimage(&x3, "白棋真.jpg");
	loadimage(&x31, "白棋假.jpg");
	loadimage(&x2, "黑棋真.jpg");
	loadimage(&x21, "黑棋假.jpg");
	BeginBatchDraw();
	putimage(0, 0, &x);
	transparentimage(200, 350, &a2, &a1);
	transparentimage(400, 350, &b2, &b1);
	EndBatchDraw();
	while (1) {


		if (peekmessage(&c, EM_MOUSE) && c.lbutton) {
			if (c.x > 213 && c.x < 332 && c.y>360 && c.y < 399)
			{
				game1();
				return;
			}
			if (c.x > 413 && c.x < 532 && c.y>360 && c.y < 399)
			{
				game2();
				return;
			}
			printf("%d %d\n", c.x, c.y);
		}
	}
}
int main()
{
	bgm();
	menu();
	return 0;
}