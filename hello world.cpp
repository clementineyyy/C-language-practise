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
	int max, a=0, b = 0;                  //�ȶ������a ,b ,max;
	scanf("%d,%d", &a, &b);               //��ɨ����������ݣ�
	max = a;                              //�����˸�ֵ����Ҫһ����ʽ�ӡ���
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
	int a = 0, b = 0, c = 0,max;       //max ҲҪ������������
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
	int change = 0;                  //�������Զ�����ǰ������
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
	printf("please input price��");
	scanf("%d", &price);

	const int AMOUNT = 100;
	int change = 0;                                 //��������Ա�������Ҫ��ʹ��ǰ����
	printf("change=%d",change=AMOUNT-price);        //ͬʱ������ʽ��������printf��

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
	printf("change=%d", AMOUNT - price);     //���ʽ��������ﵫ�ǲ���Ҫ��д�����ʽ�����ߣ������)

	return 0;
}*/


/*#include <stdio.h>

int main()
{
	int price = 0;
	printf("please input price:");
	scanf("%d", &price);
	 
	const int AMOUNT = 100;          //���Զ���һ��������AMOUNT
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
#define AMOUNT 100                                                //���߶���һ�����ų���AMOUNT��ע��û�еȺ�=�;�ĩ�ֺţ�
	printf("change=AMOUNT-price=%d", change = AMOUNT - price);

	return 0;
}*/





/*#include <stdio.h>

int main()
{
	int price = 0;
	printf("please input prince:");
	scanf("%d", &price);

	int change = 100 - price;        //����Ҳ�����ں��������������ҿ��Լ��ϱ��ʽ
	printf("the change is:%d", change);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	unsigned char c = 200;            //��ͬ���������Ϳ����ɵ����ִ�С��ͬ
	printf("%d,%c", c,c);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	float r = 0, p;                                                                                           //����������ĸ�ľ���������С������ôһ��ʼ�����ʱ���Ҫ��int��Ϊfloat��double
	printf("plaese input ��������r:");
	scanf("%f", &r);                                                                                          //ͬ��printf�����ʽ��dҲӦ�ñ��f�Զ�ӦС��
	p = (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r) * (1 + r);    //round1�������ô��ʾn�η�������ڸ�¼���Բ鵽Ҫ��pow����
	printf("%f", p);


	return 0;
}*/


/*#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;                              //����n���㲻��С��Ҳ������float
	float r = 0, p;
	printf("��������������r������n��");
	scanf("%f,%d", &r, &n);
	p = pow(1 + r, n);                     //pow����Ӧ�������ã�������ڵȺ���ߣ��Ⱥ��ұ���pow()ǰ���ǵ��������Ƕ��ٴη�
	printf("��������ȵı���p=%f", p);

	return 0;
}*/




/*#include <stdio.h>
#include <math.h>

int main()
{
	const int M = 1000;
	float r = 0, n = 0, P;
	printf("������������r������n:");
	scanf("%f,%f", &r, &n);
	P = M * pow(1 + r / 4, 4*n);           //��Ϥһ�±�Ϣ�͵Ĺ�ʽ���Լ���Ȼ������pow����
	printf("���ձ�Ϣ���ǣ�P=%f", P);


	return 0;
}*/



/*#include <stdio.h>
#include <math.h>

int main()
{
	double d=0,p=0,r = 0,m;
	printf("�����������Ŀd,ÿ�»����p��������r:");
	scanf("%lf,%lf,%lf", &d, &p, &r);
	m = (log(p) - log(p - d * r)) / log(1 + r);               //logĬ������eΪ�ף�log10������10Ϊ�ף������ʵ��任��ʽ
	printf("%6.2f�����ܻ���", m);                             //Ϊ�˱���С�����λ�ڸ�ʽ��ǰ���������

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	int c1, c2;
	c1 = 97;                              //������char��������ݣ��������ֵķ�ΧҪע�⣬0~127
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
	putchar(c3 + 4);                             //putchar����ַ���ʹ��
	putchar(c4 + 4);
	putchar(c5 + 4);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char c1, c2, c3, c4, c5;                    //ȷʵ���Բ�����������ֵ
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = getchar();
	c5 = getchar();                             //getchar�����ַ���ʹ��

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
	printf("Բ�ܳ���C=%6.2f\n", C=2 * PI * r);
	printf("Բ�����S=%6.2f\n", S = PI * r * r);
	printf("Բ��������surface=%6.2f\n", surface = 4 * PI * r * r);
	printf("Բ�������B=%6.2f\n", B = 4.0 / 3.0 * PI * r * r * r);        
	printf("Բ�������V=%6.2f\n", V = S*h);

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char c1 = 0, c2 = 0;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);                           //putchar��getchar������ֻ�ܵ���һ������������ͬʱ����������������
	putchar(c2);

	return 0;

}*/



/*#include <stdio.h>

int main()
{                 
	//char c1=0,c2=0;                      ���putchar��getchar��һ�У��򵥵ĳ�����Բ��ö������
	putchar(getchar());                  
	putchar(getchar());

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	char c1 = 0, c2 = 0;
	c1 = getchar();                    //������getchar �����putchar
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
	del = b * b - 4 * a * c;                                                    //��д���ӵı��ʽʱע����û�����ţ��ü�������߼�����д
	if (del >= 0)
		x1 = (-b - sqrt(del)) / (2.0 * a), x2 = (-b + sqrt(del)) / (2.0 * a),   //����С�ķ�ĸ�ϵ����֣����ͳ�����������������дС����ʽ
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
		s = (a + b + c) / 2.0,                         //�ر�С�ĳ���ʱ��������ͳ����������������
		y = sqrt(s * (s - a) * (s - b) * (s - c)),
		printf("�ܳ���%lf", y);
	else printf("�������ݹ�����������!");

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
	//else printf("%d,%d", a, b);        Ҳ���Բ���elseֱ�ӽ����������������һ���������

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, t = 0;
	scanf("%d,%d,%d", &a, &b, &c);
	if (a > b) t = a,
		       a = b,
		       b = t;                     //����ֻ��ifû��else
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

	middle = (a > b) ? a : b;                        //�Ѵ��������middle��middle����c�����Ƚϣ�ʹ�ã� �����
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
	else printf("%.0f", floor(sqrt(num)));     //floor������ȡ������

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
	case 9:printf("A"); break;       //�ǵü�break���ƣ�breakǰ���ǣ��ֺ�
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
	hundred = (num - tenthousand * 10000 - thousand * 1000) / 100;                          //���ʽǰ�����(int)����ǿ������ת��������Ҳ����
	ten = (num - tenthousand * 10000 - thousand * 1000 - hundred * 100) / 10;
	one = (num - tenthousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10);
	if (10000 <= num && num <= 99999) printf("5λ��\n%d,%d,%d,%d,%d\n%d%d%d%d%d",tenthousand,thousand,hundred,ten,one,one,ten,hundred,thousand,tenthousand);
	else if (1000 <= num && num <= 9999) printf("4λ��\n%d,%d,%d,%d\n%d%d%d%d",thousand,hundred,ten,one,one,ten,hundred,thousand);
	else if (100 <= num && num <= 999) printf("3λ��\n%d,%d,%d\n&d%d%d",hundred,ten,one,one,ten,hundred);
	else if (10 <= num && num <= 99)printf("2λ��\n%d,%d\n%d%d",ten,one,one,ten);
	else printf("1λ��\n%d\n%d",num,num);

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
	printf("Բ�ܳ���%.2f\nԲ�����%.2f\nԲ��������%.2f\nԲ�������%.2f\nԲ�������%.2f", C, S, square, V, table);

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
		d = t;                              //һֱ�����Ű�a�ŵ���С��λ��
	if (b > c) t = b,
		b = c,
		c = t;
	if (b > d) t = b,
		b = d,
		d = t;                              //�������Ű�b�ŵ��ڶ�С��λ��
	if (c > d) t = c,
		c = d,
		d = t;                              //��c�ŵ�����С��λ��
	printf("%d,%d,%d,%d", a, b, c, d);      //���û������ĸ��˳��ֻ�ǰ����ֻ��ˣ����÷�������

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int O1,O2,O3,O4,h = 10,x=0,y=0;              //��Ϊ��������������Բ�������С����������������
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
	while (i < 100)              //������<=
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
	for (; i <100; sum = sum + i)     //����<=
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
	for (; (c = getchar()) != '\n'; sum = sum + c);       //Ҫ��c=getchar()���ߴ�������,��������ж�Ϊ�棬c=1,���Ϊ3(abc)
	printf("%d", sum);                                    //�ó������������ַ���ASCII��֮��

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	int num = 0, g = 0, s = 0, b = 0;
	scanf("%d", &num);
	g = num % 10;                                                              //֪����λ����ʮλ������λ���ϵ����ֱַ���㷨
	s = num % 100 / 10;
	b = num / 100;
	if (num == g * g * g + s * s *s + b * b *b ) printf("��ˮ�ɻ���");         //ˮ�ɻ�����������,��ע����˫���ں�Ϊ���ڣ������ں��Ǹ�ֵ��������Ҳ������
	else printf("����ˮ�ɻ���");

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
		b = num / 100;                                                       //�������ʽ���涼�Ƿֺ�
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
	for (i =1; i <= num / 2; i++)             //��һ��������1��������0
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
		s = 0;                                //�����������s��ʼ��
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
	for (x = 0; x <= 33; x++)                                     //��ʼ��Ҫ��0��ʼ������һֻ��������
		for (y = 0; y <= 50; y++)                                 //���ֵ�����ֻ�����ֻ������������������
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
			if (x * 5 + y * 3 == 100)printf("%d,%d,%d\n", x, y, z = 100 - x - y);      //�ı�if�е�������ʹ������

	return 0;

}*/



/*#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)                  //i������
	{
		for (j = 1; j <= i; j++)              //j������,��һ��ʼʹ����<����
			printf(" %d*%d=%d ", i, j, i * j);

		printf("\n");
	}
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int i, j,k;                                //k��ÿһ��������ٷ���
	for (i = 1; i <= 5; i++)                   //i������
	{
		for (j = 1; j <= 5 - i; j++)           //j��ÿһ��������ٿո��������й�
			printf(" ");
		for (k = 1; k <= 2 * i - 1; k++)       //ÿһ��������ٷ��ź������Ĺ�ϵ
			printf("*");                       //���ź���Ŀո�;Ͳ��ù���
		printf("\n");

	}
}*/




/*#include <stdio.h>

int main()
{
	int i, j, k, m;
	scanf("%d", &m);                           //m���ܹ��ж�����
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= 50 - i; j++)          //�ܹ���99��
			printf(" ");
		for (k = 1; k <= 2 * i - 1; k++)       //������2m-1<=�������ſ����������ͼ��
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
	for (num = 100; num <= 200; num++)               //�������б����ĳ�ʼֵ����0��Ҫ����������ķ�Χ������numӦ��100��ʼ
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
			printf("%4d\t", i * j);                   //�����˼���\tˮƽ�Ʊ���Ϳ��Ƹ�ʽ�������ڰٷֺź��棬��ʽ��ǰ��
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
	printf("%f", i-1);                             //ͳ�Ƴ�ѭ���˶��ٴ�
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
	printf("%d,%d,%d,", F1, F2, F3);          //�ֳ�������Ϊһ�飬�����޷������������������Ľ�
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
	int F1 = 1, F2 = 1,i;                    //�ֳ�����Ϊһ�飬��ÿ����ĸ����ͻ���
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
	for (i = 2; i <=k; i++)                 //���Ը��Ŵ�
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
		k = sqrt(n);                     //������ÿһ�е�λ�ú���Ҫ����������д�������д�����������˳��ģ�˳����ˣ�����Ľ���ʹ���
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
	for (;(c = getchar())!= '\n';)                                    //д�����ı��ʽ��ʱ��ע��Ҫ��Ҫ�������ţ��ر������в��Ⱥų��ֵ�ʱ��ǰ��c=getchar��һ������
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
	if (m < n && n % m == 0) printf("���Լ��=%d,��С������=%d",m,n);
	else {
		for (i = 2; i <= m; i++)
		{
			for (j = 2; j <= n; j++)
			{
				if (m % i == 0 && n % j == 0 && i == j) printf("���Լ��=%d����С������=%d", j, j * n);
				if (m % i == 0 && n % j == 0 && i == j) break;
			}
			if (m % i == 0 && n % j == 0 && i == j) break;                                                  //ÿһ�г����λ����ĺ���Ҫ
		}
		if (i > m && j > n )printf("���Լ��=1,��С������=%d", m * n);
	}
	
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	char c, letter = 0, blank = 0, num = 0, other = 0, all;
	for (all=1; (c = getchar()) != '\n';all++)                           //û��ע�⵱c=getchar()�Ͳ��Ⱥ���һ���ʱ��ǰ��Ҫ��������
	{                                                                    //һ��ʼall��ʼ����1����0��дһд��֪��
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
		else other++;                                                  //���������ĸ���ո�������ֵĻ�ֱ�Ӿ���other++�����������ܵļ�ȥǰ��3��
	}

	printf("%d,%d,%d,%d", letter, blank, num, other);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	int i;
	double j=1,sum=0;                  //ʹ��double��Ϊ���ݺܴ�doubleΪ8���ֽڣ���longֻ��4���ֽ�
	for (i = 1; i <= 20; i++)
	{
		j = j * i;
		sum += j;
	}

	printf("%22.15e", sum);            //��e��ʽ������ָ����ʽ�������

	return 0;

}*/




/*#include <stdio.h>

int main()
{
	double k, s1 = 0, s2 = 0, s3 = 0;            //��double������flaot�����ȸ���
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
	double fz = 2, fm = 1, t,sum=0,i;          //�´ο���ֱ����double������float����Ϊ��������ݵĳ���
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
	for (i = 2; i <= 10; i++)           //��һ�����ʱ����100�ף��ӵڶ�����ؿ�ʼ�����ܹ�������·�̣��ͷ����ĸ߶�
	{
		h= h / 2;
		s += h * 2;
	}

	printf("%f,%f", s, h/2);            //��������������߶�Ҫ����2����Ϊֻѭ�����˵�9��

	return 0;

}*/





/*#include <stdio.h>

int main()
{
	int i,n=1;
	for (i = 9; i >=1; i--)       //һ������9�죬��˼·���Ӽ���ʼ��������������⣬�ӷ�������
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
	float x0 = 0, x1 = 0,i,a=0;               //Ӧ����float������double,Ӧ��������Ļ�
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
		else other++;                                                      //Ҫ��if-else�ṹ���other�Ż���ȷ
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




//���ʵ��һ�����ܣ�����������������������е������ͣ����������Ϊ��������ʱ�������롣
/*#include <stdio.h>

int main()
{
	int n = 0, sum = 0;
	while (n != '\n')
	{
		n = getchar();
		if (n == '-')break;                     //һ����������ǰ׺����-��ֹͣ���룬���ٲ������
		else if('0'<n&&n<='9')                   
		{
			n = n - 48;
			if (n % 2 == 1 && n > 0) sum += n;       
		}
	}
	printf("%d", sum);

	return 0;
}*/



//С�����С��100m��С����С������ͬ����ǰ����С����һ��ǰ��1m, ֮��ÿ���ǰһ���ǰ��1m, С����һ��ǰ��1m��֮��ÿ��ǰ���ľ�����ǰһ���2����
//���д�������С���ڵڶ�����׷��С����
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



//���1~1000���ڵ�ˮ�ɻ�����������ǵĺ�
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
	for (i = 0; i < 10; i++)                  //�����������������й��ɣ���ô������ѭ��������������ݣ�ץס�����±�֮��Ĺ���
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
	for (i = 0; i < 10; i++)                 //iΪ����
		a[i] = 10 - i;
	for (j = 1; j < 10; j++)                 //jΪ����
	{
		for (i = 0; i < 10-j; i++)           //ÿһ������Ĵ���
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
		scanf("%d", &a[i]);                 //ʹ��scanf�����������������ݵ�ʱ������ÿո��һ�����ָ����������ö���
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
			printf("%d\t", b[i][j]);                  //iһֱ�����У�jһֱ������

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
			scanf("%d", &a[i][j]);                             //�����ʱ������ÿո�
	}
	max = a[0][0];                                             //������һ�����ֵ��������������������
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)                                //���е�������
			if (a[i][j] > max) 
			{
				max = a[i][j];
				line = i;
				row = j;
			}
	printf("max=%d,%d��%d��", max, line, row);

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
		i++;                                            //�Ȱ�str1�Ľ�������λ���ҵ�
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];                             //�ٰ�str2���ַ�����str1�Ľ�������ʼ�����λ��
		i++;
		j++;
	}
	puts(str1);                                        //����������ʹstr1�����һ��ȷ���Ǹ�����'\0'

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
	gets_s(str);                                   //visual studio û����ֱ����gets��������gets_s,���û������ַ���
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ') word += 1;

	printf("%d", word += 1);

	return 0;

}*/




/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[3][10];                         //�м����ַ�����Ͷ��弸��һά�ַ�����
	gets_s(str[0]);
	gets_s(str[1]);
	gets_s(str[2]);
	if (strcmp(str[0], str[1]) > 0)          //��strcmp�������ź���һ���ǵü��ϴ��ںţ���Ȼû���ж�
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
	for (i = 1; i < 100; i++)                  //i��1��ʼ����1�ŵ���1��������
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
					a[j] = 0;                  //�����ڵ�/�ų���������ͨ��ѡ���������ֵ����ͨ���ڶ���ѡ���ֵ�ų���
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


