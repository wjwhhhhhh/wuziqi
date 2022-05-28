#include <graphics.h>
#include<stdio.h>
#include <conio.h>
#include<windows.h>
#include<mmsystem.h>
#include<time.h>
#pragma comment(lib,"Winmm.lib")
int qizi[30][30] = { 0 },sum=1;
void bgm()//背景音乐
{

	mciSendString("open 1.mp3 ", NULL, 0, NULL);
	mciSendString("play 1.mp3 repeat", NULL, 0, NULL);

}
int check()
{
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 1) {
			if((qizi[x+1][y] == 1&& qizi[x+2][y] == 1 && qizi[x+3][y] == 1 && qizi[x+4][y] == 1)||(qizi[x+1][y+1]==1 && qizi[x+2][y+2] == 1 && qizi[x+3][y+3] == 1 && qizi[x+4][y+4] == 1)||(qizi[x][y+1]==1 && qizi[x][y+2] == 1 && qizi[x][y+3] == 1 && qizi[x][y+4] == 1)||(qizi[x+1][y-1]==1 && qizi[x+2][y-2] == 1 && qizi[x+3][y-3] == 1 && qizi[x+4][y-4] == 1))
				return 1;
		}
		if (qizi[x][y] == -1) {
			if ((qizi[x + 1][y] == -1 && qizi[x + 2][y] == -1 && qizi[x + 3][y] == -1 && qizi[x + 4][y] == -1) || (qizi[x + 1][y + 1] == -1 && qizi[x + 2][y + 2] == -1 && qizi[x + 3][y + 3] == -1 && qizi[x + 4][y + 4] == -1) || (qizi[x][y + 1] == -1 && qizi[x][y + 2] == -1 && qizi[x][y + 3] == -1 && qizi[x][y + 4] == -1) || (qizi[x + 1][y - 1] == -1 && qizi[x + 2][y - 2] == -1 && qizi[x + 3][y - 3] == -1 && qizi[x + 4][y - 4] == -1))
				return -1;
		}
}
	return 0;
}
int check1() {
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 1) {
			if ((qizi[x + 1][y] == 1 && qizi[x + 2][y] == 1 && qizi[x + 3][y] == 1 && qizi[x + 4][y] == 0&&qizi[x-1][y]==0) || (qizi[x + 1][y + 1] == 1 && qizi[x + 2][y + 2] == 1 && qizi[x + 3][y + 3] == 1 && qizi[x + 4][y + 4] == 0&&qizi[x-1][y-1]==0) || (qizi[x][y + 1] == 1 && qizi[x][y + 2] == 1 && qizi[x][y + 3] == 1 && qizi[x][y + 4] == 0&&qizi[x][y-1]==0) || (qizi[x + 1][y - 1] == 1 && qizi[x + 2][y - 2] == 1 && qizi[x + 3][y - 3] == 1 && qizi[x + 4][y - 4] == 0&&qizi[x-1][y+1]==0))
				return 1;
		}
		if (qizi[x][y] == -1) {
			if ((qizi[x + 1][y] == -1 && qizi[x + 2][y] == -1 && qizi[x + 3][y] == -1 && qizi[x + 4][y] == 0 && qizi[x - 1][y] == 0) || (qizi[x + 1][y + 1] == -1 && qizi[x + 2][y + 2] == -1 && qizi[x + 3][y + 3] == -1 && qizi[x + 4][y + 4] == 0 && qizi[x - 1][y - 1] == 0) || (qizi[x][y + 1] == -1 && qizi[x][y + 2] == -1 && qizi[x][y + 3] == -1 && qizi[x][y + 4] == 0 && qizi[x][y - 1] == 0) || (qizi[x + 1][y - 1] == -1 && qizi[x + 2][y - 2] == -1 && qizi[x + 3][y - 3] == -1 && qizi[x + 4][y - 4] == 0 && qizi[x - 1][y + 1] == 0))
				return -1;
		}
	}
	return 0;
}
int check2() {
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 1) {
			if ((qizi[x + 1][y] == 1 && qizi[x + 2][y] == 1 && qizi[x + 3][y] == 0&& qizi[x - 1][y] == 0) || (qizi[x + 1][y + 1] == 1 && qizi[x + 2][y + 2] == 1 && qizi[x + 3][y + 3] == 0 && qizi[x - 1][y - 1] == 0) || (qizi[x][y + 1] == 1 && qizi[x][y + 2] == 1 && qizi[x][y + 3] == 0 && qizi[x][y - 1] == 0) || (qizi[x + 1][y - 1] == 1 && qizi[x + 2][y - 2] == 1 && qizi[x + 3][y - 3] == 0 && qizi[x - 1][y + 1] == 0))
				return 1;
		}
		if (qizi[x][y] == -1) {
			if ((qizi[x + 1][y] == -1 && qizi[x + 2][y] == -1 && qizi[x + 3][y] ==0 && qizi[x - 1][y] == 0) || (qizi[x + 1][y + 1] == -1 && qizi[x + 2][y + 2] == -1 && qizi[x + 3][y + 3] ==  0 && qizi[x - 1][y - 1] == 0) || (qizi[x][y + 1] == -1 && qizi[x][y + 2] == -1 && qizi[x][y + 3] == 0 && qizi[x][y - 1] == 0) || (qizi[x + 1][y - 1] == -1 && qizi[x + 2][y - 2] == -1 && qizi[x + 3][y - 3] == 0 && qizi[x - 1][y + 1] == 0))
				return -1;
		}
	}
	return 0;
}
int check3() {
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		
		if (qizi[x][y] == -1) {
			if ((qizi[x + 1][y] == -1 && qizi[x + 2][y] ==  0 && qizi[x - 1][y] == 0) || (qizi[x + 1][y + 1] == -1 && qizi[x + 2][y + 2] == 0 && qizi[x - 1][y - 1] == 0) || (qizi[x][y + 1] == -1 && qizi[x][y + 2] ==  0 && qizi[x][y - 1] == 0) || (qizi[x + 1][y - 1] == -1 && qizi[x + 2][y - 2] ==  0 && qizi[x - 1][y + 1] == 0))
				return -1;
		}
	}
	return 0;
}void transparentimage(int x, int y, IMAGE* srcimg, IMAGE* maskimg)
{
	putimage(x, y, maskimg, SRCAND);
	putimage(x, y, srcimg, SRCPAINT);
}
void map()
{
	IMAGE x2, x3,x21,x31;
	loadimage(&x3, "白棋真.jpg");
	loadimage(&x31, "白棋假.jpg");
	loadimage(&x2, "黑棋真.jpg"); 
	loadimage(&x21, "黑棋假.jpg");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if(qizi[x][y]==1)transparentimage(41*(x-6)+38,41*(y-6)+43, &x2,&x21);
		if (qizi[x][y] == -1)transparentimage(41 * (x - 6) + 38, 41 * (y - 6) + 43,&x3,&x31);
	}
}
int jishu(int x, int y,int e)
{
	int sum = 0;
	if (qizi[x - 1][y] == e)sum++;
	if (qizi[x - 1][y-1] == e)sum++;
	if (qizi[x][y-1] == e)sum++;
	if (qizi[x + 1][y-1] == e)sum++;
	if (qizi[x+1][y] == e)sum++;
	if (qizi[x - 1][y + 1] == e)sum++;
	if (qizi[x][y + 1] == e)sum++;
	if (qizi[x + 1][y + 1] == e)sum++;
	if (qizi[x - 1][y - 1] == e)sum++;
	if (qizi[x][y - 1] ==e)sum++;
	if (qizi[x -2][y] == e)sum++;
	if (qizi[x - 2][y-1] == e)sum++;
	if (qizi[x - 2][y-2] == e)sum++;
	if (qizi[x - 1][y-2] == e)sum++;
	if (qizi[x ][y - 2] == e)sum++;
	if (qizi[x + 1][y - 2] == e)sum++;
	if (qizi[x +2][y - 2] == e)sum++;
	if (qizi[x +2][y - 1] == e)sum++;
	if (qizi[x +2][y ] == e)sum++;
	if (qizi[x +2][y +1] == e)sum++;
	if (qizi[x +2][y + 2] == e)sum++;
	if (qizi[x + 1][y + 2] == e)sum++;
	if (qizi[x][y+2] == e)sum++;
	if (qizi[x - 1][y + 2] == e)sum++;
	if (qizi[x - 2][y + 2] == e)sum++;
	if (qizi[x - 2][y+1] == e)sum++;
	return sum;
}
void changeh(int x, int y)
{
	int a = x / 41+5, b = y / 41 +5, c = x % 41,d=y%41;
	printf("c=%d    d=%d\n", c, d);
	if (7 <= c && c <= 27 && 12 <= d && 32 >= d) {
		if (qizi[a][b] == 0) {
			qizi[a][b] = 1; printf("jjj");
			sum++;
		}
	}
	
}
int changeh1(int x, int y)
{
	int a = x / 41 + 5, b = y / 41 + 5, c = x % 41, d = y % 41;
	printf("c=%d    d=%d\n", c, d);
	if (7 <= c && c <= 27 && 12 <= d && 32 >= d) {
		if (qizi[a][b] == 0) {
			qizi[a][b] = 1; printf("jjj");
			return 0;
		}
	}
	return -1;
}
void changeb(int x, int y)
{
	int a = x / 41 +5, b = y / 41 +5, c = x % 41, d = y % 41;
	
	if (7 <= c && c <= 27 && 12 <= d && 32 >= d) {
		if (qizi[a][b] == 0) {
			qizi[a][b] = -1; printf("jjj");
			sum++;
		}
	}
	
}
int suiji(int x, int y,int e=0)
{
	if (qizi[x - 1][y] == e) { qizi[x - 1][y] = -1; printf("hhh"); return 1; }
	if (qizi[x - 1][y - 1] == e) { qizi[x - 1][y-1] =-1; return 1; }
	if (qizi[x][y - 1] == e) { qizi[x ][y-1] = -1; return 1; }
	if (qizi[x + 1][y - 1] == e) { qizi[x + 1][y-1] = -1; return 1; }
	if (qizi[x + 1][y] == e) { qizi[x +1][y] = -1; return 1; }
	if (qizi[x - 1][y + 1] == e) { qizi[x - 1][y+1] = -1; return 1; }
	if (qizi[x][y + 1] == e) { qizi[x ][y+1] = -1; return 1; }
	if (qizi[x + 1][y + 1] == e) { qizi[x + 1][y+1] = -1; return 1; }
	if (qizi[x - 1][y - 1] == e) { qizi[x - 1][y-1] = -1; return 1; }
	if (qizi[x][y - 1] == e) { qizi[x][y-1] = -1; return 1; }
	if (qizi[x - 2][y] == e) { qizi[x - 2][y] = -1; return 1; }
	if (qizi[x - 2][y - 1] == e) { qizi[x - 2][y-1] = -1; return 1; }
	if (qizi[x - 2][y - 2] == e) { qizi[x - 2][y-2] = -1; return 1; }
	if (qizi[x - 1][y - 2] == e) { qizi[x - 1][y-2] = -1; return 1; }
	if (qizi[x][y - 2] == e) { qizi[x ][y-2] = -1; return 1; }
	if (qizi[x + 1][y - 2] == e) { qizi[x + 1][y-2] = -1; return 1; }
	if (qizi[x + 2][y - 2] == e) { qizi[x +2][y-2] = -1; return 1; }
	if (qizi[x + 2][y - 1] == e) { qizi[x +2][y-1] = -1; return 1; }
	if (qizi[x + 2][y] == e) { qizi[x +2][y] = -1; return 1; }
	if (qizi[x + 2][y + 1] == e) { qizi[x +2][y+1] = -1; return 1; }
	if (qizi[x + 2][y + 2] == e) { qizi[x +2][y+2] = -1; return 1; }
	if (qizi[x + 1][y + 2] == e) { qizi[x +1][y+2] = -1; return 1; }
	if (qizi[x][y + 2] == e) { qizi[x ][y+2] = -1; return 1; }
	if (qizi[x - 1][y + 2] == e) { qizi[x - 1][y+2] = -1; return 1; }
	if (qizi[x - 2][y + 2] == e) { qizi[x - 2][y+2] = -1; return 1; }
	if (qizi[x - 2][y + 1] == e) { qizi[x - 2][y+1] = -1; return 1; }
	return 0;
}
void ai()
{
	int a = 0,b=0,a1=0,b1=0,a2=0,b2=0,b3=0;
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 0) {
			qizi[x][y] = -1;
			b = check();
			if (b == -1) { qizi[x][y] = -1; return; }
			else qizi[x][y] = 0;
		}
	}
	printf("白五");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 0) {
			qizi[x][y] = 1;
			a = check();
			if (a == 1) { qizi[x][y] = -1; return; }
			else qizi[x][y] = 0;
		}
	}
	printf("黑五");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 0) {
			qizi[x][y] = -1;
			b1 = check1();
			if (b1 == -1) { qizi[x][y] = -1; return; }
			else qizi[x][y] = 0;
		}
	}
	printf("白四");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 0) {
			qizi[x][y] = 1;
			a1 = check1();
			if (a1 == 1) { qizi[x][y] = -1; return; }
			else qizi[x][y] = 0;
		}
	}
	printf("黑四");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 0) {
			qizi[x][y] = -1;
			b2 = check2();
			if (b2 == -1) { qizi[x][y] = -1; return; }
			else qizi[x][y] = 0;
		}
	}
	printf("白三");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 0) {
			qizi[x][y] = 1;
			b2 = check2();
			if (b2 == 1) { qizi[x][y] = -1; return; }
			else qizi[x][y] = 0;
		}
	}
	printf("黑三");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
		if (qizi[x][y] == 0) {
			qizi[x][y] = -1;
			b3 = check3();
			if (b3 == -1) { qizi[x][y] = -1; return; }
			else qizi[x][y] = 0;
		}
	}
	printf("白二");
	for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++)if (qizi[x][y] == 1) {
		int a=suiji(x, y); if(a==1)return;
		}
	qizi[12][12] = -1;
	return;
	//printf("aa1aa\n");
	//int z = 0,x1=0,x2=0;

	//for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {
	//	if (qizi[x][y] != 0)z = 1;
	//	x1 = 0, x2 = 0;
	//	if (qizi[x][y] == -1) {
	//		if (qizi[x + 1][y] == -1 && qizi[x + 2][y] == -1 && qizi[x + 3][y] == -1) {
	//			if (x > 6 && qizi[x - 1][y] == 0) {
	//				qizi[x - 1][y] = -1; return;
	//			}
	//			if (x < 21 && qizi[x + 4][y] == 0) {
	//				qizi[x + 4][y] = -1; return;
	//			}
	//		}
	//		if (qizi[x][y + 1] == -1 && qizi[x][y + 2] == -1 && qizi[x][y + 3] == -1) {
	//			if (y > 6 && qizi[x][y - 1] == 0) {
	//				qizi[x][y - 1] = -1; return;
	//			}
	//			if (y < 21 && qizi[x][y + 4] == 0) {
	//				qizi[x][y + 4] = -1; return;
	//			}
	//		}
	//		if (qizi[x + 1][y + 1] == -1 && qizi[x + 2][y + 2] == -1 && qizi[x + 3][y + 3] == -1) {
	//			if (qizi[x + 4][y + 4] == 0 && x < 21 && y < 21) {
	//				qizi[x + 4][y + 4] = -1;
	//				return;
	//			}
	//			if (qizi[x - 1][y - 1] == 0 && x > 6 && y > 6) {
	//				qizi[x - 1][y - 1] = -1;
	//				return;
	//			}
	//		}
	//		if (qizi[x + 1][y - 1] == -1 && qizi[x + 2][y - 2] == -1 && qizi[x + 3][y - 3] == -1) {
	//			if (qizi[x + 4][y - 4] == 0 && x < 21 && y >9) {
	//				qizi[x + 4][y - 4] = -1;
	//				return;
	//			}
	//			if (qizi[x - 1][y + 1] == 0 && x > 6 && y < 24) {
	//				qizi[x - 1][y + 1] = -1;
	//				return;
	//			}
	//		}
	//	}
	//}
	//
	//if (z == 0) {
	//	qizi[12][12] = -1;
	//	return;
	//}
	//printf("aa2aa\n");
	//for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {

	//	if (qizi[x][y] == 1){if (qizi[x + 1][y] == 1 && qizi[x + 2][y] == 1 && qizi[x + 3][y] == 1) {
	//		if (x > 6 && qizi[x - 1][y] == 0) {
	//			qizi[x - 1][y] = -1; return;
	//		}
	//		if (x < 21 && qizi[x + 4][y] == 0) {
	//			qizi[x + 4][y] = -1; return;
	//		}
	//	}
	//	if (qizi[x][y + 1] == 1 && qizi[x][y + 2] == 1 && qizi[x][y + 3] == 1) {
	//		if (y > 6 && qizi[x][y - 1] == 0) {
	//			qizi[x][y - 1] = -1; return;
	//		}
	//		if (y < 21 && qizi[x][y + 4] == 0) {
	//			qizi[x][y + 4] = -1; return;
	//		}
	//	}
	//	if (qizi[x + 1][y + 1] == 1 && qizi[x + 2][y + 2] == 1 && qizi[x + 3][y + 3] == 1) {
	//		if (qizi[x + 4][y + 4] == 0 && x < 21 && y < 21) {
	//			qizi[x + 4][y + 4] = -1;
	//			return;
	//		}
	//		if (qizi[x - 1][y - 1] == 0 && x > 6 && y > 6) {
	//			qizi[x - 1][y - 1] = -1;
	//			return;
	//		}
	//	}
	//	if (qizi[x + 1][y - 1] == 1 && qizi[x + 2][y - 2] == 1 && qizi[x + 3][y - 3] == 1) {
	//		if (qizi[x + 4][y - 4] == 0 && x < 21 && y >9) {
	//			qizi[x + 4][y - 4] = -1;
	//			return;
	//		}
	//		if (qizi[x - 1][y + 1] == 0 && x > 6 && y < 24) {
	//			qizi[x - 1][y + 1] = -1;
	//			return;
	//		}
	//	}
	//	}
	//}
	//printf("aa3aa\n");
	//for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {

	//	if (qizi[x][y] == -1) {
	//		if (qizi[x + 1][y] == -1 && qizi[x + 2][y] == -1) {
	//			x1 = 0, x2 = 0;
	//			if (x > 6 && qizi[x - 1][y] == 0 && x < 22 && qizi[x + 3][y] == 0)
	//			{
	//				x1 = jishu(x - 1, y, -1), x2 = jishu(x + 3, y, -1);
	//				if (x1 > x2) { qizi[x - 1][y] = -1; return; }
	//				else { qizi[x +3][y] = -1; return; }
	//			}
	//			/*if (x > 6 && qizi[x - 1][y] == 0) {
	//				qizi[x - 1][y] = -1; return;
	//			}
	//			if (x < 22 && qizi[x + 3][y] == 0) {
	//				qizi[x + 3][y] = -1; return;
	//			}*/
	//		}
	//		if (qizi[x][y + 1] == -1 && qizi[x][y + 2] == -1) {
	//			x1 = 0, x2 = 0;
	//			if (y > 6 && qizi[x][y - 1] == 0 && y < 22 && qizi[x][y + 3] == 0) {
	//				x1 = jishu(x , y-1, -1), x2 = jishu(x , y+3, -1);
	//				if (x1 > x2) { qizi[x][y-1] = -1; return; }
	//				else { qizi[x][y+3] = -1; return; }
	//			}
	//			/*if (y > 6 && qizi[x][y - 1] == 0) {
	//				qizi[x][y - 1] = -1; return;
	//			}
	//			if (y < 22 && qizi[x][y + 3] == 0) {
	//				qizi[x][y + 4] = -1; return;
	//			}*/
	//		}
	//		if (qizi[x + 1][y + 1] == -1 && qizi[x + 2][y + 2] == -1) {
	//			if (qizi[x + 3][y + 3] == 0 && x < 22 && y < 22 && qizi[x - 1][y - 1] == 0 && x > 6 && y > 6) {
	//				x1 = 0, x2 = 0;
	//				x1 = jishu(x+3, y +3, -1), x2 = jishu(x-1, y -1, -1);
	//				if (x1 > x2) { qizi[x+3][y +3] = -1; return; }
	//				else { qizi[x-1][y -1] = -1; return; }
	//			}
	//			/*if (qizi[x + 3][y + 3] == 0 && x < 22 && y < 22) {
	//				qizi[x + 3][y + 3] = -1;
	//				return;
	//			}
	//			if (qizi[x - 1][y - 1] == 0 && x > 6 && y > 6) {
	//				qizi[x - 1][y - 1] = -1;
	//				return;
	//			}*/
	//		}
	//		if (qizi[x + 1][y - 1] == -1 && qizi[x + 2][y - 2] == -1) {
	//			if (qizi[x + 3][y - 3] == 0 && x < 22 && y >8 && qizi[x - 1][y + 1] == 0 && x > 6 && y < 24) {
	//				x1 = 0, x2 = 0;
	//				x1 = jishu(x + 3, y - 3, -1), x2 = jishu(x - 1, y + 1, -1);
	//				if (x1 > x2) { qizi[x + 3][y - 3] = -1; return; }
	//				else { qizi[x - 1][y + 1] = -1; return; }
	//			}
	//			/*if (qizi[x + 3][y - 3] == 0 && x < 22 && y >8) {
	//				qizi[x + 3][y - 3] = -1;
	//				return;
	//			}
	//			if (qizi[x - 1][y + 1] == 0 && x > 6 && y < 24) {
	//				qizi[x - 1][y + 1] = -1;
	//				return;
	//			}*/
	//		}
	//	}
	//}
	//printf("aa4aa\n");
	//for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++) {

	//	if (qizi[x][y] == 1) {
	//		if (qizi[x + 1][y] == 1 && qizi[x + 2][y] == 1) {
	//			x1 = 0, x2 = 0;
	//			printf("heix");
	//			if (x > 6 && qizi[x - 1][y] == 0 && x < 22 && qizi[x + 3][y] == 0)
	//			{
	//				
	//				x1 = jishu(x - 1, y, 1), x2 = jishu(x + 3, y, 1);
	//				if (x1 > x2) { qizi[x - 1][y] = -1; return; }
	//				else { qizi[x + 3][y] = -1; return; }
	//			}
	//			/*if (x > 6 && qizi[x - 1][y] == 0) {
	//				qizi[x - 1][y] = -1; return;
	//			}
	//			if (x < 22 && qizi[x + 3][y] == 0) {
	//				qizi[x + 3][y] = -1; return;
	//			}*/
	//		}
	//		if (qizi[x][y + 1] == 1 && qizi[x][y + 2] == 1) {
	//			printf("heiy");
	//			x1 = 0, x2 = 0;
	//			if (y > 6 && qizi[x][y - 1] == 0 && y < 22 && qizi[x][y + 3] == 0) {
	//				x1 = jishu(x, y - 1, 1), x2 = jishu(x, y + 3, 1);
	//				if (x1 > x2) { qizi[x][y - 1] = -1; return; }
	//				else { qizi[x][y + 3] = -1; return; }
	//			}
	//			/*if (y > 6 && qizi[x][y - 1] == 0) {
	//				qizi[x][y - 1] = -1; return;
	//			}
	//			if (y < 22 && qizi[x][y + 3] == 0) {
	//				qizi[x][y + 4] = -1; return;
	//			}*/
	//		}
	//		if (qizi[x + 1][y + 1] == 1 && qizi[x + 2][y + 2] == 1) {
	//			printf("heix+y");
	//			x1 = 0, x2 = 0;
	//			if (qizi[x + 3][y + 3] == 0 && x < 22 && y < 22 && qizi[x - 1][y - 1] == 0 && x > 6 && y > 6) {
	//				x1 = jishu(x + 3, y + 3, 1), x2 = jishu(x - 1, y - 1, 1);
	//				if (x1 > x2) { qizi[x + 3][y + 3] = -1; return; }
	//				else { qizi[x - 1][y - 1] = -1; return; }
	//			}
	//			/*if (qizi[x + 3][y + 3] == 0 && x < 22 && y < 22) {
	//				qizi[x + 3][y + 3] = -1;
	//				return;
	//			}
	//			if (qizi[x - 1][y - 1] == 0 && x > 6 && y > 6) {
	//				qizi[x - 1][y - 1] = -1;
	//				return;
	//			}*/
	//		}
	//		if (qizi[x + 1][y - 1] == 1 && qizi[x + 2][y - 2] == 1) {
	//			printf("heix-y"); x1 = 0, x2 = 0;
	//			if (qizi[x + 3][y - 3] == 0 && x < 22 && y >8 && qizi[x - 1][y + 1] == 0 && x > 6 && y < 24) {
	//				x1 = jishu(x + 3, y - 3, 1), x2 = jishu(x - 1, y + 1, 1);
	//				if (x1 > x2) { qizi[x + 3][y - 3] = -1; return; }
	//				else { qizi[x - 1][y + 1] = -1; return; }
	//			}
	//			/*if (qizi[x + 3][y - 3] == 0 && x < 22 && y >8) {
	//				qizi[x + 3][y - 3] = -1;
	//				return;
	//			}
	//			if (qizi[x - 1][y + 1] == 0 && x > 6 && y < 24) {
	//				qizi[x - 1][y + 1] = -1;
	//				return;
	//			}*/
	//		}
	//	}
	//}
	//printf("aa5aa\n");
	//for (int x = 0; x < 25; x++)for (int y = 0; y < 25; y++) {
	//	if (qizi[x - 1][y] == 0 && qizi[x][y] == -1 && qizi[x + 1][y] == -1 && qizi[x + 2][y] == 0 && x > 6 && x < 23) {
	//		x1 = x2 = 1;
	//		x1 = jishu(x - 1, y, -1), x2 = jishu(x + 2, y, -1);
	//		if (x1 > x2) { qizi[x - 1][y] = -1; return; }
	//		else { qizi[x + 2][y] = -1; return; }

	//	}
	//	if (qizi[x ][y-1] == 0 && qizi[x][y] == -1 && qizi[x][y+1] == -1 && qizi[x ][y+2] == 0 && y > 6 && y < 23) {
	//		x1 = x2 = 1;
	//		x1 = jishu(x, y-1, -1), x2 = jishu(x , y+2, -1);
	//		if (x1 > x2) { qizi[x ][y-1] = -1; return; }
	//		else { qizi[x][y+2] = -1; return; }

	//	}
	//	if (qizi[x - 1][y-1] == 0 && qizi[x][y] == -1 && qizi[x + 1][y+1] == -1 && qizi[x + 2][y+2] == 0 && x > 6 && x < 23&&y>6&&y<23) {
	//		x1 = x2 = 1;
	//		x1 = jishu(x - 1, y, -1), x2 = jishu(x + 2, y+2, -1);
	//		if (x1 > x2) { qizi[x - 1][y-1] = -1; return; }
	//		else { qizi[x + 2][y+2] = -1; return; }

	//	}
	//	if (qizi[x - 1][y+1] == 0 && qizi[x][y] == -1 && qizi[x + 1][y-1] == -1 && qizi[x + 2][y-2] == 0 && x > 6 && x < 23&&y>6&&y<23) {
	//		x1 = x2 = 1;
	//		x1 = jishu(x - 1, y+1, -1), x2 = jishu(x + 2, y-2, -1);
	//		if (x1 > x2) { qizi[x - 1][y+1] = -1; return; }
	//		else { qizi[x + 2][y-2] = -1; return; }

	//	}
	//}
	//for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++)if (qizi[x][y] == -1) {
	//	int a=suiji(x, y); if(a==1)return;
	//}
	//printf("aa6aa\n");
	//
	//for (int x = 6; x < 25; x++)for (int y = 6; y < 25; y++)if (qizi[x][y] == 1) {
	//	while (qizi[x + 1][y + 1] != 0) {
	//		x++; y++;
	//	}
	//	qizi[x + 1][y + 1] = -1;
		//return ;
	}

int  heibai() 
{ HWND hh = GetHWnd();
SetWindowText(hh, "217倪国华在线求偶");
int a = MessageBox(hh, "是否选择先手", "提示", MB_OKCANCEL);
if (a == IDOK)return 1;
else return 0; }
void game1()
{
	closegraph();
	int a = 0,cc=0,b=0;
	initgraph(800, 801, EW_SHOWCONSOLE);
	IMAGE x;
	ExMessage c;
	char arr[] = "你赢了";
	char brr[] = "你输了";
	settextcolor(RED);
	settextstyle(20, 20, "微软雅黑");
	loadimage(&x, "棋盘.jpg");
	putimage(0, 0, &x);
	a=heibai();
	
		while (1) {
			
			if (a % 2 != 0) {
				a++;
				b = 0;
				while (b != 1) {
					getmessage(&c, EM_MOUSE); switch (c.message) {
					case WM_LBUTTONDOWN:printf("%d  %d   %d\n", c.x, c.y, sum); if (c.x >= 47 && c.y >= 54 && c.x <= 804 && c.y <= 807) {
						b=changeh1(c.x, c.y); b++;
					}break;
					}
				}
			}
	
			else {
				ai(); a++;
			}
			map();
			cc = check();
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
	int x1, y1,cc=0;
	char arr[] = "黑方胜利";
	char brr[] = "白方胜利";
	settextcolor(RED);
	settextstyle(20, 20, "微软雅黑");
	initgraph(855,856, EW_SHOWCONSOLE);
	IMAGE x;
	ExMessage c;
	loadimage(&x, "棋盘.jpg");
	putimage(0, 0, &x);
	while (1) {
		getmessage(&c, EM_MOUSE);
		switch (c.message) {
		case WM_LBUTTONDOWN:printf("%d  %d   %d\n", c.x, c.y, sum); if (c.x >= 47 && c.y >= 54&&c.x<=804&&c.y<=807) {
			if (sum % 2 != 0) changeh(c.x, c.y);
			else changeb(c.x, c.y);
		}
			 break;
		}
		
		map();
		cc=check();
		if (cc != 0) {
			if (cc == 1) outtextxy(20, 20, arr);
			else outtextxy(20, 20, brr);
			system("pause");
			return ;
		}
	}
	
}
void menu()
{
	for (int x = 0; x < 30; x++)for (int y = 0; y < 30; y++)qizi[x][y] = 100;
	for (int x = 6; x < 25; x++)for (int y = 0; y < 25; y++)qizi[x][y] = 0;
	int a = 0;
	
	char arr[] = "单人模式";
	char brr[] = "双人模式";
	char crr[] = "按“ESC”退出游戏";
	initgraph(800, 496, EW_SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	IMAGE x;
	ExMessage c;
	setfillcolor(RGB(137, 207, 180));
	settextcolor(BLUE);
	settextstyle(35, 20, "微软雅黑");
	loadimage(&x, "hhh.jpg");
	while (1) {
		cleardevice();
		BeginBatchDraw();
		putimage(0, 0, &x);
		fillroundrect(200, 300, 364, 335,10,10);
		fillroundrect(400, 300, 564, 335,10, 10);
		outtextxy(200, 300, arr);
		outtextxy(400, 300, brr);
		if (a % 3000<1000)outtextxy(0, 0, crr);
		EndBatchDraw();
		a++;
		if (peekmessage(&c, EM_MOUSE| EM_KEY)) {
			switch (c.message) {
			case WM_LBUTTONDOWN:if (c.x > 200 && c.x < 364 && c.y>300 && c.y < 335)game1();
				if (c.x > 400 && c.x < 564 && c.y>300 && c.y < 335) {
					printf("jj"); game2();
				}
				return;

			case WM_KEYDOWN:if (c.vkcode == VK_ESCAPE)return;
			}
		}

	}
}
int main()
{
	bgm();
	menu();
	return 0;
}