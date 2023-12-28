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
#define n 6                          //没有等于号和分号，因为数组里面不能是变量，所以不能用常变量，而使用符号常量

int main()
{
	int a[n], i, t;
	for (i = 1; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i < n/2; i++)
	{
		t = a[i];
		a[i] = a[n - i];            //奇数个数据，以中间的数为中心，两边对称的数交换位置，“倒水”
		a[n - i] = t;
	}
	for (i = 1; i < n; i++)
		printf("%d\t", a[i]);

	return 0;
}*/


//在二维数组中找出一个特殊的点，该点满足如下条件：该点是所在行上的最大值且是所在列上的最小值；
// 若没有则输出：“无法找到满足条件的点”。（二维数组至少3 * 3，手动输入数组内容，最后输出该点在数组中的位置下标以及此点的值


/*#include <stdio.h>
#define n 3                                                     //没有分号

int main()
{
	int a[n][n], i, j, max = 0, maxj = 0, flag = 0, t = 0;      //用flag作标记
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
				max = a[i][j];                                 //只用比大小然后赋值就可以不用调换位置
				maxj = j;                                      //先满足一个行中最大的条件
				flag = 1;
			}
		}
		for (t = 0; t < n; t++)
		{                                                      //再在这一列比较最小,因为i已经用过了所以用t来表示第二层的行数
			if (a[t][maxj] < max) flag = 0; break;
		}
		if (flag == 1) printf("%d", max); break;               //最后一层打破循环，再比较下一行最大的，同一列最小的
	}
	
	if(flag==0) printf("无法找到满足条件的点");

	return 0;

}*/



//利用数组从键盘输入一个长度为10的字符串，将字符串中的字母大小写互换，并去掉字符串中不是字母的字符。
// 例如：输入abcd012EFG, 则输出ABCDefg。请使用gets()函数输入字符串。
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



//通过键盘键入的方式对二维数组a[4][3]进行初始化，输入k的值，找出第k个位置的数并输出其下标，其中 k >= 0 && k <= 12。
// 要求：算法要有一定的健壮性，输入错误数据也可以重新继续运行。（数组位置计算为行优先，例如a[0][0]为第1个位置，a[1][0]为第4个位置）

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
				t++;                                                      //按顺序排好序号，让序号和输入的k值对应
				if (k == t)printf("%d,i=%d,j=%d", a[i][j], i, j);
			}
	}
	else
	{
		scanf("%d", &k);
		for (i = 0; i < 4; i++)
			for (j = 0; j < 3; j++)
			{
				t++;                                                      //按顺序排好序号，让序号和输入的k值对应
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
	char c[3][80];                                                  //定义的是字符数组，就算列数定义的很大也没关系
	int i, j, big = 0, small = 0, num = 0, blank = 0, other = 0;
	for (i = 0; i < 3; i++)
	{
		gets_s(c[i]);                                              //使用gets_s函数输入一串字符串，包含数字，加上头文件，对二维数组，一次输入一行
		for (j = 0; j < 80 && c[i][j] != '\0'; j++)                //对一行的数排序成列，除掉最后一个'\0'结束标志，字符串最后自动加上结束标志
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
	gets_s(m);                                          //括号内是字符数组的数组名，地址
	for (i = 0; m[i] != '\0'; i++)
	{
		if (('A' <= m[i]) && (m[i] <= 'Z'))
			y[i] = 155 - m[i];
		else if (('a' <= m[i]) && (m[i] <= 'z'))
			y[i] = 219 - m[i];
		else y[i] = m[i];

		printf("%c", y[i]);                             //输出字符数组用%c,不是%d
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

	puts(y);                                             //输出字符串，即字符数组用puts函数也可以，Puts函数不用头文件

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

		putchar(y[i]);                                    //Putchar输出单个字符可以，也可以输出字符串（字符数组）
	}

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char str1[20] = { "Hello " }, str2[10] = { "world!" };   //被连接的数组要足够大才能容纳下被连接过来的数组
	int i=0, j=0;
	while (str1[i] != '\0')
		i++;

	while (str2[j] != '\0')
	{
		str1[i++] = str2[j];
		j++;
	}
	printf("%s", str1);                                      //第四种方法输出字符串，用printf函数和%s输出字符串

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
		min = i;                                //一开始让比较开始当前处位置下标的数最小，与后面的数比较
		for (j = i + 1; j <= 10; j++)           //i后面的数开始和i比较大小
			if (a[min] > a[j])
				min = j;                        //巧妙地把比较小的数的下标赋给min,让min继续参与后续的比较
		if (min != i)                           //加上换位置的前提条件：min已经不和i相等
		{
			t = a[min];
			a[min] = a[i];
			a[i] = t;                           //把最小的数换到当前位置
		}
	}

	for (i = 1; i <= 10; i++)
		printf("%5d", a[i]);                    //实现从小到大输出

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
		if (a[i] > num)                           //只要num比数小，就进入循环：开始按以排好的从小到大的顺序比较数和num的大小，直到遇到一个数比num大
		{
			for (j = 10; j >= i + 1; j--)
			{
				a[j] = a[j - 1];
			}
			a[i] = num;
			break;                               //注意break的位置，放在if的括号里面，不然直接结束循环
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
			if (c[i][j] == '\0')                                 //停止处符号不是\n而是\0
				break;                                           //记得设置停止循环的条件
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
		if (max == a[i][0])                           //如果第一个数就是这一行的最大值
			row = 0;
		min = max;                                    //干脆就让找出来的这一行的最大数值是同一列的最小值，再进行列的比较
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
		if (max == a[i][0])                          //该程序只针对有鞍点的矩阵
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
	else printf("no 鞍点！");

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
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);                   //学过数组的空格输入法后别忘了scanf函数的逗号输入
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
	int n = 5;                        //定义的变量尽量不要和函数名重合，不然会报错
	printf("%d", age(5));

	return 0;
}*/




/*#include <stdio.h>

int jc(int n)
{
	int result = 0;
	if (n > 1)
		result = n * jc(n-1);               //当前这个数×前面一个数的阶乘
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

void hanoi(int n, int one, int two, int three)             //无返回值函数必须定义类型为void
{
	if (n == 1)
		move(one, three);
	else                                                   //如果不止一个塔
	{
		hanoi(n - 1, one, three, two);                     //拆分n-1个塔的步骤
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
	int a[10], i, big = 0;           //输出的最大值不能和函数的名字相同！！！
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	big = a[0];
	for (i = 1; i < 10; i++)
		big = max(big, a[i]);
	for (i = 0; i < 10; i++)
		if (big == a[i])
		{
			i = i + 1;               //输出第几个数要下表加1
			break;
		}
	printf("%d,%d", big, i);

	return 0;
}*/


/*输入两个”有序”的数字数组，用函数将其拼接成一个有序的数组，并输出

测试样例：

输入：0, 1, 3, 3, 4

2, 3, 4, 6, 8

输出：0, 1, 2, 3, 3, 3, 4, 4, 6, 8*/

/*#include <stdio.h>

void fun(int a[], int b[])                  //无返回值类型定义为void
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
				min = j;                    //选择法比较大小用下标比较，因为无序的数组可能存在相同的数字，但是下标一定不相同
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




/*编写递归函数int fib(int n)求Fabonacci数列.
Fabonacci数列的定义为：
f(n) = f(n - 2) + f(n - 1)  (n >= 2)   其中 f(1) = 1，f(2) = 1。
测试样例
输入：10
输出：55*/

/*#include <stdio.h>

int fabonacci(int n)
{
	int f = 0;
	if (n == 1 || n == 2)
		f = 1;
	else f = fabonacci(n - 1) + fabonacci(n - 2);   //函数不可以在赋值表达式的左边，只能另外定义一个变量存放这个值

	return f;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", fabonacci(n));

	return 0;
}*/



/*编写一个”递归函数”，将输入的正整数逐位相加，直到最后相加的结果为个位数。、

38 à3 + 8 à11, 11 à1 + 1 à2

测试样例

输入：38

输出：2*/


/*#include <stdio.h>

int sum(int n)
{
	int s = 0, b = 0;
	s = n / 10;
	b = n % 10;
	if ((s + b) >= 10)
		sum(s + b);
	else return (s + b);           //若if条件不成立，返回这个值，否则继续递归，用else
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", sum(n));

	return 0;

}*/



/*#include <stdio.h>


float ave(float array[])            //可以不用指定形参数组的大小
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
void chose(int a[])                    //数组名定义为形参，方便做排序算法，直接改变实参数组的元素顺序
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
	int r = 0, t = 0;                     //求最大公约数和最小公倍数的算法：先用辗转相除法求最大公约数，两个数的乘积除以最大公约数即为最小公倍数
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
	
	return (v);                            //返回值是v不是r，应为v已经被赋上了r，而且可以计算更普适的数据

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

void swap(int a[3][3])                     //如果只能用一个数组换，不能直接行列转换，否则会出现数据的重复
{
	int i, j, t = 0;
	for (i = 0; i < 3; i++)
		for (j = i+1; j < 3; j++)          //不是所有的数都要换位置，找到对角线对称的位置换就可以
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
	for (i = 0; i < n/2; i++)       //注意循环终止的位置，只要字符串数组的前半段和后半段互换就可以，互换用倒水法
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
	n = strlen(str);                //用strlen函数计算字符串数组的长度
	trans(str, n);
	puts(str);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

void connect(char str1[], char str2[])     //定义数组形参时数组名后面一定要加上数组的中括号
{
	int i = 0, j = 0;
	j = strlen(str1);
	while (str2[i] != '\0')
	{
		str1[j + i] = str2[i];
		i++;
	}
	if (str2[i] == '\0')                   //结束输出数组str1的标志
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
	for (i = 0; i < strlen(str1); i++)                   //可以在这里直接使用strlen函数，不用多定义一个字母n来表示字符串数组的长度
	{
		if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')    //大写的元音字母也要加上
		{
			str2[j] = str1[i];
			j++;
		}
	}
	str2[j] = '\0';                                                 //不要忘记输出的字符串的终止符号，不然会输出一堆乱码和烫烫烫
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
int Letter = 0, Num = 0, Blank = 0, Other = 0;      //为了使用一个函数输出四个值，使用全局变量，在一开始函数的外面定义，定义的方法相同

void count(char str[])
{
	int i;
	for (i = 0; i < strlen(str); i++)
	{
		if (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z'))
			Letter++;
		else if ('0' <= str[i] && str[i] <= '9')
			Num++;
		else if (str[i] == ' ')                                  //注意双等号
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
			if (flag)                                 //flag为1时，单词开始，记录首字母的初始位置
			{
				point = i;
				flag = 0;                             //使在不遇到空格的情况下单词长度加加
			}
			else                                      //单词继续
				len++;
		}
		else                                          //遇到空格，单词结束
		{
			flag = 1;                                 //重置标记物flag
			if (len >= length)
			{
				length = len;
				place = point;
				len = 1;                              //重置单词的长度，方便下一个单词继续循环使用
			}
		}
	return (place);                                   //找到最长的字母开头的起始位置
}

int main()
{
	char str[100];
	int i = 0;
	gets_s(str);
	for (i = longest(str); alpha(str[i]); i++)        //直接用1或0判断循环的终止情况
		printf("%c", str[i]);                         //输出一个字符用%c

	return 0;
}*/




/*#include <stdio.h>

void bubble(int a[])
{
	int i, j, t = 0;
	for(i=0;i<9;i++)                          //整体换几次：N-1次
	    for (j = i + 1; j < 10; j++)          //一次里面换几次：N-i次
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
		scanf("%d", &a[i]);                   //数字冒泡法
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
	char str[20];                          //字符数组开大点，用冒泡法排序字符数组
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
	while (fabs(x - x0) > 1e-3)                                                                        //注意循环结束的条件
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
		y = (2 * n - 1) * x * p((n - 1), x) - (n - 1) * p((n - 2), x) / n;        //递归调用函数就是函数里面套着函数

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
	int top = 0, bott = 9, mid = 0, loca = 0, sign = 1;          //loca是位置，sign是标记。top在前，bott在后
	if ((num < label[0]) || (num > label[9]))                    //loca为-1.表示没找到，没有这个序号
		loca = -1;
	while ((sign == 1) && (top < bott))
	{
		mid = (bott + top) / 2;
		if (num == label[mid])                                   //刚好是中间的那个，直接结束循环
		{
			loca = mid;
			printf("%d,%s", num, label[loca]);
			sign = -1;
		}
		else if (num < label[mid])                               //在前半边
			bott = mid - 1;
		else top = mid + 1;
	}
	if (sign == 1 || loca == -1)                                 //两种情况，一开始就超出范围或循环没找到
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
	void prime(int num);                              //函数声明与函数原型基本相同
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
	char c[11];                                 //数组长度加1,因为字符串长度要加上终止符号
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
	if ((i = num / 10) != 0)       //算出位数
		trans(i);
	putchar(num % 10 + '0');       //这里的num是函数中定义的形参，在后续递归中带入的是i的值，用putchar把数字转换成字符
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
		else if (str[i] == 32)                                                          //双等于号！！！
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
  printf("%u",i);          //输出结果同下，只不过要求输出无符号数
  return 0; 
}*/



/*#include <stdio.h>
int main() 
{ unsigned char c=-1; 
  short i=c;               //unsigned转换为signed,数据直接复制到低位，高位补0
  printf("%d",i);          //0000 0000 1111 1111，输出的是有符号数
  return 0; 
} */


/*#include <stdio.h>
int main() 
{ char c=-1;              
  unsigned short i=c;     //signed转换为unsigned，数据直接复制到低位，高位为符号位，一个字节的char到两个字节的short int,位数扩展，
  printf("%d",i);         //1111 1111 1111 1111   因为是无符号十进制整型数据所以输出的时候直接算出来，不用考虑符号，尽管%d输出的是有符号的十进制整型数据
  return 0; 
}*/



/*用指针实现删除字符串中出现的所有指定字符。（字符串和指定字符均由键盘输入）
输入：
ahuabcdefgff
a
输出：
hubcdefgff*/

/*#include <stdio.h>

int main()
{
	char str[20], c = 0;
	char* p = str;                       //定义一个指向数组的指针
	int i = 0;
	gets_s(str);
	scanf("%c", &c);
	for (p = str; (*p) != '\0'; p++)     //双循环，指针p和数组元素个数i
	    if (*p == c)
		{
			p = p + 1;
			str[i] = *p;                 //由于已经把指针往后面移一位了，直接用指针p就可以
			i++;
		}
		else 
		{
			str[i] = *p;
			i++;
		}
	str[i] = '\0';                       //最后重置最后一位的数组元素，否则输出结果错误
	printf("%s", str);

	return 0;

}*/



//利用指针编写程序实现三维方阵的转置。

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
	};                                  //三维方阵的表示，初始化
	int b[3][2][2], i, j, k;
	int* p;                             //定义一个普通的指针，通过移动位置来改变指向
	for (i = 0; i<3; i++)               //思路是一三维置换，第二位不变
	{
		p = &a[0][0][i];
		for (j = 0; j < 2; j++)
		{
			p = &a[i][j][0];
			for (k = 0; k<2; k++)
			{
				p = &a[k][j][i];        
				b[i][j][k] = *p;        //原方阵移动到下一排，新方阵移动到下一列
			}
		}
	}
	for (i = 0; i < 3; i++)             //三维方阵的输出，格式与二维数组差不多
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




/*编写一个swap（......）函数，输入一个字符串通过调用该函数实现下面的功能：

当字符串长度为奇数时最中间的字符不动，左右半边平移互换位置如：

输入abcdefg则输出efgdabc；当字符串长度为偶数时，左右半边直接平移互换位置如：输入abcdefgh则输出efghabcd。*/


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

void swap(int* p1, int* p2)                  //指针作为函数形参和实参
{
	int t = 0;
	t = *p1;
	*p1 = *p2;
	*p2 = t;                                 //无论是作为函数形参还是实参，指针的指向一直不变，变的是指向对象的内容，其实取内容之后就是a与b互换
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
	printf("%d,%d,%d", *p1, *p2, *p3);       //输出指针用取内容符

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
	int* p1 = &a, * p2 = &b, * p3 = &c;       //对一个普通的指针变量初始化，要加上地址符号
	scanf("%d,%d,%d", p1, p2, p3);
	row(p1, p2, p3); 
	printf("%d,%d,%d", *p1, *p2, *p3);        //不改变a,b,c的值，只是改变了不同指针对应的指向

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

void swap(char* p1, char* p2)
{
	char p[50];
	strcpy(p, p1);                                       //p1,p2,是指向字符串数组的指针，交换位置用字符串复制函数，新定义另一个字符串作为中间商
	strcpy(p1, p2);                                      //数组也不能互相赋值
	strcpy(p2, p)； //改变的是指针所指变量的值，交换了内容，指针的值不变，虽然是单向的值传递，但是传递的是地址，已经在地址里面把两个数组的位置交换过了
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
	char* p1 = str1, * p2 = str2, * p3 = str3;          //数组名是数组首地址，指针也是首地址，两者开始等价
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
	p1 = p2;                               //不可能通过执行调用函数来改变实参指针变量的值，但可以改变实参指针所指变量的值
	p2 = t;                                //错误！不能通过改变函数指针形参的值来改变指针实参的值，程序一执行完内存就释放了，只是单向的值传递
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
	if (max == p) max = min;                         //如果第一个数就是最大数的特殊情况
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
		*(p+i) = i + 1;                      //每一个人从1开始编号
	i = 0;                                   //经过循环之后要重置i,否则i已经跑到后面去了
	while (m < n - 1)
	{
		if (*(p + i) != 0)k++;               //开始报数（从第二轮开始，跳过已经置0的人）
		if (k == 3)
		{
			*(p + i) = 0;                    //报到3，当前数置0，最后所有报到3的人的数都置0了
			k = 0;                           //从头开始报数
			m++;                             //退出的人数加1
		}
		i++;                                 //人数加1
		if (i == n)                          //第一轮所有人都报过数了
			i = 0;
	}
	while (*p == 0)p++;                      //游戏结束，开始检查最后一个人（唯一没有被置0)
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
	for(i=0;i<5;i++)                               //按顺序一个一个换，如果全放在一个for循环里面就不是有顺序地换
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
	char(*p)[6];                                     //使用指向含有6个元素的一维数组的指针，一次换一行,不是指针数组
	char t[6];
	int i, j;
	p = str;                                         //初始化
	for(i=0;i<9;i++)                                 //冒泡法：10个一维数组，比较9次
		for (j = 0; j < 9 - i; j++)                  //每一次再比较9-i次
			if(strcmp(p[j],p[j+1])>0)                //字符数组的比较用strcmp
		    {                                        //数组之间互换用strcpy函数！！！
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
		for (j = 0; j < 9 - i; j++)                       //冒泡法
			if (strcmp(*(p + j), *(p + j + 1)) > 0)
			{
				t = *(p + j);                             //交换指针数组存放的地址，定义的t就是指针，也是存放地址的
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
}

int main()
{
	char str[10][10], * p[10];                            //使用指针数组，一定要一个一个赋初值，用下面的循环
	int i;
	for (i = 0; i < 10; i++)
	{
		p[i] = str[i];
		gets_s(str[i]);
	}
	sort(p);
	for (i = 0; i < 10; i++)
		puts(p[i]);                                       //最后输出指针数组而不是字符串数组因为字符串数组没变而是指针数组存放的地址顺序变了

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
	int* p1, * p2, * p3;                          //每一个指针前面都要加星号
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
	char p[40];                                   //用数组来进行中间商而不是指向字符串的指针(这样就不用strcpy)，而且指针使用一定要先初始化，乱指非常危险
	strcpy(p, p1);                                //用字符串复制函数进行互换
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
		for (j = i; j < 3; j++)                                   //这里是j=i,不是j=0,否则又换回来了
		{
			t = *(p + 3 * i + j);                                 //这样用行和列表示数组中所有的数
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
	pmin = p + 1;                                                                         //排除左上角这个最小的元素
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (*(p + 5 * i + j) < *pmin && (p + 5 * i + j) != p)                         //排除左上角这个最小的元素
				pmin = p + 5 * i + j;
	t = *(p+4);
	*(p+4) = *pmin;
	*pmin = t;
	pmin = p + 1;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			if (*(p + 5 * i + j) < *pmin && (p + 5 * i + j) != p&&(p+5*i+j)!=(p+4))      //排除所有已经放好位置的最小数
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
		for(j=0;j<n-1-i;j++)                                  //冒泡法对字符数组排序
			if (strcmp(*(p + j), *(p + j+1))>0)
			{
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
}

int main()
{
	char str[5][20], * pstr[5], ** p = pstr;                 //定义了一个指针数组pstr,一个指向指针数组的指针p
	int n = 0, i;
	scanf_s("%d", &n);
	getchar();                                               //由于输入5后输入了回车，要单独用一个字符输入函数接受这个回车
	for (i = 0; i < n; i++)                                  //否则这个回车就会占据一个数组的位置
	{
		gets_s(str[i]);
		pstr[i] = str[i];                                    //对于指针数组，和普通数组一样，要一个一个赋上初值
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
	return exp(x);                                                            //调用头文件里面已经写好的数学函数
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
		s = s + (*p)(x) * h;                                                 //通过指针p,调用不同的函数
	}

	return s;
}

int main()
{
	float a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0, (*p)(float);       //定义p为指向函数的指针，括号内的float为指向函数的形参类型，去掉括号是返回指针值的函数
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

int main()                                                                //学到现在也不是非要用函数，一个主函数还是可以解决的
{
	char str[30] = { 0 }, a[10][10] = { 0 };                               //数组a稍微开大一点防止数组越界烫死了还报错
	int i, j, m = 0, n = 0, flag = 0;
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++)
		if ('0' <= str[i] && str[i] <= '9')
		{
			a[m][n] = str[i];
			n++;
			flag = 0;                                                     //聪明才智完美的解决了问题！
		}
		else if (flag == 0)                                               //如果中间只有一个不是数字的字符当然是可以的(没有flag作为标记）
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
	char str[30] = { 0 }, a[10][10] = { 0 }, * p = str;           //新的数组开的也是字符数组而不是整型数组否则还要ascii码转换
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
char* newp = newbuf;                                    //定义这个指针一开始指向字符数组的开头（首地址），这个字符数组是巨大的一个存储区，希望连续存储的字符数据将在这里进行分配

char* new(int n)                                        //返回指针的函数，n是多少个字符
{
	if (newp + n <= newbuf + NEWSIZE)
	{
		newp += n;
		return (newp - n);                              //返回的是字符串开始的空间地址
	}
	else
		return NULL;
}

void free(char* p)
{
	if (p >= newbuf && p < newbuf + NEWSIZE)           //确保你释放的东西在先前开辟的这个存储区之内
		newp = p;                                      //指针又回到了开头，类似于“释放”
}*/




/*#include <stdio.h>

void bubble(int** p,int n)
{
	int i, j, * t = *p;
	for(i=0;i<n-1;i++)
		for (j = 0; j < n - 1 - i; j++)
			if (**(p + j) > **(p + j + 1))
			{
				t = *(p + j);                              //这里不能用实际存放的数字换而是应该用地址换，是指针数组的指向变了而不是整型数组的数字顺序变量
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
}

int main()
{
	int a[10], n = 0, i, * pa[10], ** p = pa;              //指向指针的指针一般与指针数组搭配食用最佳
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		pa[i] = &a[i];                                     //依然指针数组一定要和整型数组一起一个一个赋上初值！！！！！！
		scanf("%d", pa[i]);
	}
	bubble(p, n);
	for (i = 0; i < n; i++)
		printf("%d ", *pa[i]);

	return 0;
}*/