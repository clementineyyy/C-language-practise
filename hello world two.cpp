/*#include <stdio.h>

int main()
{
	int a[12], i, j, t1, t2, b=0;
	for (i = 1; i < 11; i++)
		scanf("%d", &a[i]);
	scanf("%d", &b);
	if (b > a[10])a[11] = b;
	else for (i = 1; i < 11; i++)
	{
		if (b < a[i])
		{
			t1 = a[i];
			a[i] = b;
			for (j=i+1;j<12;j++)
			{
				t2 = a[j];
				a[j] = t1;
				t1 = t2;
			}
			break;
		}
	}
	for (i = 1; i < 12; i++)
		printf("%d\t", a[i]);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int a[6], i,t=0;
	for (i = 1; i < 6; i++)
		scanf("%d", &a[i]);
	for (i = 1; i < 3; i++)
	{
		t = a[i];
		a[i] = a[6 - i];
		a[6 - i] = t;
	}
	for (i = 1; i < 6; i++)
		printf("%d\t", a[i]);

	return 0;
}*/



/*#include <stdio.h>
#define n 6                          //û�е��ںźͷֺţ���Ϊ�������治���Ǳ��������Բ����ó���������ʹ�÷��ų���

int main()
{
	int a[n], i, t;
	for (i = 1; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i < n/2; i++)
	{
		t = a[i];
		a[i] = a[n - i];            //���������ݣ����м����Ϊ���ģ����߶ԳƵ�������λ�ã�����ˮ��
		a[n - i] = t;
	}
	for (i = 1; i < n; i++)
		printf("%d\t", a[i]);

	return 0;
}*/


//�ڶ�ά�������ҳ�һ������ĵ㣬�õ����������������õ����������ϵ����ֵ�����������ϵ���Сֵ��
// ��û������������޷��ҵ����������ĵ㡱������ά��������3 * 3���ֶ������������ݣ��������õ��������е�λ���±��Լ��˵��ֵ


/*#include <stdio.h>
#define n 3                                                     //û�зֺ�

int main()
{
	int a[n][n], i, j, max = 0, maxj = 0, flag = 0, t = 0;      //��flag�����
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < n; i++)
	{
		max = a[i][0];
		maxj = 0;
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];                                 //ֻ�ñȴ�СȻ��ֵ�Ϳ��Բ��õ���λ��
				maxj = j;                                      //������һ��������������
				flag = 1;
			}
		}
		for (t = 0; t < n; t++)
		{                                                      //������һ�бȽ���С,��Ϊi�Ѿ��ù���������t����ʾ�ڶ��������
			if (a[t][maxj] < max) flag = 0; break;
		}
		if (flag == 1) printf("%d", max); break;               //���һ�����ѭ�����ٱȽ���һ�����ģ�ͬһ����С��
	}
	
	if(flag==0) printf("�޷��ҵ����������ĵ�");

	return 0;

}*/



//��������Ӽ�������һ������Ϊ10���ַ��������ַ����е���ĸ��Сд��������ȥ���ַ����в�����ĸ���ַ���
// ���磺����abcd012EFG, �����ABCDefg����ʹ��gets()���������ַ�����
/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[20],i;
	gets_s(str);
	for (i = 0; i < 10; i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			printf("%c", str[i] + 32);
		else if ('a' <= str[i] && str[i] <= 'z')
			printf("%c", str[i] - 32);
		else continue;
	}

	return 0;

}*/



//ͨ�����̼���ķ�ʽ�Զ�ά����a[4][3]���г�ʼ��������k��ֵ���ҳ���k��λ�õ�����������±꣬���� k >= 0 && k <= 12��
// Ҫ���㷨Ҫ��һ���Ľ�׳�ԣ������������Ҳ�������¼������С�������λ�ü���Ϊ�����ȣ�����a[0][0]Ϊ��1��λ�ã�a[1][0]Ϊ��4��λ�ã�

/*#include <stdio.h>

int main()
{
	int a[4][3], i, j, k = 0, t = 0;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	scanf("%d", &k);
	if (0 <= k && k <= 12)
	{
		for (i = 0; i < 4; i++)
			for (j = 0; j < 3; j++)
			{
				t++;                                                      //��˳���ź���ţ�����ź������kֵ��Ӧ
				if (k == t)printf("%d,i=%d,j=%d", a[i][j], i, j);
			}
	}
	else
	{
		scanf("%d", &k);
		for (i = 0; i < 4; i++)
			for (j = 0; j < 3; j++)
			{
				t++;                                                      //��˳���ź���ţ�����ź������kֵ��Ӧ
				if (k == t)printf("%d,i=%d,j=%d", a[i][j], i, j);
			}
	}
	return 0;

}*/





/*#include <stdio.h>

int main()
{
	int a[15], i, num = 0, sign = 0, top = 0, bott = 14, mid = 0;
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &num);
	if ((a[0] < num) || (num < a[14]))
	{
		printf("no exist!");
		sign = 0;
	}
	while (!sign)
	{
		mid = (top + bott) / 2;
		if (num == a[mid])
		{
			printf("%d", mid + 1);
			sign = 1;
			break;
		}
		else if (num > a[mid])
			top = mid - 1;
		else bott = mid + 1;
	}
	if (sign == 0)printf("no exist!");

	return 0;
}*/



/*#include <stdio.h>
#define N 15

int main()
{
	int i, number, top, bott, mid, loca, a[N], flag = 1, sign;
	char c;
	printf("enter data:\n");
	scanf("%d", &a[0]);                                    
	i = 1;
	while (i < N)
	{
		scanf("%d", &a[i]);
		if (a[i] >= a[i - 1])
			i++;
		else
			printf("enter this data again:\n");
	}
	printf("\n");
	for (i = 0; i < N; i++)
		printf("%5d", a[i]);
	printf("\n");
	while (flag)
	{
		printf("input number to look for:");
		scanf("%d", &number);
		sign = 0;
		top = 0;
		bott = N - 1;
		if((number<a[0])||(number>a[N-1]))
			loca=-1;
		while ((!sign) && (top <= bott))
		{
			mid = (bott + top) / 2;
			if (number == a[mid])
			{
				loca = mid;
				printf("Has found %d,its position is %d\n", number, loca + 1);
				sign = 1;
			}
			else if (number < a[mid])
				bott = mid - 1;
			else top = mid + 1;
		}
		if (!sign || loca == -1)
			printf("cannot find");
		printf("continue?");
		scanf("%c", &c);
		if (c == 'N' || c == 'n')
			flag = 0;
	}


	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	char c[3][80];                                                  //��������ַ����飬������������ĺܴ�Ҳû��ϵ
	int i, j, big = 0, small = 0, num = 0, blank = 0, other = 0;
	for (i = 0; i < 3; i++)
	{
		gets_s(c[i]);                                              //ʹ��gets_s��������һ���ַ������������֣�����ͷ�ļ����Զ�ά���飬һ������һ��
		for (j = 0; j < 80 && c[i][j] != '\0'; j++)                //��һ�е���������У��������һ��'\0'������־���ַ�������Զ����Ͻ�����־
		{
			if (('A' <= c[i][j]) && (c[i][j] <= 'Z'))
			{
				big++; continue;
			}
			else if (('a' <= c[i][j]) && (c[i][j] <= 'z'))
			{
				small++; continue;
			}
			else if (('0' <= c[i][j]) && (c[i][j] <= '9'))
			{
				num++; continue;
			}
			else if (c[i][j] == 32)
			{
				blank++; continue;
			}
			else other++;
		}
	}
	printf("%d,%d,%d,%d,%d", big, small, num, blank, other);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char c[5] = { '*','*','*','*','*' };
	int i, j, k;
	char space = ' ';
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%c", space);
		for (k = 0; k < 5; k++)
			printf("%c",c[k]);
		printf("\n");
	}

	return 0;
}*/



/*#include <stdio.h>
#define n 80

int main()
{
	char m[n], y[n] = { 0 };
	int i;
	gets_s(m);                                          //���������ַ����������������ַ
	for (i = 0; m[i] != '\0'; i++)
	{
		if (('A' <= m[i]) && (m[i] <= 'Z'))
			y[i] = 155 - m[i];
		else if (('a' <= m[i]) && (m[i] <= 'z'))
			y[i] = 219 - m[i];
		else y[i] = m[i];

		printf("%c", y[i]);                             //����ַ�������%c,����%d
	}

	return 0;
}*/




/*#include <stdio.h>
#define n 80

int main()
{
	char m[n], y[n] = { 0 };
	int i;
	gets_s(m);
	for (i = 0; m[i] != '\0'; i++)
	{
		if (('A' <= m[i]) && (m[i] <= 'Z'))
			y[i] = 155 - m[i];
		else if (('a' <= m[i]) && (m[i] <= 'z'))
			y[i] = 219 - m[i];
		else y[i] = m[i];
	}

	puts(y);                                             //����ַ��������ַ�������puts����Ҳ���ԣ�Puts��������ͷ�ļ�

	return 0;
}*/



/*#include <stdio.h>
#define n 80

int main()
{
	char m[n], y[n] = { 0 };
	int i;
	gets_s(m);
	for (i = 0; m[i] != '\0'; i++)
	{
		if (('A' <= m[i]) && (m[i] <= 'Z'))
			y[i] = 155 - m[i];
		else if (('a' <= m[i]) && (m[i] <= 'z'))
			y[i] = 219 - m[i];
		else y[i] = m[i];

		putchar(y[i]);                                    //Putchar��������ַ����ԣ�Ҳ��������ַ������ַ����飩
	}

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char str1[20] = { "Hello " }, str2[10] = { "world!" };   //�����ӵ�����Ҫ�㹻����������±����ӹ���������
	int i=0, j=0;
	while (str1[i] != '\0')
		i++;

	while (str2[j] != '\0')
	{
		str1[i++] = str2[j];
		j++;
	}
	printf("%s", str1);                                      //�����ַ�������ַ�������printf������%s����ַ���

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int a[11], i, j, min = 0, t = 0;
	for (i = 1; i <= 10; i++)
		scanf("%d", &a[i]);
	for (i = 1; i <=9; i++)
	{
		min = i;                                //һ��ʼ�ñȽϿ�ʼ��ǰ��λ���±������С�����������Ƚ�
		for (j = i + 1; j <= 10; j++)           //i���������ʼ��i�Ƚϴ�С
			if (a[min] > a[j])
				min = j;                        //����ذѱȽ�С�������±긳��min,��min������������ıȽ�
		if (min != i)                           //���ϻ�λ�õ�ǰ��������min�Ѿ�����i���
		{
			t = a[min];
			a[min] = a[i];
			a[i] = t;                           //����С����������ǰλ��
		}
	}

	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);                    //ʵ�ִ�С�������

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int a[11], i, j, num = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	scanf("%d", &num);
	if (num > a[9])
		a[10] = num;
    for (i = 0; i < 10; i++)
	{
		if (a[i] > num)                           //ֻҪnum����С���ͽ���ѭ������ʼ�����źõĴ�С�����˳��Ƚ�����num�Ĵ�С��ֱ������һ������num��
		{
			for (j = 10; j >= i + 1; j--)
			{
				a[j] = a[j - 1];
			}
			a[i] = num;
			break;                               //ע��break��λ�ã�����if���������棬��Ȼֱ�ӽ���ѭ��
		}
    }
          
	for (i = 0; i < 11; i++)
		printf("%5d", a[i]);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char c[3][80], i, j, big = 0, small = 0, num = 0, blank = 0, other = 0;
	for (i = 0; i < 3; i++)
		gets_s(c[i]);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 80; j++)
		{
			if (c[i][j] == '\0')                                 //ֹͣ�����Ų���\n����\0
				break;                                           //�ǵ�����ֹͣѭ��������
			if ('A' <= c[i][j] && c[i][j] <= 'Z')
				big++;
			else if ('a' <= c[i][j] && c[i][j] <= 'z')
				small++;
			else if ('0' <= c[i][j] && c[i][j] <= '9')
				num++;
			else if (c[i][j] == 32)
				blank++;
			else
				other++;
		}

	printf("%d,%d,%d,%d,%d", big, small, num, blank, other);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a[3][4], i, j, point = 0, max = 0, min = 0, row = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 3; i++)
	{
		max = a[i][0];
		for (j = 1; j < 4; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = j;
			}
		if (max == a[i][0])                           //�����һ����������һ�е����ֵ
			row = 0;
		min = max;                                    //�ɴ�����ҳ�������һ�е������ֵ��ͬһ�е���Сֵ���ٽ����еıȽ�
		for (i = 0; i < 3; i++)
			if (a[i][row] < min)
			{
				min = a[i][row];
				break;
			}

		if (min == max)
		{
			point = max;
			break;
		}
	}

	printf("%d", point);

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int a[4][4], i, j, point = 0, max = 0, min = 0, row = 0;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	for (i = 0; i < 4; i++)
	{
		max = a[i][0];
		for (j = 1; j < 4; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = j;
			}
		if (max == a[i][0])                          //�ó���ֻ����а���ľ���
			row = 0;
		min = max;                                  
		for (i = 0; i < 4; i++)
			if (a[i][row] < min)
			{
				min = a[i][row];
				break;
			}

		if (min == max)
		{
			point = max;
			break;
		}
	}
	if (point != 0)
		printf("%d", point);
	else printf("no ���㣡");

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char s1[10], s2[10];
	int i, num = 0;
	gets_s(s1);
	gets_s(s2);
	for (i = 0; i < 10; i++)
	{
		if (s1[i] > s2[i])
			num += s1[i] - s2[i];
		else if (s1[i] < s2[i])
			num += s1[i] - s2[i];

		if (s1[i] == '\0')
			break;
	}

	printf("%d", num);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char s1[20], s2[20];
	int i;
	gets_s(s2);
	for (i = 0; i < 20; i++)
	{
		if (s2[i] == '\0')
			break;
		s1[i] = s2[i];
	}
	s1[i] = '\0';

	puts(s1);

	return 0;

}*/



/*#include <stdio.h>

int max2(int x, int y)
{
	int max = 0;
	if (x > y)
		max = x;
	else max = y;

	return max;
}

int max4(int a, int b, int c, int d)
{
	int max = 0;
	max = max2(a, b);
	max = max2(max, c);
	max = max2(max, d);

	return max;

}

int main()
{
	int a = 0, b = 0, c = 0, d = 0, max = 0;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);                   //ѧ������Ŀո����뷨�������scanf�����Ķ�������
	max = max4(a, b, c, d);
	printf("%d", max);

	return 0;
}*/




/*#include <stdio.h>

int age(int n)
{

	int a = 0;
	if (n == 1)
		a = 10;
	else a = age(n - 1) + 2;

	return a;
}

int main()
{
	int n = 5;                        //����ı���������Ҫ�ͺ������غϣ���Ȼ�ᱨ��
	printf("%d", age(5));

	return 0;
}*/




/*#include <stdio.h>

int jc(int n)
{
	int result = 0;
	if (n > 1)
		result = n * jc(n-1);               //��ǰ�������ǰ��һ�����Ľ׳�
	else if (n == 1)
		result = 1;

	return result;
}

int main()
{
	int n = 0, result = 0;
	scanf("%d", &n);
	result = jc(n);
	printf("%d", result);

	return 0;
}*/




/*#include <stdio.h>

void move(char x,char y)
{
	printf("%c-->%c\n", x, y);
}

void hanoi(int n, int one, int two, int three)             //�޷���ֵ�������붨������Ϊvoid
{
	if (n == 1)
		move(one, three);
	else                                                   //�����ֹһ����
	{
		hanoi(n - 1, one, three, two);                     //���n-1�����Ĳ���
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');

	return 0;
}*/



/*#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else return y;
}

int main()
{
	int a[10], i, big = 0;           //��������ֵ���ܺͺ�����������ͬ������
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	big = a[0];
	for (i = 1; i < 10; i++)
		big = max(big, a[i]);
	for (i = 0; i < 10; i++)
		if (big == a[i])
		{
			i = i + 1;               //����ڼ�����Ҫ�±��1
			break;
		}
	printf("%d,%d", big, i);

	return 0;
}*/


/*�������������򡱵��������飬�ú�������ƴ�ӳ�һ����������飬�����

����������

���룺0, 1, 3, 3, 4

2, 3, 4, 6, 8

�����0, 1, 2, 3, 3, 3, 4, 4, 6, 8*/

/*#include <stdio.h>

void fun(int a[], int b[])                  //�޷���ֵ���Ͷ���Ϊvoid
{
	int i, j, min = 0, t = 0;
	for (i = 1; i < 10; i++)
	{
		if (a[i] == 0)
			a[i] = b[i-5];
	}
	for (i = 0; i < 10; i++)
		printf("%5d", a[i]);
	printf("\n");

	for (i = 0; i < 10; i++)
	{
		min = i;
		for (j = i + 1; j < 10; j++)
		{
			if (a[j] <a[min])
			{
				min = j;                    //ѡ�񷨱Ƚϴ�С���±�Ƚϣ���Ϊ�����������ܴ�����ͬ�����֣������±�һ������ͬ
			}
		}
		if (min!=i)
		{
			t = a[i];
			a[i] = a[min];
			a[min] = t;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%5d", a[i]);
}


int main()
{
	int a[10] = { 0,1,3,3,4 }, b[5] = { 2,3,4,6,8 };
	fun(a, b);

	return 0;
}*/




/*��д�ݹ麯��int fib(int n)��Fabonacci����.
Fabonacci���еĶ���Ϊ��
f(n) = f(n - 2) + f(n - 1)  (n >= 2)   ���� f(1) = 1��f(2) = 1��
��������
���룺10
�����55*/

/*#include <stdio.h>

int fabonacci(int n)
{
	int f = 0;
	if (n == 1 || n == 2)
		f = 1;
	else f = fabonacci(n - 1) + fabonacci(n - 2);   //�����������ڸ�ֵ���ʽ����ߣ�ֻ�����ⶨ��һ������������ֵ

	return f;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", fabonacci(n));

	return 0;
}*/



/*��дһ�����ݹ麯���������������������λ��ӣ�ֱ�������ӵĽ��Ϊ��λ������

38 ��3 + 8 ��11, 11 ��1 + 1 ��2

��������

���룺38

�����2*/


/*#include <stdio.h>

int sum(int n)
{
	int s = 0, b = 0;
	s = n / 10;
	b = n % 10;
	if ((s + b) >= 10)
		sum(s + b);
	else return (s + b);           //��if�������������������ֵ����������ݹ飬��else
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", sum(n));

	return 0;

}*/



/*#include <stdio.h>


float ave(float array[])            //���Բ���ָ���β�����Ĵ�С
{
	int i;
	float sum = 0;
	for (i = 0; i < 10; i++)
		sum += array[i];
	return(sum / 10);
}

int main()
{
	float score[10], ave_score = 0;
	int i;
	for (i = 0; i < 10; i++)
		scanf("%f", &score[i]);
	ave_score = ave(score);
	printf("%f", ave_score);

	return 0;
}*/



/*#include <stdio.h>
float ave(float array[], int n)
{
	int i;
	float sum = 0;
	for (i = 0; i < n; i++)
		sum += array[i];
	return(sum / n);
}

int main()
{
	float score1[5], score2[10];
	int i;
	for (i = 0; i < 5; i++)
		scanf("%f", &score1[i]);
	for (i = 0; i < 10; i++)
		scanf("%f", &score2[i]);
	printf("%f,%f", ave(score1, 5), ave(score2, 10));

	return 0;
}*/



/*#include <stdio.h>
void chose(int a[])                    //����������Ϊ�βΣ������������㷨��ֱ�Ӹı�ʵ�������Ԫ��˳��
{
	int i, j, t = 0, min = 0;
	for (i = 0; i < 10; i++)
	{
		min = i;
		for (j = i + 1; j < 10; j++)
		{
			if (a[min] > a[j])
				min = j;
		}
		if (min != i)
		{
			t = a[i];
			a[i] = a[min];
			a[min] = t;
		}
	}
}

int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	chose(a);
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);

	return 0;
}*/




/*#include <stdio.h>
int max(int a[3][4])
{
	int i, j, big = a[0][0];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			if (big < a[i][j])
				big = a[i][j];

	return (big);
}

int main()
{
	int a[3][4], i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	printf("%d", max(a));

	return 0;
}*/





/*#include <stdio.h>

int gys_(int v, int u)
{
	int r = 0, t = 0;                     //�����Լ������С���������㷨������շת����������Լ�����������ĳ˻��������Լ����Ϊ��С������
	if (v > u)
	{
		t = v;
		v = u;
		u = t;
	}
	while ((u%v) != 0)
	{
		r = u % v;
		u = v;
		v = r;
	}
	
	return (v);                            //����ֵ��v����r��ӦΪv�Ѿ���������r�����ҿ��Լ�������ʵ�����

}


int main()
{
	int v = 0, u = 0, gys = 0, gbs = 0;
	scanf("%d,%d", &v, &u);
	
	printf("gys=%d,gbs=%d", gys_(v, u), v * u / gys_(v, u));
	
	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

void over(int a, int b, int c,int delta)
{
	float x1 = 0, x2 = 0;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	printf("%f,%f", x1, x2);
}

void mid(int a, int b)
{
	float x = 0;
	x = -b / (2 * a);
	printf("%f", x);
}

void low()
{
	printf("no roots!");
}

int main()
{
	int a = 0, b = 0, c = 0; 
	int delta = 0;
	float x1 = 0, x2 = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	delta = b * b - 4 * a * c;
	if (delta > 0)
		over(a, b, c, delta);
	else if (delta == 0)
		mid(a, b);
	else if (delta < 0)
		low();

	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

void prime(int num)
{
	int i, k = 0;
	k = sqrt(num);
	for (i = 2; i <= k; i++)
		if (num % i == 0)
			break;
	if (i >= k + 1) printf("yes prime!");
	else printf("no prime!");
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	prime(num);

	return 0;
}*/




/*#include <stdio.h>

void swap(int a[3][3])                     //���ֻ����һ�����黻������ֱ������ת���������������ݵ��ظ�
{
	int i, j, t = 0;
	for (i = 0; i < 3; i++)
		for (j = i+1; j < 3; j++)          //�������е�����Ҫ��λ�ã��ҵ��Խ��߶ԳƵ�λ�û��Ϳ���
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

int main()
{
	int a[3][3], i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	swap(a);
	
	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void trans(char str[],int n)
{
	int i, t = 0;
	for (i = 0; i < n/2; i++)       //ע��ѭ����ֹ��λ�ã�ֻҪ�ַ��������ǰ��κͺ��λ����Ϳ��ԣ������õ�ˮ��
	{
		t = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = t;
	}
}

int main()
{
	char str[20];
	int n = 0;
	gets_s(str);
	n = strlen(str);                //��strlen���������ַ�������ĳ���
	trans(str, n);
	puts(str);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

void connect(char str1[], char str2[])     //���������β�ʱ����������һ��Ҫ���������������
{
	int i = 0, j = 0;
	j = strlen(str1);
	while (str2[i] != '\0')
	{
		str1[j + i] = str2[i];
		i++;
	}
	if (str2[i] == '\0')                   //�����������str1�ı�־
	{
		str1[j + i] = '\0';
	}
}

int main()
{
	char str1[100], str2[20];
	int n = 0;
	gets_s(str1);
	gets_s(str2);
	connect(str1, str2);
	puts(str1);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

void yuan(char str1[], char str2[])
{
	int i, j = 0;
	for (i = 0; i < strlen(str1); i++)                   //����������ֱ��ʹ��strlen���������öඨ��һ����ĸn����ʾ�ַ�������ĳ���
	{
		if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')    //��д��Ԫ����ĸҲҪ����
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';                                                 //��Ҫ����������ַ�������ֹ���ţ���Ȼ�����һ�������������
}

int main()
{
	char str1[20], str2[10];
	gets_s(str1);
	yuan(str1, str2);
	puts(str2);

	return 0;
}*/




/*#include <stdio.h>

void trans(int a[], char str[])
{
	int i;
	for (i = 0; i < 4; i++)
	{

		if (a[i] == 0)
			str[i * 2] = '0';
		else if (a[i] == 1)
			str[i * 2] = '1';
		else if (a[i] == 2)
			str[i * 2] = '2'; 
		else if (a[i] == 3)
			str[i * 2] = '3';
		else if (a[i] == 4)
			str[i * 2] = '4';
		else if (a[i] == 5)
			str[i * 2] = '5';
		else if (a[i] == 6)
			str[i * 2] = '6';
		else if (a[i] == 7)
			str[i * 2] = '7';
		else if (a[i] == 8)
			str[i * 2] = '8';
		else if (a[i] == 9)
			str[i * 2] = '9';
		if ((i * 2 + 1) != 7)
			str[i * 2 + 1] = ' ';
		else str[i * 2 + 1] = '\0';
	}
}

int main()
{
	char str[8];
	int a[4], i;
	for (i = 0; i < 4; i++)
		scanf("%d", &a[i]);
	trans(a, str);
	puts(str);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>
int Letter = 0, Num = 0, Blank = 0, Other = 0;      //Ϊ��ʹ��һ����������ĸ�ֵ��ʹ��ȫ�ֱ�������һ��ʼ���������涨�壬����ķ�����ͬ

void count(char str[])
{
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z'))
			Letter++;
		else if ('0' <= str[i] && str[i] <= '9')
			Num++;
		else if (str[i] == ' ')                                  //ע��˫�Ⱥ�
			Blank++;
		else Other++;
	}
}

int main()
{
	char str[80];
	gets_s(str);
	count(str);
	printf("%d,%d,%d,%d", Letter, Num, Blank, Other);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else return 0;
}

int longest(char str[])
{
	int i, place = 0, len = 1, length = 0, flag = 1, point = 0;
	for (i = 0; i <= strlen(str); i++)
		if (alpha(str[i]))
		{
			if (flag)                                 //flagΪ1ʱ�����ʿ�ʼ����¼����ĸ�ĳ�ʼλ��
			{
				point = i;
				flag = 0;                             //ʹ�ڲ������ո������µ��ʳ��ȼӼ�
			}
			else                                      //���ʼ���
				len++;
		}
		else                                          //�����ո񣬵��ʽ���
		{
			flag = 1;                                 //���ñ����flag
			if (len >= length)
			{
				length = len;
				place = point;
				len = 1;                              //���õ��ʵĳ��ȣ�������һ�����ʼ���ѭ��ʹ��
			}
		}
	return (place);                                   //�ҵ������ĸ��ͷ����ʼλ��
}

int main()
{
	char str[100];
	int i = 0;
	gets_s(str);
	for (i = longest(str); alpha(str[i]); i++)        //ֱ����1��0�ж�ѭ������ֹ���
		printf("%c", str[i]);                         //���һ���ַ���%c

	return 0;
}*/




/*#include <stdio.h>

void bubble(int a[])
{
	int i, j, t = 0;
	for(i=0;i<9;i++)                          //���廻���Σ�N-1��
	    for (j = i + 1; j < 10; j++)          //һ�����滻���Σ�N-i��
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);
}


int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);                   //����ð�ݷ�
	bubble(a);

	return 0;
}*/




/*#include <stdio.h>

void bubble(char str[])
{
	int i, j, t = 0;
	for (i = 0; i < 9; i++)                          
		for (j = i + 1; j < 10; j++)          
		{
			if (str[i] > str[j])
			{
				t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
		}
	puts(str);
}


int main()
{
	char str[20];                          //�ַ����鿪��㣬��ð�ݷ������ַ�����
	gets_s(str);
	bubble(str);

	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

float newton(int a, int b, int c, int d)
{
	float x = 0, x0 = 1;
	x = x0 - (a * x0 * x0 * x0 + b * x0 * x0 + c * x0 + d) / (a * 3 * x0 * x0 + b * 2 * x0 + c);
	while (fabs(x - x0) > 1e-3)                                                                        //ע��ѭ������������
	{
		x0 = x;
		x = x0 - (a * x0 * x0 * x0 + b * x0 * x0 + c * x0 + d) / (a * 3 * x0 * x0 + b * 2 * x0 + c);
	}

	return x;
}

int main()
{
	float x = 0, x0 = 1;
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	printf("%f",newton(a, b, c, d));

	return 0;
}*/



/*#include <stdio.h>

float p(int n, int x)
{
	float y = 0;
	if (n == 0)
		y = 1;
	else if (n == 1)
		y = x;
	else if (n >= 1)
		y = (2 * n - 1) * x * p((n - 1), x) - (n - 1) * p((n - 2), x) / n;        //�ݹ���ú������Ǻ����������ź���

	return y;
}

int main()
{
	int n = 0, x = 0;
	scanf("%d,%d", &n, &x);
	printf("%f",p(n, x));

	return 0;

}*/




/*#include <stdio.h>

float ave_stu(int s[])
{
	int i = 0;
	float sum = 0;
	for (i = 0; i < 5; i++)
		sum += s[i];

	return sum / 5;
}


void ave_class(int s1[], int s2[], int s3[], int s4[], int s5[], int s6[], int s7[], int s8[], int s9[], int s10[])
{
	int i = 0;
	float sum = 0;
	for (i = 0; i < 5; i++)
		printf("%f\n", (s1[i] + s2[i] + s3[i] + s4[i] + s5[i]+s6[i] + s7[i] + s8[i] + s9[i] + s10[i]) / 10.0);
}

void highest(int s1[], int s2[], int s3[], int s4[], int s5[], int s6[], int s7[], int s8[], int s9[], int s10[])
{
	int i = 0, imax = 0, stu = 0, max = 0;
	max = s1[0];
	imax = 0;
	stu = 0;
	for (i = 0; i < 5; i++)
		if (s1[i] > max)
		{
			max = s1[i];
			imax = i;
			stu = 1;
		}
	for (i = 0; i < 5; i++)
		if (s2[i] > max)
		{
			max = s2[i];
			imax = i;
			stu = 2;
		}
	for (i = 0; i < 5; i++)
		if (s3[i] > max)
		{
			max = s3[i];
			imax = i;
			stu = 3;
		}
	for (i = 0; i < 5; i++)
		if (s4[i] > max)
		{
			max = s4[i];
			imax = i;
			stu = 4;
		}
	for (i = 0; i < 5; i++)
		if (s5[i] > max)
		{
			max = s5[i];
			imax = i;
			stu = 5;
		}
	for (i = 0; i < 5; i++)
		if (s6[i] > max)
		{
			max = s6[i];
			imax = i;
			stu = 6;
		}
	for (i = 0; i < 5; i++)
		if (s7[i] > max)
		{
			max = s7[i];
			imax = i;
			stu = 7;
		}
	for (i = 0; i < 5; i++)
		if (s8[i] > max)
		{
			max = s8[i];
			imax = i;
			stu = 8;
		}
	for (i = 0; i < 5; i++)
		if (s9[i] > max)
		{
			max = s9[i];
			imax = i;
			stu = 9;
		}
	for (i = 0; i < 5; i++)
		if (s10[i] > max)
		{
			max = s10[i];
			imax = i;
			stu = 10;
		}
	
	printf("%d,%d,%d\n", max, imax + 1, stu);
}

void square(int s1[], int s2[], int s3[], int s4[], int s5[], int s6[], int s7[], int s8[], int s9[], int s10[])
{
	double sum1 = 0, sum2 = 0;
	sum1 = ave_stu(s1) * ave_stu(s1) + ave_stu(s2) * ave_stu(s2) + ave_stu(s3) * ave_stu(s3) + ave_stu(s4) * ave_stu(s4) + ave_stu(s5) * ave_stu(s5) + ave_stu(s6) * ave_stu(s6) + ave_stu(s7) * ave_stu(s7) + ave_stu(s8) * ave_stu(s8) + ave_stu(s9) * ave_stu(s9) + ave_stu(s10) * ave_stu(s10);
	sum2 = ave_stu(s1) + ave_stu(s2) + ave_stu(s3) + ave_stu(s4) + ave_stu(s5) + ave_stu(s6) + ave_stu(s7) + ave_stu(s8) + ave_stu(s9) + ave_stu(s10);
	
	printf("%f", sum1 / 10 - (sum2 / 10) * (sum2 / 10));
}

int main()
{
	int s1[5], s2[5], s3[5], s4[5], s5[5], s6[5], s7[5], s8[5], s9[5], s10[5], i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &s1[i]);
		scanf("%d", &s2[i]);
		scanf("%d", &s3[i]);
		scanf("%d", &s4[i]);
		scanf("%d", &s5[i]);
		scanf("%d", &s6[i]);
		scanf("%d", &s7[i]);
		scanf("%d", &s8[i]);
		scanf("%d", &s9[i]);
		scanf("%d", &s10[i]);
	}
	printf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n", ave_stu(s1), ave_stu(s2), ave_stu(s3), ave_stu(s4), ave_stu(s5), ave_stu(s6), ave_stu(s7), ave_stu(s8), ave_stu(s9), ave_stu(s10));
	ave_class(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
	highest(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);
	square(s1, s2, s3, s4, s5, s6, s7, s8, s9, s10);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void sort(char name[10][8], int label[])
{
	int j, t = 0;
	char temp[8];
	for (j = 0; j < 9; j++)
		for(j+1;(j+1)<9;j++)
			if (label[j] > label[j + 1])
			{
				t = label[j];
				label[j] = label[j + 1];
				label[j + 1] = t;

				strcpy(temp, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], temp);
			}
	for (j = 0; j < 10; j++)
		printf("%s,%d", name[j], label[j]);

}


void search(char name[10][8], int label[],int num)
{
	int top = 0, bott = 9, mid = 0, loca = 0, sign = 1;          //loca��λ�ã�sign�Ǳ�ǡ�top��ǰ��bott�ں�
	if ((num < label[0]) || (num > label[9]))                    //locaΪ-1.��ʾû�ҵ���û��������
		loca = -1;
	while ((sign == 1) && (top < bott))
	{
		mid = (bott + top) / 2;
		if (num == label[mid])                                   //�պ����м���Ǹ���ֱ�ӽ���ѭ��
		{
			loca = mid;
			printf("%d,%s", num, label[loca]);
			sign = -1;
		}
		else if (num < label[mid])                               //��ǰ���
			bott = mid - 1;
		else top = mid + 1;
	}
	if (sign == 1 || loca == -1)                                 //���������һ��ʼ�ͳ�����Χ��ѭ��û�ҵ�
		printf("not found");
}


int main()
{
	char name[10][8];
	int label[10], i, num = 0;
	for (i = 0; i < 10; i++)
		scanf("%s,%d", &name[i], &label[i]);
	sort(name, label);
	scanf("%d", &num);
	search(name, label,num);

	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

int main()
{
	void prime(int num);                              //���������뺯��ԭ�ͻ�����ͬ
	int num = 0;
	scanf("%d", &num);
	prime(num);

	return 0;
}

void prime(int num)
{
	int i, k = 0;
	k = sqrt(num);
	if (num >= 1)
	{
		for (i = 2; i <= k; i++)
			if (num % i == 0)
				break;
		if (i >= k + 1) printf("yes prime!");
		else printf("not prime!");
	}
	else printf("not prime!");
}*/




/*#include <stdio.h>
#include <math.h>

void prime(int num)
{
	int i, k = 0;
	k = sqrt(num);
	if (num >= 1)
	{
		for (i = 2; i <= k; i++)
			if (num % i == 0)
				break;
		if (i >= k + 1) printf("yes prime!");
		else printf("not prime!");
	}
	else printf("not prime!");
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	prime(num);

	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

void prime(int num)
{
	int i, k = 0;
	k = sqrt(num);
	if (num >= 1)
	{
		for (i = 2; i <= k; i++)
			if (num % i == 0)
				break;
		if (i >= k + 1) printf("%d yes prime!\n", num);
	}
}

int main()
{
	int num = 0;
	for(num=100;num<=200;num++)
	prime(num);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	void letter(char str1[], char str2[]);
	char str1[20], str2[10];
	int i = 0;
	gets_s(str1);
	letter(str1, str2);

	return 0;
}

void letter(char str1[], char str2[])
{
	int i, j = 0;
	for (i = 0; i < 20; i++)
		if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
		{
			str2[j] = str1[i];
			j++;
		}
	str2[j] = '\0';
	puts(str2);
}*/




/*#include <stdio.h>
void ave_stu(int score[10][5])
{
	float sum = 0;
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 5; j++)
			sum += score[i][j];
		printf("%f\n", sum / 5);
		sum = 0;
	}
}
void ave_class(int score[10][5])
{
	float sum = 0;
	int i, j;
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 10; i++)
			sum += score[i][j];
		printf("%f\n", sum / 10);
		sum = 0;
	}
}
void highest(int score[10][5])
{
	int max_score = 0, max_stu = 0, max_class = 0, i, j;
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			if (score[i][j] > max_score)
			{
				max_score = score[i][j];
				max_stu = i + 1;
				max_class = j + 1;
			}
	printf("%d,%d,%d", max_score, max_stu, max_class);
}
int main()
{
	int score[10][5];
	int i, j;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &score[i][j]);
	ave_stu(score);
	ave_class(score);
	highest(score);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>
int alpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return 1;
	else return 0;
}
void longest(char str[])
{
	int i, j, flag = 1, point = 0, len = 1, length = 0, place = 0;
	for(i=0;i<=strlen(str);i++)
		if (alpha(str[i]))
		{
			if (flag == 1)
			{
				flag = 0;
				point = i;
			}
			else len++;
		}
		else 
		{
			flag = 1;
			if (len > length)
			{
				place = point;
				len = 0;
			}
		}
	for (i = place; alpha(str[i]); i++)
		printf("%c", str[i]);
}
int main()
{
	char str[50];
	gets_s(str);
	longest(str);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

void bubble(char c[])
{
	int i, j, t = 0;
	for (i = 0; i <(strlen(c)-1); i++)
		for (j=i+1;j<strlen(c);j++)
			if (c[j] < c[i])
			{
				t = c[j];
				c[j] = c[i];
				c[i] = t;
			}
	puts(c);
}

int main()
{
	char c[11];                                 //���鳤�ȼ�1,��Ϊ�ַ�������Ҫ������ֹ����
	gets_s(c);
	bubble(c);
	return 0;
}*/


/*#include <stdio.h>
#include <string.h>

void bubble(char c[])
{
	int i, j, t = 0;
	for (i = 0; i < (strlen(c) - 1); i++)
		for (j = i + 1; j < strlen(c); j++)
			if (c[j] > c[i])
			{
				t = c[j];
				c[j] = c[i];
				c[i] = t;
			}
	puts(c);
}

int main()
{
	char c[6];                                
	gets_s(c);
	bubble(c);
	return 0;
}*/



/*#include <stdio.h>


void trans(int num)
{
	int i = 0;
	if ((i = num / 10) != 0)       //���λ��
		trans(i);
	putchar(num % 10 + '0');       //�����num�Ǻ����ж�����βΣ��ں����ݹ��д������i��ֵ����putchar������ת�����ַ�
	putchar(32);
}


int main()
{
	int num = 0;
	scanf("%d", &num);
	trans(num);

	return 0;

}*/




/*#include <stdio.h>
#include <string.h>
int letter = 0, num = 0, blank = 0, other = 0;
void count(char str[])
{
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z' || 'a' <= str[i] && str[i] <= 'z')
			letter++;
		else if ('0' <= str[i] && str[i] <= '9')
			num++;
		else if (str[i] == 32)                                                          //˫���ںţ�����
			blank++;
		else other++;
	}

	printf("%d,%d,%d,%d", letter, num, blank, other);
}

int main()
{
	char str[50];
	gets_s(str);
	count(str);

	return 0;
}*/


/*#include <stdio.h>

int gys = 0, gbs = 0;
void hcf(int u,int v)
{
	int r = 0, t = 0;
	if (u < v)
	{
		t =u;
		u = v;
		v = t;
	}
	while ((r=u % v) != 0)
	{
		u = v;
		v = r;
	}
	gys = v;
}

void lcd(int r, int u,int v)
{
	gbs= (u * v / r);
}

int main()
{
	int u = 0, v = 0, r = 0;
	scanf("%d,%d", &u,&v);
	hcf(u,v);
	printf("%d\n", gys);
	lcd(gys, u, v);
	printf("%d", gbs);

	return 0;
}*/


/*#include <stdio.h>
int main() 
{ unsigned char c=-1; 
  short i=c;               //0000 0000 1111 1111
  printf("%u",i);          //������ͬ�£�ֻ����Ҫ������޷�����
  return 0; 
}*/



/*#include <stdio.h>
int main() 
{ unsigned char c=-1; 
  short i=c;               //unsignedת��Ϊsigned,����ֱ�Ӹ��Ƶ���λ����λ��0
  printf("%d",i);          //0000 0000 1111 1111����������з�����
  return 0; 
} */


/*#include <stdio.h>
int main() 
{ char c=-1;              
  unsigned short i=c;     //signedת��Ϊunsigned������ֱ�Ӹ��Ƶ���λ����λΪ����λ��һ���ֽڵ�char�������ֽڵ�short int,λ����չ��
  printf("%d",i);         //1111 1111 1111 1111   ��Ϊ���޷���ʮ���������������������ʱ��ֱ������������ÿ��Ƿ��ţ�����%d��������з��ŵ�ʮ������������
  return 0; 
}*/



/*��ָ��ʵ��ɾ���ַ����г��ֵ�����ָ���ַ������ַ�����ָ���ַ����ɼ������룩
���룺
ahuabcdefgff
a
�����
hubcdefgff*/

/*#include <stdio.h>

int main()
{
	char str[20], c = 0;
	char* p = str;                       //����һ��ָ�������ָ��
	int i = 0;
	gets_s(str);
	scanf("%c", &c);
	for (p = str; (*p) != '\0'; p++)     //˫ѭ����ָ��p������Ԫ�ظ���i
	    if (*p == c)
		{
			p = p + 1;
			str[i] = *p;                 //�����Ѿ���ָ����������һλ�ˣ�ֱ����ָ��p�Ϳ���
			i++;
		}
		else 
		{
			str[i] = *p;
			i++;
		}
	str[i] = '\0';                       //����������һλ������Ԫ�أ���������������
	printf("%s", str);

	return 0;

}*/



//����ָ���д����ʵ����ά�����ת�á�

/*#include <stdio.h>

int main()
{
	int a[2][2][3] =
	{
		{
		{1,2,3},
		{4,5,6}
		},
		{
		{7,8,9},
		{10,11,12}
		}
	};                                  //��ά����ı�ʾ����ʼ��
	int b[3][2][2], i, j, k;
	int* p;                             //����һ����ͨ��ָ�룬ͨ���ƶ�λ�����ı�ָ��
	for (i = 0; i<3; i++)               //˼·��һ��ά�û����ڶ�λ����
	{
		p = &a[0][0][i];
		for (j = 0; j < 2; j++)
		{
			p = &a[i][j][0];
			for (k = 0; k<2; k++)
			{
				p = &a[k][j][i];        
				b[i][j][k] = *p;        //ԭ�����ƶ�����һ�ţ��·����ƶ�����һ��
			}
		}
	}
	for (i = 0; i < 3; i++)             //��ά������������ʽ���ά������
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 2; k++)
			{
				printf("%d\t", b[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}*/




/*��дһ��swap��......������������һ���ַ���ͨ�����øú���ʵ������Ĺ��ܣ�

���ַ�������Ϊ����ʱ���м���ַ����������Ұ��ƽ�ƻ���λ���磺

����abcdefg�����efgdabc�����ַ�������Ϊż��ʱ�����Ұ��ֱ��ƽ�ƻ���λ���磺����abcdefgh�����efghabcd��*/


/*#include <stdio.h>
#include <string.h>

void swap(char str[])
{
	char* p;
	p = str;
	char str2[20] = { 0 };
	int i;
	if (strlen(str) % 2 == 1)
	{
		for (i = 0; i < strlen(str) / 2; i++)
		{
			str2[i] = *p;
			p++;
		}
		for (i = 0; i < strlen(str) / 2; i++)
		{
			str[i] = str[i + 1 + strlen(str) / 2];
		}
		str[i] = str[strlen(str) / 2];
		str[i+1] = '\0';
		strcat(str, str2);
	}
	else
	{
		for (i = 0; i < strlen(str) / 2; i++)
		{
			str2[i] = *p;
			p++;
		}
		for (i = 0; i < strlen(str) / 2; i++)
	    {
			str[i] = str[i + strlen(str) / 2];
		}
		str[i] = '\0';
		strcat(str, str2);
	}

	puts(str);
}

int main()
{
	char str[20];
	gets_s(str);
	swap(str);

	return 0;
}*/



/*#include <stdio.h>

void swap(int* p1, int* p2)                  //ָ����Ϊ�����βκ�ʵ��
{
	int t = 0;
	t = *p1;
	*p1 = *p2;
	*p2 = t;                                 //��������Ϊ�����βλ���ʵ�Σ�ָ���ָ��һֱ���䣬�����ָ���������ݣ���ʵȡ����֮�����a��b����
}

void exchange(int* p1, int* p2, int* p3)
{
	if (*p1 < *p2)swap(p1, p2);
	if (*p1 < *p3)swap(p1, p3);
	if (*p2 < *p3)swap(p2, p3);
}

int main()
{
	int a = 0, b = 0, c = 0;
	int* p1 = &a, * p2 = &b, * p3 = &c;
	scanf("%d,%d,%d", p1, p2, p3);
	exchange(p1,p2,p3);
	printf("%d,%d,%d", *p1, *p2, *p3);       //���ָ����ȡ���ݷ�

	return 0;
}*/



/*#include <stdio.h>

void swap(int* p1, int* p2)
{
	int t = 0;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void row(int *p1, int *p2, int *p3)
{
	if (*p1 > *p2)swap(p1, p2);
	if (*p1 > *p3)swap(p1, p3);
	if (*p2 > *p3)swap(p2, p3);
}

int main()
{
	int a = 0, b = 0, c = 0;
	int* p1 = &a, * p2 = &b, * p3 = &c;       //��һ����ͨ��ָ�������ʼ����Ҫ���ϵ�ַ����
	scanf("%d,%d,%d", p1, p2, p3);
	row(p1, p2, p3); 
	printf("%d,%d,%d", *p1, *p2, *p3);        //���ı�a,b,c��ֵ��ֻ�Ǹı��˲�ָͬ���Ӧ��ָ��

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void swap(char* p1, char* p2)
{
	char p[50];
	strcpy(p, p1);                                       //p1,p2,��ָ���ַ��������ָ�룬����λ�����ַ������ƺ������¶�����һ���ַ�����Ϊ�м���
	strcpy(p1, p2);                                      //����Ҳ���ܻ��ำֵ
	strcpy(p2, p)�� //�ı����ָ����ָ������ֵ�����������ݣ�ָ���ֵ���䣬��Ȼ�ǵ����ֵ���ݣ����Ǵ��ݵ��ǵ�ַ���Ѿ��ڵ�ַ��������������λ�ý�������
}

void row(char* p1, char* p2, char* p3)
{
	if (strcmp(p1, p2) > 0)swap(p1, p2);
	if (strcmp(p1, p3) > 0)swap(p1, p3);
	if (strcmp(p2, p3) > 0)swap(p2, p3);
}

int main()
{
	char str1[50], str2[50], str3[50];
	char* p1 = str1, * p2 = str2, * p3 = str3;          //�������������׵�ַ��ָ��Ҳ���׵�ַ�����߿�ʼ�ȼ�
	gets_s(str1);
	gets_s(str2);
	gets_s(str3);
	row(p1, p2, p3);
	puts(p1);
	puts(p2);
	puts(p3);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void swap(char* p1, char* p2)
{
	char* t;
	t = p1;
	p1 = p2;                               //������ͨ��ִ�е��ú������ı�ʵ��ָ�������ֵ�������Ըı�ʵ��ָ����ָ������ֵ
	p2 = t;                                //���󣡲���ͨ���ı亯��ָ���βε�ֵ���ı�ָ��ʵ�ε�ֵ������һִ�����ڴ���ͷ��ˣ�ֻ�ǵ����ֵ����
}

void row(char* p1, char* p2, char* p3)
{
	if (strcmp(p1, p2) > 0)swap(p1, p2);
	if (strcmp(p1, p3) > 0)swap(p1, p3);
	if (strcmp(p2, p3) > 0)swap(p2, p3);
}

int main()
{
	char str1[50], str2[50], str3[50];
	char* p1 = str1, * p2 = str2, * p3 = str3;          
	gets_s(str1);
	gets_s(str2);
	gets_s(str3);
	row(p1, p2, p3);
	puts(p1);
	puts(p2);
	puts(p3);

	return 0;
}*/




/*#include <stdio.h>

void input(int a[], int* p)
{
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", p + i);
	for (i = 0; i < 10; i++)
		printf("%d\t", *(p + i));
	printf("\n");
}

void exchange(int* p)
{
	int i, * min = p, * max = p, t = 0;
	for (i = 1; i < 10; i++)
	{
		if (*(p + i) < *min)
			min = (p + i);
		if (*(p + i) > *max)
			max = (p + i);
	}
	t = *p;
	*p = *min;
	*min = t;
	if (max == p) max = min;                         //�����һ����������������������
	t = *(p+9);
	*(p+9) = *max;
	*max = t;                     
}

void output(int a[], int* p)
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%d\t", *(p + i));
}

int main()
{
	int a[10];
	int* p = a;
	input(a, p);
	exchange(p);
	output(a, p);

	return 0;
}*/



/*#include <stdio.h>
#define N 8
#define M 4

void exchange(int str[])
{
	int i = 0, t = 0;
	for (i = 0; i < N - M; i++)
	{
		t = str[i];
		str[i] = str[N - M+ i];
		str[N - M + i] = t;
	}
	
}

int main()
{
	int str[N], i;
	for (i = 0; i < N; i++)
		scanf("%d", &str[i]);
	exchange(str);
	for (i = 0; i < N; i++)
		printf("%d\t", str[i]);
	return 0;
}*/



/*#include <stdio.h>

void exchange(int a[],int n,int m)
{
	int* p = a, t = 0;
	for (p = a; p < a + n - m; p++)
	{
		t = *p;
		*p = *(p + n - m);
		*(p + n - m) = t;
	}
}

int main()
{
	int a[10], i, n = 0, m = 0;
	scanf("%d,%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	exchange(a,n,m);
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int n = 0, a[50]={0}, i = 0, k = 0, m = 0;
	int* p = a;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		*(p+i) = i + 1;                      //ÿһ���˴�1��ʼ���
	i = 0;                                   //����ѭ��֮��Ҫ����i,����i�Ѿ��ܵ�����ȥ��
	while (m < n - 1)
	{
		if (*(p + i) != 0)k++;               //��ʼ�������ӵڶ��ֿ�ʼ�������Ѿ���0���ˣ�
		if (k == 3)
		{
			*(p + i) = 0;                    //����3����ǰ����0��������б���3���˵�������0��
			k = 0;                           //��ͷ��ʼ����
			m++;                             //�˳���������1
		}
		i++;                                 //������1
		if (i == n)                          //��һ�������˶���������
			i = 0;
	}
	while (*p == 0)p++;                      //��Ϸ��������ʼ������һ���ˣ�Ψһû�б���0)
	printf("%d", *p);

	return 0;
}*/



/*#include <stdio.h>

int length(char str[])
{
	char* p;
	int num = 0;
	for (p = str; *p != '\0'; p++)
		num++;

	return (num);
}

int main()
{
	char str[10];
	gets_s(str);
	printf("%d",length(str));

	return 0;
}*/




/*#include <stdio.h>

void copy(char str[],int m)
{
	char* p;
	char str2[20];
	int i = 0;
	for (p = &str[m - 1]; *p != '\0'; p++)
	{
		str2[i] = *p;
		i++;
	}
	str2[i] = '\0';
	puts(str2);
}

int main()
{
	char str[20];
	int m = 0;
	gets_s(str);
	scanf("%d", &m);
	copy(str, m);

	return 0;
}*/



/*#include <stdio.h>

void find(char str[])
{
	int big = 0, small = 0, blank = 0, num = 0, other = 0;
	char* p;
	for (p = str; *p != '\0'; p++)
	{
		if ('A' <= *p && *p <= 'Z')
			big++;
		else if ('a' <= *p && *p <= 'z')
			small++;
		else if (*p == 32)
			blank++;
		else if ('0' <= *p && *p <= '9')
			num++;
		else other++;
	}

	printf("%d,%d,%d,%d,%d", big, small, blank, num, other);
}

int main()
{
	char str[20];
	gets_s(str);
	find(str);

	return 0;
}*/



/*#include <stdio.h>

void change(int a[3][3], int* p)
{
	int b[3][3], i, j;
	p = &a[0][0];
	for(j=0;j<3;j++)
		for (i = 0; i < 3; i++)
		{
			b[i][j] = *p;
			p++;
		}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d\t", b[i][j]);
		printf("\n");
	}
}

int main()
{
	int a[3][3];
	int* p;
	for (p = &a[0][0]; p <= &a[2][2]; p++)
		scanf("%d", p);
	change(a, p);

	return 0;
}*/



/*#include <stdio.h>

int min(int a[5][5], int n)
{
	int  b[25]={0}, i, j, k = 0, t = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			b[k] = a[i][j];
			k++;
		}
	for (i = 0; i < 24; i++)
	{
		for (k = 0; k < 24 - i; k++)
			if (b[k] > b[k + 1])
			{
				t = b[k];
				b[k] = b[k + 1];
				b[k + 1] = t;
			}
	}
	if (n == 1)
		return b[0];
	else if (n == 2)
		return b[1];
	else if (n == 3)
		return b[2];
	else if (n == 4)
		return b[3];
}

void put(int a[5][5], int* p)
{
	int max = a[0][0], n = 0, t = 0, i, j;
	for (p = &a[0][0]; p <= &a[4][4]; p++)
		if (*p > max)
			max = *p;
	for(i=0;i<5;i++)                               //��˳��һ��һ���������ȫ����һ��forѭ������Ͳ�����˳��ػ�
		for (j = 0; j < 5; j++)
			if (a[i][j] == max)
			{
				t = a[2][2];
				a[2][2] = a[i][j];
				a[i][j] = t;
			}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (a[i][j] == min(a, 1))
			{
				t = a[0][0];
				a[0][0] = a[i][j];
				a[i][j] = t;
			}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (a[i][j] == min(a, 2))
			{
				t = a[0][4];
				a[0][4] = a[i][j];
				a[i][j] = t;
			}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (a[i][j] == min(a, 3))
			{
				t = a[4][0];
				a[4][0] = a[i][j];
				a[i][j] = t;
			}
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (a[i][j] == min(a, 4))
			{
				t = a[4][4];
				a[4][4] = a[i][j];
				a[i][j] = t;
			}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

int main()
{
	int a[5][5];
	int* p;
	for (p = &a[0][0]; p <= &a[4][4]; p++)
		scanf("%d", p);
	put(a, p);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

void sort(char str[10][6])
{
	char(*p)[6];                                     //ʹ��ָ����6��Ԫ�ص�һά�����ָ�룬һ�λ�һ��,����ָ������
	char t[6];
	int i, j;
	p = str;                                         //��ʼ��
	for(i=0;i<9;i++)                                 //ð�ݷ���10��һά���飬�Ƚ�9��
		for (j = 0; j < 9 - i; j++)                  //ÿһ���ٱȽ�9-i��
			if(strcmp(p[j],p[j+1])>0)                //�ַ�����ıȽ���strcmp
		    {                                        //����֮�以����strcpy����������
				strcpy(t, p[j]);
				strcpy(p[j], p[j + 1]);
				strcpy(p[j + 1], t);
		    }
}

int main()
{
	char str[10][6];
	int i;
	for (i = 0; i < 10; i++)
		scanf("%s", str[i]);
	printf("\n");
	sort(str);
	for (i = 0; i < 10; i++)
		printf("%s\n", str[i]);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void sort(char* p[10])
{
	int i, j;
	char* t;
	for(i=0;i<9;i++)
		for (j = 0; j < 9 - i; j++)                       //ð�ݷ�
			if (strcmp(*(p + j), *(p + j + 1)) > 0)
			{
				t = *(p + j);                             //����ָ�������ŵĵ�ַ�������t����ָ�룬Ҳ�Ǵ�ŵ�ַ��
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
}

int main()
{
	char str[10][10], * p[10];                            //ʹ��ָ�����飬һ��Ҫһ��һ������ֵ���������ѭ��
	int i;
	for (i = 0; i < 10; i++)
	{
		p[i] = str[i];
		gets_s(str[i]);
	}
	sort(p);
	for (i = 0; i < 10; i++)
		puts(p[i]);                                       //������ָ������������ַ���������Ϊ�ַ�������û�����ָ�������ŵĵ�ַ˳�����

	return 0;
}*/




/*#include <stdio.h>

void swap(int* p1, int* p2)
{
	int t = 0;
	t = *p1;
	*p1 = *p2;
	*p2 = t;
}
int main()
{
	int n1 = 0, n2 = 0, n3 = 0;
	int* p1, * p2, * p3;                          //ÿһ��ָ��ǰ�涼Ҫ���Ǻ�
	p1 = &n1;
	p2 = &n2;
	p3 = &n3;
	scanf("%d,%d,%d", p1, p2, p3);
	if (*p1 > *p2)swap(p1, p2);
	if (*p1 > *p3)swap(p1, p3);
	if (*p2 > *p3)swap(p2, p3);
	printf("%d,%d,%d", *p1, *p2, *p3);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void swap(char* p1, char* p2)
{
	char p[40];                                   //�������������м��̶�����ָ���ַ�����ָ��(�����Ͳ���strcpy)������ָ��ʹ��һ��Ҫ�ȳ�ʼ������ָ�ǳ�Σ��
	strcpy(p, p1);                                //���ַ������ƺ������л���
	strcpy(p1, p2);
	strcpy(p2, p);
}

int main()
{
	char str1[40], str2[40], str3[40];
	char* p1, * p2, * p3;
	p1 = str1;
	p2 = str2;
	p3 = str3;
	gets_s(str1);
	gets_s(str2);
	gets_s(str3);
	if (strcmp(str1, str2) > 0)swap(p1, p2);
	if (strcmp(str1, str3) > 0)swap(p1, p3);
	if (strcmp(str2, str3) > 0)swap(p2, p3);
	puts(str1);
	puts(str2);
	puts(str3);

	return 0;
}*/




/*#include <stdio.h>

void change(int* p)
{
	int i, j, t;
	for(i=0;i<3;i++)
		for (j = i; j < 3; j++)                                   //������j=i,����j=0,�����ֻ�������
		{
			t = *(p + 3 * i + j);                                 //�������к��б�ʾ���������е���
			*(p + 3 * i + j) = *(p + 3 * j + i);
			*(p + 3 * j + i) = t;
		}
}

int main()
{
	int a[3][3], * p = &a[0][0], i = 0;
	for (; p <= &a[2][2]; p++)
		scanf("%d", p);
	p = &a[0][0];
	change(p);
	for (i = 0; i < 3; i++)
		printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);

	return 0;
}*/




/*#include <stdio.h>

void row(int a[10])
{
	int* p;
	for (p = &a[9]; p >= &a[0]; p--)
		printf("%d ", *p);
}

int main()
{
	int a[10], * p = a;
	for (; p <= &a[9]; p++)
		scanf("%d", p);
	row(a);

	return 0;
}*/



/*#include <stdio.h>

void row(int a[10])
{
	int i = 9;
	for (; i >= 0; i--)
		printf("%d ", a[i]);
}

int main()
{
	int a[10], * p = a;
	for (; p <= &a[9]; p++)
		scanf("%d", p);
	p = a;
	row(p);

	return 0;
}*/



/*#include <stdio.h>

int length(char* p)
{
	int i = 0;
	for (; *p != '\0'; p++)
		i++;

	return i;
}

int main()
{
	char str[20], * p = str;
	gets_s(str);
	printf("%d", length(p));

	return 0;
}*/




/*#include <stdio.h>

int length(char str[])
{
	char* p = str;
	int i = 0;
	for (; *p != '\0'; p++)
		i++;

	return i;
}

int main()
{
	char str[20];
	gets_s(str);
	printf("%d", length(str));

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int n = 0, a[10], i, k = 0, m = 0, * p = a;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		*(p + i) = i + 1;
	i = 0;
	while (m<n-1)
	{
		if (*(p + i) != 0)k++;
		if (k == 3)
		{
			*(p + i) = 0;
			k = 0;
			m++;
		}
		i++;
		if (i == n)
			i = 0;
	}
	while (*p == 0)
		p++;
	printf("%d", *p);

	return 0;
}*/




/*#include <stdio.h>

void change(int* p)
{
	int i, j, t = 0, * pmax = p, * pmin = p;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (*(p + 5 * i + j) > *pmax)pmax = p + 5 * i + j;
			if (*(p + 5 * i + j) < *pmax)pmin = p + 5 * i + j;
		}
	t = *(p + 12);
	*(p + 12) = *pmax;
	*pmax = t;
	t = *p;
	*p = *pmin;
	*pmin = t;
	pmin = p + 1;                                                                         //�ų����Ͻ������С��Ԫ��
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (*(p + 5 * i + j) < *pmin && (p + 5 * i + j) != p)                         //�ų����Ͻ������С��Ԫ��
				pmin = p + 5 * i + j;
	t = *(p+4);
	*(p+4) = *pmin;
	*pmin = t;
	pmin = p + 1;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (*(p + 5 * i + j) < *pmin && (p + 5 * i + j) != p&&(p+5*i+j)!=(p+4))      //�ų������Ѿ��ź�λ�õ���С��
				pmin = p + 5 * i + j;
	t = *(p + 20);
	*(p + 20) = *pmin;
	*pmin = t;
	pmin = p + 1;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (*(p + 5 * i + j) < *pmin && (p + 5 * i + j) != p && (p + 5 * i + j) != (p + 4)&&(p+5*i+j)!=(p+20))
				pmin = p + 5 * i + j;
	t = *(p + 24);
	*(p + 24) = *pmin;
	*pmin = t;
}

int main()
{
	int a[5][5], * p = &a[0][0], i, j;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf("%d", &a[i][j]);
	change(p);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}*/




/*#include <stdio.h>

float ave(float stu[4][5])
{
	float* p = &stu[0][0], sum = 0;
	int i;
	for (i = 0; i < 4; i++)
		sum += *(p + 5 * i);

	return(sum / 4);
}

float ave_stu(float stu[4][5],int i)
{
	int j;
	float sum = 0;
	for (j = 0; j < 5; j++)
		sum += stu[i][j];

	return(sum / 5);
}

void fail(float stu[4][5])
{
	int i, j, k = 0;
	float* p = stu[0];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			if (stu[i][j] < 60)
			{
				k++;
				p = &stu[i][0];
			}
		if (k >= 2)
			printf("%d,%7.2f,%7.2f,%7.2f,%7.2f,%7.2f,%7.2f\n", i + 1, *p, *(p + 1), *(p + 2), *(p + 3), *(p + 4), ave_stu(stu, i));
		k = 0;
	}
}

int lesson(float stu[4][5],int i)
{
	int j;
	for (j = 0; j < 5; j++)
		if (stu[i][j] < 85)
			break;

	if (j == 5)return 1;
	else return 0;
}

void find(float stu[4][5])
{
	int i;
	for (i = 0; i < 4; i++)
		if ((ave_stu(stu, i) >= 90) || (lesson(stu, i)))
			printf("%d ", i + 1);
}

int main()
{
	float stu[4][5];
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
			scanf("%f", &stu[i][j]);
	printf("%f\n", ave(stu));
	fail(stu);
	find(stu);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

void sort(char** p)
{
	int i, j;
	char* t = *p;
	for(i=0;i<5;i++)
		for (j = i+1; j < 5; j++)
			if (strcmp(*(p+i), *(p + j)) > 0)
			{
				t = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = t;
			}
}

int main()
{
	int n = 0, i;
	char str[5][20], * pstr[5], ** p;
	for (i = 0; i < 5; i++)
	{
		pstr[i] = str[i];
		gets_s(str[i]);
	}
	p = pstr;
	sort(p);
	for (i = 0; i < 5; i++)
		puts(pstr[i]);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void sort(char** p,int n)
{
	char* t = *p;
	int i, j;
	for (i = 0; i < n-1; i++)
		for(j=0;j<n-1-i;j++)                                  //ð�ݷ����ַ���������
			if (strcmp(*(p + j), *(p + j+1))>0)
			{
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
}

int main()
{
	char str[5][20], * pstr[5], ** p = pstr;                 //������һ��ָ������pstr,һ��ָ��ָ�������ָ��p
	int n = 0, i;
	scanf_s("%d", &n);
	getchar();                                               //��������5�������˻س���Ҫ������һ���ַ����뺯����������س�
	for (i = 0; i < n; i++)                                  //��������س��ͻ�ռ��һ�������λ��
	{
		gets_s(str[i]);
		pstr[i] = str[i];                                    //����ָ�����飬����ͨ����һ����Ҫһ��һ�����ϳ�ֵ
	}
	sort(p,n);
	for (i = 0; i < n; i++)
		puts(pstr[i]);

	return 0;
}*/




/*#include <stdio.h>
#include <math.h>

float fsin(float x)
{
	return sin(x);
}

float fcos(float x)
{
	return cos(x);
}

float fexp(float x)
{
	return exp(x);                                                            //����ͷ�ļ������Ѿ�д�õ���ѧ����
}
float integral(float(*p)(float), float a, float b, int n)
{
	int i;
	float x, h, s;
	h = (b - a) / n;
	x = a;
	s = 0;
	for (i = 1; i <= n; i++)
	{
		x = x + h;
		s = s + (*p)(x) * h;                                                 //ͨ��ָ��p,���ò�ͬ�ĺ���
	}

	return s;
}

int main()
{
	float a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0, (*p)(float);       //����pΪָ������ָ�룬�����ڵ�floatΪָ�������β����ͣ�ȥ�������Ƿ���ָ��ֵ�ĺ���
	int n = 20;
	scanf("%f,%f,%f,%f,%f,%f", &a1, &b1, &a2, &b2, &a3, &b3);
	p = fsin;
	printf("%f", integral(p, a1, b1, n));
	p = fcos;
	printf("%f", integral(p, a2, b2, n));
	p = fexp;
	printf("%f", integral(p, a3, b3, n));

	return 0;
}*/




/*#include <stdio.h>

int main()                                                                //ѧ������Ҳ���Ƿ�Ҫ�ú�����һ�����������ǿ��Խ����
{
	char str[30] = { 0 }, a[10][10] = { 0 };                               //����a��΢����һ���ֹ����Խ�������˻�����
	int i, j, m = 0, n = 0, flag = 0;
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++)
		if ('0' <= str[i] && str[i] <= '9')
		{
			a[m][n] = str[i];
			n++;
			flag = 0;                                                     //�������������Ľ�������⣡
		}
		else if (flag == 0)                                               //����м�ֻ��һ���������ֵ��ַ���Ȼ�ǿ��Ե�(û��flag��Ϊ��ǣ�
		{
			n = 0;
			m++;
			flag = 1;
		}
		else if (flag == 1)
			continue;

	for (i = 0; i <= m; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (a[i][j] == 0)
				continue;
			else printf("%c", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char str[30] = { 0 }, a[10][10] = { 0 }, * p = str;           //�µ����鿪��Ҳ���ַ���������������������Ҫascii��ת��
	int i, j, m = 0, n = 0, flag = 0;
	gets_s(str);
	for (i = 0; *(p+i) != '\0'; i++)
		if ('0' <= *(p+i) && *(p+i) <= '9')
		{
			a[m][n] = *(p + i);
			n++;
			flag = 0;                                                    
		}
		else if (flag == 0)                                             
		{
			n = 0;
			m++;
			flag = 1;
		}
		else if (flag == 1)
			continue;

	for (i = 0; i <= m; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (a[i][j] == 0)
				continue;
			else printf("%c", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/




/*#include <stdio.h>

int strcmp(char* p1, char* p2)
{
	int i;
	for(i=0;*(p1+i)!='\0'&&*(p2+i)!='\0'; i++)
		if (*(p1 + i) > *(p2 + i))
		{
			return *(p1 + i) - *(p2 + i);
			break;
		}
		else if (*(p1 + i) < *(p2 + i))
		{
			return *(p1 + i) - *(p2 + i);
			break;
		}
	if (*(p1 + i) == *(p2 + i))
		return 0;
}

int main()
{
	char str1[10], str2[10], * p1 = str1, * p2 = str2;
	gets_s(str1);
	gets_s(str2);
	printf("%d", strcmp(p1, p2));

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	char str[12][10] = { "January","February","March","April","May","June","July","August","September","October","November","December" }, * p[12];
	int n = 0, i;
	scanf("%d", &n);
	for (i = 0; i < 12; i++)
		p[i] = str[i];
	for (i = 0; i < 12; i++)
	{
		if (n == i + 1)
			printf("%s", *(p + i));
	}

	return 0;
}*/




/*#include <stdio.h>
#define NEWSIZE 1000
char newbuf[NEWSIZE];
char* newp = newbuf;                                    //�������ָ��һ��ʼָ���ַ�����Ŀ�ͷ���׵�ַ��������ַ������Ǿ޴��һ���洢����ϣ�������洢���ַ����ݽ���������з���

char* new(int n)                                        //����ָ��ĺ�����n�Ƕ��ٸ��ַ�
{
	if (newp + n <= newbuf + NEWSIZE)
	{
		newp += n;
		return (newp - n);                              //���ص����ַ�����ʼ�Ŀռ��ַ
	}
	else
		return NULL;
}

void free(char* p)
{
	if (p >= newbuf && p < newbuf + NEWSIZE)           //ȷ�����ͷŵĶ�������ǰ���ٵ�����洢��֮��
		newp = p;                                      //ָ���ֻص��˿�ͷ�������ڡ��ͷš�
}*/




/*#include <stdio.h>

void bubble(int** p,int n)
{
	int i, j, * t = *p;
	for(i=0;i<n-1;i++)
		for (j = 0; j < n - 1 - i; j++)
			if (**(p + j) > **(p + j + 1))
			{
				t = *(p + j);                              //���ﲻ����ʵ�ʴ�ŵ����ֻ�����Ӧ���õ�ַ������ָ�������ָ����˶������������������˳�����
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
}

int main()
{
	int a[10], n = 0, i, * pa[10], ** p = pa;              //ָ��ָ���ָ��һ����ָ���������ʳ�����
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		pa[i] = &a[i];                                     //��Ȼָ������һ��Ҫ����������һ��һ��һ�����ϳ�ֵ������������
		scanf("%d", pa[i]);
	}
	bubble(p, n);
	for (i = 0; i < n; i++)
		printf("%d ", *pa[i]);

	return 0;
}*/