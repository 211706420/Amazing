#include<stdio.h>
#include<string.h>
#include <string>
#include<iostream>
using namespace std;
int changee(char i[10]);
void changec(int i);
int main()
{
	char c[10],c7[100],c10[100],a1[10], a2[10], a31[10],a32[10], a4[10], b1[10], b2[10], b3[10], c1[10], c2[10], c3[10], c4[10], c5[10], c6[10], c8[10], c9[10];
	cin >> a1 >> a2 >> a31 >> a4;
	int total = changee(a4);
	for (int j=0; j < 100; j++) {
		cin >> b1;
		if (strcmp(b1, "看看") == 0) {
			break;
		}
		for (int i = 0; 100; i++) {
			cin >> b2 >> b3;
			if (strcmp(b2, "增加") == 0) {
				total = total + changee(b3);
				break;
			}
			if (strcmp(b2, "减少") == 0) {
				total = total - changee(b3);
				break;
			}

		}
	}
	cin >> c>>c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7 >> c8 >> c9 >> c10;
	changec(total);
	if (total > changee(c4)) {
		cout << c7 << endl;
	}
	else {
		cout << c10 << endl;
	}
}
void changec(int i) {
	if (i == 0)
	{
		printf("零\n");
	}
	if (i == 1)
	{
		printf("一\n");
	}
	if (i == 2)
	{
		printf("二\n");
	}
	if (i == 3)
	{
		printf("三\n");
	}
	if (i == 4)
	{
		printf("四\n");
	}
	if (i == 5)
	{
		printf("五\n");
	}
	if (i == 6)
	{
		printf("六\n");
	}
	if (i == 7)
	{
		printf("七\n");
	}
	if (i == 8)
	{
		printf("八\n");
	}
	if (i == 9)
	{
		printf("九\n");
	}
	if (i == 10)
	{
		printf("十\n");
	}
}
int changee(char i[10]) {
	if (strcmp(i, "零") == 0)
	{
		return 0;
	}
	if (strcmp(i, "一") == 0)
	{
		return 1;
	}
	if (strcmp(i, "二") == 0)
	{
		return 2;
	}
	if (strcmp(i, "三") == 0)
	{
		return 3;
	}
	if (strcmp(i, "四") == 0)
	{
		return 4;
	}
	if (strcmp(i, "五") == 0)
	{
		return 5;
	}
	if (strcmp(i, "六") == 0)
	{
		return 6;
	}
	if (strcmp(i, "七") == 0)
	{
		return 7;
	}
	if (strcmp(i, "八") == 0)
	{
		return 8;
	}
	if (strcmp(i, "九") == 0)
	{
		return 9;
	}
	if (strcmp(i, "十") == 0)
	{
		return 10;
	}
}

