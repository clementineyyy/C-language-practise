/*1） 定义时间结构体 : 包含年、月、日成员
2 ）完成set_date函数
函数声明如下 : void set_date(struct date* p, int y, int m, int d);
3） 完成print_date函数
函数声明如下 : void print_date(struct date* p);
4）完成main函数，实现如下功能：
（1) 定义 时间结构体变量 d1
（2) 输入时间，并使用set_date函数设置给变量d1
（3) 使用print_date函数输出设置的时间*/


/*#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};
struct date d1;

void set_date(struct date* p, int y, int m, int d)
{
	p = &d1;
}

void print_date(struct date* p)
{
	printf("%d,%d,%d", p->year, p->month, p->day);
}

int main()
{
	
	struct date* p = &d1;
	scanf("%d,%d,%d", &(p->year), &(p->month), &(p->day));
	set_date(p, p->year, p->month, p->day);
	print_date(p);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	enum Color { red, yellow, blue, white, black };
	enum Color i, j, k, pri=0;
	int n = 0, loop = 1;
    for (i = red; i <= black; i++)
		for (j = red; j <= black; j++)
			if (i != j)
			{
				for (k = red; k <= black; k++)
					if ((k != i) && (k != j))
					{
						n++;
						printf("%-4d", n);
						for (loop = 1; loop <= 3; loop++)                             //用以下程序输出结果
						{
							switch (loop)
							{
							case 1:pri = i; break;                                    //switch语句中case和序号标志之间一定要加上空格，否则这条语句不会被执行
							case 2:pri = j; break;
							case 3:pri = k; break;
							}
							switch (pri)
							{
							case red:printf("%-10s", "red"); break;
							case yellow:printf("%-10s", "yellow"); break;
							case blue:printf("%-10s", "blue"); break;
							case white:printf("%-10s", "white"); break;
							case black:printf("%-10s", "black"); break;
							default:break;
							}
						}
						printf("\n");
					}
			}
	printf("%d", n);

	return 0;
}*/



