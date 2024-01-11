/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c;
	scanf_s("%d,%d", &a, &b);
	if (a > b)c=a;
	else c=b;
	printf("%d",c);

	return 0;
}*/

/*#include <stdio.h>
int main()

{
	int max, a=0, b = 0;                  //先定义变量a ,b ,max;
	scanf("%d,%d", &a, &b);               //再扫描输入的数据；
	max = a;                              //别忘了赋值，需要一个“式子”；
	if (max > b)printf("max=%d", max);
	else printf("max=%d", b);


	return 0;
}*/


/*#include <stdio.h>

int main()
{
	printf("*****\n");
	printf("  *****\n");
	printf("    *****\n");
	printf("      *****\n");

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0,max;       //max 也要进行声明定义
	scanf("%d,%d,%d", &a, &b, &c);
	if (c < a < b, a < c < b)max = b;
	if (c < b < a, b < c < a)max = a;
	else max = c;
	printf("max=%d", max);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a, b, c, max;
	scanf("%d,%d,%d", &a, &b,&c);     //do not forget to add & before letters! (to find the address)  and add all of the letters (varieties)need to be initialized here!
	if (a > b)max = a;
	else max = b;                     //first, compare a,b two letters,and use the bigger one to compare with c,which is a good and new mindset
	if (max < c)max = c;
	printf("max=%d", max);

}*/



/*#include <stdio.h>

int main()
{
	int price = 0;
	int change = 0;                  //变量可以都在最前方声明
	printf("please input price:");
	scanf("%d", &price);

	change = 100 - price;
	printf("the change is:%d",change);
	return 0;

}*/


/*#include <stdio.h>

int main()
{
	int price = 0;
	printf("please input price：");
	scanf("%d", &price);

	const int AMOUNT = 100;
	int change = 0;                                 //因变量和自变量都需要在使用前声明
	printf("change=%d",change=AMOUNT-price);        //同时输出表达式和数据在printf里

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int price = 0;
	printf("please input price:");
	scanf("%d", &price);

	int change = 0;
	const int AMOUNT = 100;
	printf("change=%d", AMOUNT - price);     //表达式在输出行里但是不需要再写出表达式的左半边（因变量)

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int price = 0;
	printf("please input price:");
	scanf("%d", &price);
	 
	const int AMOUNT = 100;          //可以定义一个常变量AMOUNT
	int change = AMOUNT - price;
	printf("the change is:%d", change);


	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int price = 0;
	printf("please input price:");
	scanf("%d", &price);

	int change = 0;
#define AMOUNT 100                                                //或者定义一个符号常量AMOUNT，注意没有等号=和句末分号；
	printf("change=AMOUNT-price=%d", change = AMOUNT - price);

	return 0;
}*/





/*#include <stdio.h>

int main()
{
	int price = 0;
	printf("please input prince:");
	scanf("%d", &price);

	int change = 100 - price;        //变量也可以在后面再声明，并且可以加上表达式
	printf("the change is:%d", change);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	unsigned char c = 200;            //不同的数据类型可容纳的数字大小不同
	printf("%d,%c", c,c);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	float r = 0, p;                                                                                           //如果输入的字母的具体数字是小数，那么一开始定义的时候就要把int改为float或double
	printf("plaese input 年增长率r:");
	scanf("%f", &r);                                                                                          //同样printf里面格式符d也应该变成f以对应小数
	p = (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r);    //round1不清楚怎么表示n次方，结果在附录可以查到要用pow函数
	printf("%f", p);


	return 0;
}*/


/*#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;                              //年数n就算不是小数也可以用float
	float r = 0, p;
	printf("请输入年增长率r和年数n；");
	scanf("%f,%d", &r, &n);
	p = pow(1 + r, n);                     //pow函数应该这样用，因变量在等号左边，等号右边是pow()前面是底数后面是多少次方
	printf("与现在相比的倍数p=%f", p);

	return 0;
}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	const int M = 1000;
	float r = 0, n = 0, P;
	printf("请输入年利率r和年数n:");
	scanf("%f,%f", &r, &n);
	P = M * pow(1 + r / 4, 4*n);           //熟悉一下本息和的公式，以及依然是运用pow函数
	printf("最终本息和是：P=%f", P);


	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

int main()
{
	double d=0,p=0,r = 0,m;
	printf("请输入贷款数目d,每月还款额p和月利率r:");
	scanf("%lf,%lf,%lf", &d, &p, &r);
	m = (log(p) - log(p - d * r)) / log(1 + r);               //log默认是以e为底，log10才是以10为底，可以适当变换公式
	printf("%6.2f个月能还清", m);                             //为了保留小数点后几位在格式符前面加上需求

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int c1, c2;
	c1 = 97;                              //定义在char下面的数据，输入数字的范围要注意，0~127
	c2 = 98;
	printf("c1=%c,c2=%c\n", c1, c2);
	printf("c1=%d,c2=%d\n", c1, c2);

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	char c1='C', c2 ='h', c3 ='i', c4 ='n', c5 ='a';
	putchar(c1 + 4);
	putchar(c2 + 4);
	putchar(c3 + 4);                             //putchar输出字符的使用
	putchar(c4 + 4);
	putchar(c5 + 4);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char c1, c2, c3, c4, c5;                    //确实可以不给变量赋初值
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = getchar();
	c5 = getchar();                             //getchar输入字符的使用

	putchar(c1 + 4);
	putchar(c2 + 4);
	putchar(c3 + 4); 
	putchar(c4 + 4);
	putchar(c5 + 4);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	float r = 0, h = 0,C,S,surface,B,V;
	const float PI = 3.14;
	scanf("%f,%f", &r, &h);
	printf("圆周长是C=%6.2f\n", C=2 * PI * r);
	printf("圆面积是S=%6.2f\n", S = PI * r * r);
	printf("圆球表面积是surface=%6.2f\n", surface = 4 * PI * r * r);
	printf("圆球体积是B=%6.2f\n", B = 4.0 / 3.0 * PI * r * r * r);        
	printf("圆柱体积是V=%6.2f\n", V = S*h);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char c1 = 0, c2 = 0;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);                           //putchar和getchar函数都只能调用一个变量，不能同时输入或输出两个变量
	putchar(c2);

	return 0;

}*/



/*#include <stdio.h>

int main()
{                 
	//char c1=0,c2=0;                      如果putchar和getchar在一行，简单的程序可以不用定义变量
	putchar(getchar());                  
	putchar(getchar());

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char c1 = 0, c2 = 0;
	c1 = getchar();                    //输入是getchar 输出是putchar
	c2 = getchar();
	printf("%d,%d", c1,c2);

	return 0;

}*/


/*#include <stdio.h>
#include <math.h>


int main()
{
	double a = 0, b = 0, c = 0, del = 0, x1 = 0, x2 = 0;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	del = b * b - 4 * a * c;                                                    //编写复杂的表达式时注意有没有括号，用计算机的逻辑来编写
	if (del >= 0)
		x1 = (-b - sqrt(del)) / (2.0 * a), x2 = (-b + sqrt(del)) / (2.0 * a),   //除法小心分母上的数字，整型除整型是整除，数字写小数形式
        printf("%lf,%lf", x1, x2);
	else printf("this formula dosen't have a root!");

	return 0;

}*/



/*#include <stdio.h>
#include <math.h>

int main()
{
	double a = 0, b = 0, c = 0, s = 0, y = 0;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)      
		s = (a + b + c) / 2.0,                         //特别小心除的时候避免整型除整型是整除的情况
		y = sqrt(s * (s - a) * (s - b) * (s - c)),
		printf("周长是%lf", y);
	else printf("该组数据构不成三角形!");

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, t = 0;
	scanf("%d,%d", &a, &b);
	if (a > b)
		t = a,
		a = b,
		b = t,
	printf("%d,%d", a, b);
	//else printf("%d,%d", a, b);        也可以不加else直接结束，两种情况共用一个输出函数

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, t = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a > b) t = a,
		       a = b,
		       b = t;                     //可以只有if没有else
	if (a > c) t = a,
			   a = c,
			   c = t;
	if (b > c) t = b,
			   b = c,
			   c = t;
	printf("%d,%d,%d", a, b, c);

	return 0;

}*/


/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0,t=0;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b)  t = a,
		a = b,
		b = t;
    if (a < c) t = a,
		a = c,
		c = t;
	if (b < c) t = b,
		b = c,
		c = t;
	printf("%d", a);

	return 0;

}*/


/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d,%d,%d", &a, &b, &c);

	if (a > b)
		if (a > c) printf("%d", a);
		else printf("%d",c);
	else if (b > c) printf("%d", b);
	     else printf("%d", c);

	return 0;

}*/



/*#include <stdio.h>


int main()
{
	int a = 0, b = 0, c = 0, middle = 0, max = 0;
	scanf("%d,%d,%d", &a, &b, &c);

	middle = (a > b) ? a : b;                        //把大的数赋给middle，middle再与c两两比较，使用？ ：语句
	max = (middle > c) ? middle : c;
	printf("%d", max);

	return 0;
}*/


/*#include <stdio.h>
#include <math.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num >= 1000) 
	{printf("please enter a new number:"),
	 scanf("%d", &num);
	 printf("%.0f", floor(sqrt(num)));
	}
	else printf("%.0f", floor(sqrt(num)));     //floor函数是取整函数

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int x = 0;
	scanf("%d", &x);
	if (x < 1) printf("%d", x);
	else if (1 <= x&&x < 10) printf("%d", 2*x - 1);
	else if (x >= 10) printf("%d", 3*x - 11);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int score = 0;
	scanf("%d", &score);
	switch (score/10)
	{
	case 10:
	case 9:printf("A"); break;       //记得加break打破，break前面是；分号
	case 8:printf("B"); break;
	case 7:printf("C"); break;
	case 6:printf("D"); break;
	default:printf("E");
	}

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int num = 0, tenthousand = 0, thousand = 0, hundred = 0, ten = 0, one = 0;
	scanf("%d", &num);
	tenthousand = num / 10000;
	thousand = (num - tenthousand * 10000) / 1000;                                        
	hundred = (num - tenthousand * 10000 - thousand * 1000) / 100;                          //表达式前面加了(int)进行强制类型转换，不加也可以
	ten = (num - tenthousand * 10000 - thousand * 1000 - hundred * 100) / 10;
	one = (num - tenthousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
	if (10000 <= num && num <= 99999) printf("5位数\n%d,%d,%d,%d,%d\n%d%d%d%d%d",tenthousand,thousand,hundred,ten,one,one,ten,hundred,thousand,tenthousand);
	else if (1000 <= num && num <= 9999) printf("4位数\n%d,%d,%d,%d\n%d%d%d%d",thousand,hundred,ten,one,one,ten,hundred,thousand);
	else if (100 <= num && num <= 999) printf("3位数\n%d,%d,%d\n&d%d%d",hundred,ten,one,one,ten,hundred);
	else if (10 <= num && num <= 99)printf("2位数\n%d,%d\n%d%d",ten,one,one,ten);
	else printf("1位数\n%d\n%d",num,num);

	return 0;


}*/



/*#include <stdio.h>

int main()
{
	int c1,c2;
	c1 = 97;
	c2 = 98;
	printf("%c,%c\n", c1, c2);
	printf("%d,%d\n", c1, c2);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int a, b;
	float x, y;
	char c1, c2;
	scanf("a=%d b=%d", &a, &b);
	scanf("%f %e", &x, &y);
	scanf("%c %c", &c1, &c2);
	printf("%d,%d,%f,%e,%c,%c", a, b, x, y, c1, c2);

	return 0;


}*/



/*#include <stdio.h>

int main()
{
	int i, j, m, n;
	i = 8;
	j = 10;
	m = i++;
	n = ++j;
	printf("%d,%d,%d,%d\n", i, j, m, n);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int i, j;
	i = 8;
	j = 10;
	printf("%d,%d,%d,%d\n",i,j,i++, j++);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int i, j, m = 0, n = 0;
	i = 8;
	j = 10;
	m += i++; n -= --j;
	printf("i=%d,j=%d,m=%d,n=%d\n", i, j, m, n);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int a, b;
	float d, e;
	char c1, c2;
	double f, g;
	long m, n;
	unsigned int p, q;
	a = 61; b = 62;
	c1 = 'a'; c2 = 'b';
	d = 3.56; e = -6.87;
	f = 3157.890121; g = 0.123456789;
	m = 50000; n = -60000;
	p = 32768; q = 40000;
	printf("a=%d,b=%d\nc1=%c,c2=%c\nd=%6.2f,e=%6.2f\n", a, b, c1, c2, d, e);
	printf("f=%15.6f,g=%15,12f\nm=%ld,n=%ld\np=%u,q=%u\n", f, g, m, n, p, q);
	printf("a=%d,b=%d,c1=%d,c2=%d,d=%d,e=%d\n", sizeof(a), sizeof(b), sizeof(c1), sizeof(c2), sizeof(d), sizeof(e));
	printf("f=%d,g=%d,m=%d,n=%d,p=%d,q=%d", sizeof(f), sizeof(g), sizeof(m), sizeof(n), sizeof(p), sizeof(q));
	return 0;

}*/




/*#include <stdio.h>
int main()
{
    double r = 1.5, h = 3, C = 0, S = 0, square = 0, V = 0, table = 0;
	const double PI = 3.1415;
	C = 2 * PI * r;
	S = PI * r * r;
	square = 4 * PI * r * r;
	V = 4 / 3 * PI * r * r * r;
	table = S * h;
	printf("圆周长是%.2f\n圆面积是%.2f\n圆球表面积是%.2f\n圆球体积是%.2f\n圆柱体积是%.2f", C, S, square, V, table);

	return 0;


}*/



/*#include <stdio.h>

int main()
{
	int I = 0;
	double bonus = 0;
	scanf("%d", &I);
	if (I <= 100000) bonus = I * 0.1;
	else if (100000 < I &&I<=200000) bonus = 100000 * 0.1 + (I - 100000) * 0.075;
	else if (200000 < I &&I<= 400000) bonus = 100000 * 0.1 + 100000 * 0.075 + (I - 200000) * 0.05;
	else if (400000 < I &&I<= 600000) bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (I - 400000) * 0.03;
	else if (600000 < I &&I<= 1000000) bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (I - 600000) * 0.015;
	else if (I > 1000000) bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000) * 0.01;
	printf("%f", bonus);

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int I = 0;
	double bonus = 0;
	scanf("%d", &I);
	switch (I/100000)
	{
	case 0:bonus = I * 0.1; break;
	case 1:bonus = 100000 * 0.1 + (I - 100000) * 0.075; break;
	case 2:
	case 3:bonus = 100000 * 0.1 + 100000 * 0.075 + (I-200000) * 0.05; break;
	case 4:
	case 5:bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (I - 200000) * 0.03; break;
	case 6:
	case 7:
	case 8:
	case 9:bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 20000 * 0.03 + (I - 600000) * 0.015; break;
	default:bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (I - 1000000) * 0.01; break;
	}
	printf("%f", bonus);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0,t=0;
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	if (a > b) t = b,
		b = a,
		a = t;
	if (a > c) t = a,
		a = c,
		c = t;
	if (a > d) t = a,
		a = d,
		d = t;                              //一直排排排把a排到最小的位置
	if (b > c) t = b,
		b = c,
		c = t;
	if (b > d) t = b,
		b = d,
		d = t;                              //再排排排把b排到第二小的位置
	if (c > d) t = c,
		c = d,
		d = t;                              //把c排到第三小的位置
	printf("%d,%d,%d,%d", a, b, c, d);      //不用换输出字母的顺序，只是把数字换了，不用分类讨论

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int O1,O2,O3,O4,h = 10,x=0,y=0;              //因为定义的是整型所以不能输入小数否则输出结果错误
	scanf("%d,%d", &x, &y);
	O1 = 1 <= x && x <= 3 && 1 <= y && y <= 3;
	O2 = -3 <= x && x <= -1 && 1 <= y && y <= 3;
	O3 = -3 <= x && x <= -1 && -3 <= y && y <= -1;
	O4 = 1 <= x && x <= 3 && -3 <= y && y <= -1;
	if (O1||O2||O3||O4) printf("h=10");
	else printf("h=0");

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int sum = 0, i = 0;
	while (i < 100)              //不能是<=
		i++,
		sum = sum + i;
	printf("%d", sum);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int sum = 0, i = 0;
	while (i <= 100)
		sum = sum + i,
		i++;
	printf("%d", sum);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int sum = 0, i = 0;
	do
		i++,
		sum = sum + i;
	while (i <= 99);

	printf("%d", sum);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int sum = 0, i = 0;
	do
		sum = sum + i,
		i++;
	while (i <= 100);
	printf("%d", sum);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int i = 0, sum = 0;
	for (; i <= 100; i++)
		sum = sum + i;
	printf("%d", sum);

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int i = 0, sum = 0;
	for (; i <100; sum = sum + i)     //不是<=
		i++;
	printf("%d", sum);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int profit = 0;
	double bonus = 0;
	scanf("%d", &profit);
	if (profit <= 100000) bonus = profit * 0.1;
	if (100000 < profit && profit <= 200000) bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
	if (200000 < profit && profit <= 400000) bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
	if (400000 < profit && profit <= 600000) bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
	if (600000 < profit && profit <= 1000000) bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
	if (1000000 < profit) bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
	printf("%f", bonus);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0,t=0;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b) t = a,
		a = b,
		b = t;
	if (a < c) t = a,
		a = c,
		c = t;
	if (b < c) t = b,
		b = c,
		c = t;
	printf("%d", a);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int s = 0, pay = 0, time = 0;
	scanf("%d,%d", &s, &time);
	if (s <= 3) pay = 8;
	if (3 < s && s <= 10) pay = 8 + (s - 3) * 2;
	if (10 < s) pay = 8 + 7 * 2 + (s - 10) * 3;
	if (time != 0) pay = pay + (time / 5) * 2;
	printf("%d", pay);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int sum = 0;
	char c = 0;
	for (; (c = getchar()) != '\n'; sum = sum + c);       //要在c=getchar()两边打上括号,否侧条件判定为真，c=1,结果为3(abc)
	printf("%d", sum);                                    //该程序输出输入的字符的ASCII码之和

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int num = 0, g = 0, s = 0, b = 0;
	scanf("%d", &num);
	g = num % 10;                                                              //知道个位数，十位数，百位数上的数字分别的算法
	s = num % 100 / 10;
	b = num / 100;
	if (num == g * g * g + s * s *s + b * b *b ) printf("是水仙花数");         //水仙花数是立方和,且注意是双等于号为等于，单等于号是赋值，不等于也等于了
	else printf("不是水仙花数");

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int num, g = 0, s = 0, b = 0;
	for (num = 100; 100 <= num && num <= 999; num++)
	{
		g = num % 10;
		s = num % 100 / 10; 
		b = num / 100;                                                       //三个表达式后面都是分号
		if (num == g * g * g + s * s * s + b * b * b) printf("%d\n", num);
	}

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int num , i, sum;
	for (num = 2; num <1000; num++)
	{
		sum = 0;
		for (i = 1; i <= num / 2; i++)
			if (num % i == 0) sum += i;

		if (num == sum) printf("%d\n", num);
	}
	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int num = 0, i,sum=0;
	scanf("%d", &num);
	for (i =1; i <= num / 2; i++)             //第一个因子是1，而不是0
		if (num % i == 0)sum += i;
	if (num == sum)printf("YES");
	else printf("NO");

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int m, i, s;
	for (m = 2; m < 1000; m++)
	{
		s = 0;                                //必须在这里对s初始化
		for (i = 1; i < m ; i++)
			if (m % i == 0)s=s+i;
		if (s == m)
		{
			printf("%d,its factors are:", m);
			for (i = 1; i <m ; i++)
				if(m%i==0)printf("%d ", i);
			printf("\n");
		}

	}
	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int x, y, z;
	for (x = 0; x <= 33; x++)                                     //初始化要从0开始，可以一只鸡都不买
		for (y = 0; y <= 50; y++)                                 //最大值是最多只买多少只鸡，减轻计算机计算量
			for (z = 0; z <= 100; z++)
				if (x * 3 + y *2+z*0.5==100&&x+y+z==100)printf("%d,%d,%d\n", x, y, z);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int x, y, z = 0;
	for (x = 0; x <= 33; x++)
		for (y = 0; y <= 50; y++)
			if (x * 5 + y * 3 == 100)printf("%d,%d,%d\n", x, y, z = 100 - x - y);      //改变if中的条件，使程序简洁

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)                  //i是行数
	{
		for (j = 1; j <= i; j++)              //j是列数,在一开始使行数<列数
			printf(" %d*%d=%d ", i, j, i * j);

		printf("\n");
	}
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int i, j,k;                                //k是每一行输出多少符号
	for (i = 1; i <= 5; i++)                   //i是行数
	{
		for (j = 1; j <= 5 - i; j++)           //j是每一行输出多少空格，与列数有关
			printf(" ");
		for (k = 1; k <= 2 * i - 1; k++)       //每一行输出多少符号和行数的关系
			printf("*");                       //符号后面的空格就就不用管了
		printf("\n");

	}
}*/




/*#include <stdio.h>

int main()
{
	int i, j, k, m;
	scanf("%d", &m);                           //m是总共有多少行
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= 50 - i; j++)          //总共有99列
			printf(" ");
		for (k = 1; k <= 2 * i - 1; k++)       //条件：2m-1<=列数，才可以完美输出图形
			printf("*");
		printf("\n");
	}

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int i, j, k;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 7 - i; j++)
			printf(" ");
		for (k = 1; k <= 2 * i - 1; k++)
			printf("*");

		printf("\n");
	}

	for (i = 5; i <= 7; i++)
	{
		for (j = 1; j <= 7 - (8-i); j++)
			printf(" ");
		for (k = 1; k <= 2 * (8 - i) - 1; k++)
			printf("*");

		printf("\n");
	}
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int num ;
	for (num = 100; num <= 200; num++)               //不是所有变量的初始值都是0，要看具体给定的范围，本题num应从100开始
	{
		if (num % 3 == 0)continue;
		else printf("%d ", num);
	}
	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 5; j++)
			printf("%4d\t", i * j);                   //别忘了加上\t水平制表符和控制格式的数字在百分号后面，格式符前面
		printf("\n");
	}
	return 0;
}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	float fz = 1.0, fm = 1.0, t, s = 1, i; 
	t = fz / fm;
	for (i = 2; ;i++)
	{
		fz = -fz;
		fm = 2 * i - 1;
		t = fz / fm;
		if (fabs(t) < 1e-6)break;
		else s += t;
	}
	printf("%10.6f\n", s * 4);
	printf("%f", i-1);                             //统计出循环了多少次
	return 0;
}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	float fz = 1, fm = 1, t, sum = 0;
	t = fz / fm;
	while (fabs(t) >= 1e-6)
	{
		sum += t;
		fz = -fz;
		fm = fm+2;
		t = fz / fm;
	}
	printf("%f", sum * 4);
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int F1 = 1, F2 = 1, F3,i;
	F3 = F1 + F2;
	printf("%d,%d,%d,", F1, F2, F3);          //分成了三个为一组，但是无法被四整除，下面程序改进
	for (i = 1; i <= 13; i++)
	{
		F1 = F2 + F3;
		F2 = F3 + F1;
		F3 = F1 + F2;
		printf("%d,%d,%d,", F1, F2, F3);
	}
	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int F1 = 1, F2 = 1,i;                    //分成两个为一组，且每输出四个数就换行
	for (i = 1; i <= 20; i++)
	{
		printf("%d,%d,", F1, F2);
		if (i % 2 == 0) printf("\n");
		F1 = F1 + F2;
		F2 = F2 + F1;
	}
	return 0;
}*/



/*#include<stdio.h>

int main()
{
	int a = 0, a0 = 0, n = 0, i, sum = 0;
	scanf("%d,%d", &a, &n);
	a0 = a;
	for (i = 1; i <= n; i++)
	{
		sum += a;
		a = a * 10 + a0;
	}
	printf("%d", sum);
	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int n = 0, i;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0) break;
	}
	if (i < n) printf("not prime!");
	else printf("yes prime!");

	return 0;
}*/




/*include <stdio.h>

int main()
{
	int n = 0, i;
	scanf("%d", &n);
	for (i = 2; i < n/2; i++)
	{
		if (n / 2 % i == 0)break;
	}
	if (i < n/2)printf("not prime!");
	else printf("yes prime!");

	return 0;
}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0, i,k=0;
	scanf("%d", &n);
	k = sqrt(n);
	for (i = 2; i <=k; i++)                 //除以根号次
	{
		if (n % i == 0)break;
	}
	if (i <= k)printf("not prime!");
	else printf("yes prime!");

	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

int main()
{
	int n=0, i, k = 0;
	for (n = 100; n <= 200; n++)
	{
		k = sqrt(n);                     //程序中每一行的位置很重要，程序不是想写到哪里就写到哪里，而是有顺序的，顺序错了，程序的结果就错了
		for (i = 2; i <= k; i++)
		{
			if (n % i == 0)break;
		}
		if (i > k)printf("%d ", n);
	}

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	char c = 0;
	for (;(c = getchar())!= '\n';)                                    //写长长的表达式的时候注意要不要加上括号，特别是在有不等号出现的时候，前面c=getchar是一个整体
	{
		if ('A' <= c && c <= 'V' || 'a' <= c && c <= 'v')c = c + 4;
		else if('W'<=c&&c<='Z'||'w'<=c&&c<='z') c = c - 22;
		putchar(c);
	}

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int m = 0, n = 0,i,j;
	scanf("%d,%d", &m, &n);
	if (m < n && n % m == 0) printf("最大公约数=%d,最小公倍数=%d",m,n);
	else {
		for (i = 2; i <= m; i++)
		{
			for (j = 2; j <= n; j++)
			{
				if (m % i == 0 && n % j == 0 && i == j) printf("最大公约数=%d，最小公倍数=%d", j, j * n);
				if (m % i == 0 && n % j == 0 && i == j) break;
			}
			if (m % i == 0 && n % j == 0 && i == j) break;                                                  //每一行程序的位置真的很重要
		}
		if (i > m && j > n )printf("最大公约数=1,最小公倍数=%d", m * n);
	}
	
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char c, letter = 0, blank = 0, num = 0, other = 0, all;
	for (all=1; (c = getchar()) != '\n';all++)                           //没错！注意当c=getchar()和不等号在一起的时候前者要加上括号
	{                                                                    //一开始all初始化是1不是0，写一写就知道
		if ('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z') letter++;
		else if (c == 32) blank++;
		else if ('0' <= c && c <= '9') num++;
		else other = all - letter - blank - num;
	}

	printf("%d,%d,%d,%d", letter, blank, num, other);

	return 0;

}*/





/*#include <stdio.h>

int main()
{
	char c, letter = 0, blank = 0, num = 0, other = 0;
	for (; (c = getchar()) != '\n';)
	{
		if ('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z') letter++;
		else if (c == 32) blank++;
		else if ('0' <= c && c <= '9') num++;
		else other++;                                                  //如果不是字母、空格或者数字的话直接就是other++，不用再算总的减去前面3个
	}

	printf("%d,%d,%d,%d", letter, blank, num, other);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int i;
	double j=1,sum=0;                  //使用double因为数据很大，double为8个字节，而long只有4个字节
	for (i = 1; i <= 20; i++)
	{
		j = j * i;
		sum += j;
	}

	printf("%22.15e", sum);            //用e格式符，以指数形式输出数据

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	double k, s1 = 0, s2 = 0, s3 = 0;            //用double而不是flaot，精度更高
	for (k = 1; k <= 100; k++)
	{
		s1 += k;
	}

	for (k = 1; k <= 50; k++)
	{
		s2 += k * k;
	}

	for (k = 1; k <= 10; k++)
	{
		s3 += 1 / k;
	}

	printf("%f", s1 + s2 + s3);

	return 0;

}*/




/*#include <stdio.h>
int main()
{
	double fz = 2, fm = 1, t,sum=0,i;          //下次可以直接用double而不用float，因为不清楚数据的长度
	t = fz / fm;
	for (i = 1; i <= 20; i++)
	{
		sum += t;
		fz = fz + fm;
		fm = fz - fm;
		t = fz / fm;
	}

	printf("%16.10f", sum);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	double h = 100, i, s = 0;
	s += h;
	for (i = 2; i <= 10; i++)           //第一次落地时经过100米，从第二次落地开始计算总共经过的路程，和反弹的高度
	{
		h= h / 2;
		s += h * 2;
	}

	printf("%f,%f", s, h/2);            //因此最后输出反弹高度要除以2，因为只循环到了第9次

	return 0;

}*/





/*#include <stdio.h>

int main()
{
	int i,n=1;
	for (i = 9; i >=1; i--)       //一共吃了9天，新思路：从减开始，从正面难以求解，从反面来求
	{
		n = (n + 1) * 2;
	}

	printf("%d", n);

	return 0;
}*/





/*#include <stdio.h>
#include <math.h>

int main()
{
	float x0 = 0, x1 = 0,i,a=0;               //应该用float而不是double,应该听警告的话
	scanf("%f", &a);
	x0 = a / 2;
	x1 = (x0 + a / x0) / 2;
	for (i = 1; fabs(x0 - x1)>= 1e-5; i++)
	{
		x0 = x1;
		x1 = (x0 + a / x0) / 2;
	}

	printf("%8.5f", x1);

	return 0;

}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	float x0 = 0, x1 = 0;
	scanf("%d", &x0);
	x1 = x0 - (2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6) / (6 * x0 * x0 - 8 * x0 + 3);
	while (fabs(x0 - x1) >= 1e-5)
	{
		x0 = x1;
		x1 = x0 - (2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6) / (6 * x0 * x0 - 8 * x0 + 3);
	}

	printf("%f", x1);

	return 0;

}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	float x1 = -10, x2 = 10, x0 = 0,y1=0,y2=0,y0=0;
	x0 = (x1 + x2) / 2;
	y1 = 2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6;
	y2 = 2 * x2 * x2 * x2 - 4 * x2 * x2 + 3 * x2 - 6;
	y0 = 2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6;
	while (fabs(y0) >= 1e-5)
	{
		if (y1 * y0 < 0)
		{
			x2 = x0;
			y2 = y0;
			x0 = (x1 + x2) / 2;
			y0 = 2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6;
		}
		else if (y0 * y2 < 0)
		{
			x1 = x0;
			y1 = y0;
			x0 = (x1 + x2) / 2;
			y0 = 2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6;
		}
	}

	printf("%f", x0);

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	printf("x=");
	scanf("%d", &x);
	if (x < 1) printf("y=%d", x);
	if (1 <= x && x < 10) printf("y=%d", 2 * x - 1);
	if (x >= 10) printf("y=%d", 3 * x - 11);

	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0, result = 0;
	printf("n=");
	scanf("%d", &n);
	result = sqrt(n);
	if (0 < n && n < 1000) printf("%d", result);
	else 
	{
		printf("n=");
		scanf("%d", &n);
		result = sqrt(n);
		printf("%d", result);
	}

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int score = 0, grade = 0;
	printf("score=");
	scanf("%d", &score);
	if (90 <= score && score <= 100) printf("grade=A");
	else if (80 <= score && score <= 89) printf("grade=B");
	else if (70 <= score && score <= 79) printf("grade=C");
	else if (60 <= score && score <= 69) printf("grade=D");
	else printf("grade=E");

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int score = 0, grade = 0;
	printf("score=");
	scanf("%d", &score);
	if (90 <= score && score <= 100) printf("grade=A");
	else if (80 <= score && score <= 89) printf("grade=B");
	else if (70 <= score && score <= 79) printf("grade=C");
	else if (60 <= score && score <= 69) printf("grade=D");
	else if (0 <= score && score <= 59) printf("grade=E");
	else if (score < 0 || 100 < score) printf("error!");

	return 0;
}*/





/*#include <stdio.h>

int main()
{
	int score = 0, grade = 0;
	printf("score=");
	scanf("%d", &score);
	printf("grade=");
	switch (score / 10)
	{
	case 10:
	case 9: printf("A"); break;
	case 8: printf("B"); break;
	case 7: printf("C"); break;
	case 6: printf("D"); break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("E"); break;
	default:printf("error!"); 
	}

	return 0;

}*/




/*#include <stdio.h>

int main() 
{
	int a = 0, b = 0, c = 0, d = 0,t=0;
	scanf("%d,%d,%d,%d", &a,&b,&c,&d);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (a < d)
	{
		t = a;
		a = d;
		d = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (b < d)
	{
		t = b;
		b = d;
		d = t;
	}
	if (c < d)
	{
		t = c;
		c = d;
		d = t;
	}
	printf("%d,%d,%d,%d", a, b, c, d);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int letterbig = 0, lettersmall = 0, blank = 0, num = 0, other = 0;
	char c = 0;
	for (; (c = getchar()) != '\n';)
	{
		if ('A' <= c && c <= 'Z')  letterbig++;
		else if ('a' <= c && c <= 'z') lettersmall++;
		else if (c == 32) blank++;
		else if ('0' <= c && c <= '9') num++; 
		else other++;                                                      //要用if-else结构输出other才会正确
	}
	printf("%d,%d,%d,%d", letterbig, lettersmall, blank, num, other);

	return 0;
}*/





/*#include <stdio.h>

int main()
{
	int n,g=0,s=0,b=0;
	for (n = 100; n < 1000; n++)
	{
		g = n % 10;
		s = n % 100 / 10;
		b = n / 100;
		if (n == g * g * g + s * s * s + b * b * b)printf("%d\n", n);
	}

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int peach = 1, day;
	for (day = 9; 1 <= day; day--)
	peach = (peach + 2) * 2;
    
	printf("%d", peach);

	return 0;

}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	float x0 = 1.5,x1=0;
	int i;
	x1 = x0 - (2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6) / (6 * x0 * x0 - 8 * x0 + 3);
	for(i=1;fabs(x1 - x0) > 1e-5;i++)
	{
		x0 = x1;
		x1 = x0 - (2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6) / (6 * x0 * x0 - 8 * x0 + 3);
		printf("i=%d,%f\n",i,x1);
	}

	return 0;
}*/




//编程实现一个功能，计算所输入的所有正整数中的奇数和，当输入的数为负数或零时结束输入。
/*#include <stdio.h>

int main()
{
	int n = 0, sum = 0;
	while (n != '\n')
	{
		n = getchar();
		if (n == '-')break;                     //一碰到负数的前缀符号-就停止输入，不再参与计算
		else if('0'<n&&n<='9')                   
		{
			n = n - 48;
			if (n % 2 == 1 && n > 0) sum += n;       
		}
	}
	printf("%d", sum);

	return 0;
}*/



//小王落后小明100m。小王与小明向相同方向前进。小明第一天前进1m, 之后每天比前一天多前进1m, 小王第一天前进1m，之后每天前进的距离是前一天的2倍，
//请编写程序求出小王在第多少天追上小明。
/*#include <stdio.h>

int main()
{
	int w = 1, sumw = 1, m = 1, summ = 1, day;
	for (day = 2;; day++)
	{
		w = w * 2;
		sumw += w;
		m = m + 1;
		summ += m;
		if (sumw - 100 >= summ) break;
	}
	printf("%d", day);

	return 0;
}*/



//输出1~1000以内的水仙花数并输出他们的和
/*#include <stdio.h>

int main()
{
	int sum = 0, g = 0, s = 0, b = 0, n = 0;
	for (n = 100; n <= 999; n++)
	{
		g = n%10;
		s = n % 100 / 10;
		b = n / 100;
		if (n == g * g * g + s * s * s + b * b * b) printf("%d\n", n), sum += n;
	}
	printf("%d", sum);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int a[10], i;
	for (i = 0; i < 10; i++)                  //如果数组输入的数据有规律，那么可以用循环来输入输出数据，抓住数组下标之间的规律
		a[i] = i;
	for (i = 9; i >= 0; i--)
		printf("a[%d]=%d\t", i, a[i]);
	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a[25]={1,1}, i;
	printf("%d\t%d\t", a[0], a[1]);
	for (i = 2; i < 25; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%d\t", a[i]);
	}
	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a[10], i, j, t = 0,k=1;
	for (i = 0; i < 10; i++)                 //i为序数
		a[i] = 10 - i;
	for (j = 1; j < 10; j++)                 //j为趟数
	{
		for (i = 0; i < 10-j; i++)           //每一趟里面的次数
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	}
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int a[10], i, j, t = 0, k = 1;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);                 //使用scanf函数对数组输入数据的时候必须用空格把一串数字隔开，不能用逗号
	for (j = 1; j < 10; j++)                 
	{
		for (i = 0; i < 10 - j; i++)       
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	}
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a[2][3] = { 1,2,3,4,5,6 }, b[3][2],i,j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		b[j][i] = a[i][j];
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d\t", b[i][j]);                  //i一直代表行，j一直代表列

		printf("\n");
	}

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int a[3][4]={0}, i, j, max = 0, line = 0, row = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);                             //输入的时候必须用空格！
	}
	max = a[0][0];                                             //先设置一个最大值，让所有数都来跟它比
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)                                //由行到列来比
			if (a[i][j] > max) 
			{
				max = a[i][j];
				line = i;
				row = j;
			}
	printf("max=%d,%d行%d列", max, line, row);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int i, j, a[10][10];
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0) a[i][0] = 1;
			else if (i == j) a[i][i] = 1;
			else if (i >= 2) a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	char str1[30] = "Hello ", str2[] = "world!";
	int i = 0, j = 0;
	while (str1[i] != '\0')
		i++;                                            //先把str1的结束符的位置找到
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];                             //再把str2的字符赋到str1的结束符开始往后的位置
		i++;
		j++;
	}
	puts(str1);                                        //在最后可以再使str1的最后一个确保是赋上了'\0'

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char str[] = "I am a boy.";
	int word = 0, i;
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ') word+=1;

	printf("%d", word+=1);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char str[100];
	int word = 0, i;
	gets_s(str);                                   //visual studio 没法用直接用gets，可以用gets_s,让用户输入字符串
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ') word += 1;

	printf("%d", word += 1);

	return 0;

}*/




/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[3][10];                         //有几个字符数组就定义几行一维字符数组
	gets_s(str[0]);
	gets_s(str[1]);
	gets_s(str[2]);
	if (strcmp(str[0], str[1]) > 0)          //用strcmp函数括号后面一定记得加上大于号，不然没法判断
	{
		if (strcmp(str[0], str[2]) > 0) puts(str[0]);
		else puts(str[2]);
	}
	else 
	{
		if (strcmp(str[1], str[2]) > 0) puts(str[1]);
		else puts(str[2]);
	}

	return 0;
}*/





/*#include <stdio.h>
#include <math.h>

int main()
{
	int a[100], i, k = 0, j;
	for (i = 1; i < 100; i++)                  //i从1开始，把1排掉，1不是素数
	{
		a[i] = i + 1;
		k = sqrt(a[i]);
		for (j = 2; j <= k; j++)
			if (a[i] % j == 0) break;
		if (j > k) printf("%d\t", a[i]);
	}
	
	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int a[10]={1,16,5,98,23,119,18,75,65,81}, i, j, t = 0;
	for (i = 0; i < 10; i++)
	{
		//canf("%d", &a[i]);
		for (j = i+1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		printf("%d\t", a[i]);
	}

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a[10], i, j, t = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d\t", a[i]);

	return 0;

}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	int a[101], i, j, k = 0;
	for (i = 2; i < 101; i++)
		a[i] = i ;
	k = sqrt(100);
	for (i = 2; a[i] < k; i++)
		for (j = i + 1; j < 101; j++)
		{
			if (a[i] != 0 && a[j] != 0)
			{
				if (a[j] % a[i] == 0)
					a[j] = 0;                  //把数挖掉/排除掉，就是通过选择给数赋上值，再通过第二个选择把值排除掉
			}
		}
	for (i = 2; i < 101; i++)
		if (a[i] != 0)printf("%d\t", a[i]);
	
	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a[3][3], i, j, sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0, j = 0; i < 3 && j < 3; i++, j++)
		sum += a[i][j];
	for (i = 2, j = 0; i >= 0 && j < 3; i--, j++)
		sum += a[i][j];

	printf("%d", sum);

	return 0;

}*/


