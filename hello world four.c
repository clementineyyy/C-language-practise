/*1�� ����ʱ��ṹ�� : �����ꡢ�¡��ճ�Ա
2 �����set_date����
������������ : void set_date(struct date* p, int y, int m, int d);
3�� ���print_date����
������������ : void print_date(struct date* p);
4�����main������ʵ�����¹��ܣ�
��1) ���� ʱ��ṹ����� d1
��2) ����ʱ�䣬��ʹ��set_date�������ø�����d1
��3) ʹ��print_date����������õ�ʱ��*/


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
						for (loop = 1; loop <= 3; loop++)                             //�����³���������
						{
							switch (loop)
							{
							case 1:pri = i; break;                                    //switch�����case����ű�־֮��һ��Ҫ���Ͽո񣬷���������䲻�ᱻִ��
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



