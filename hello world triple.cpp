/*#include <stdio.h>
#include <string.h>
#include <math.h>

int ten(char str[10])
{
	int i, sum = 0, j = strlen(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ('0' <= str[i] && str[i] <= '9')
			sum += (str[i] - 48) * pow(16, j - i - 1);          //�ַ������еġ��ַ����֡�ҲҪ����ASCII��ֵת��
		else if ('a' <= str[i] && str[i] <= 'f')
			sum += (str[i] - 87) * pow(16, j - i - 1);
		else if ('A' <= str[i] && str[i] <= 'F')
			sum += (str[i] - 55) * pow(16, j - i - 1);
	}

	return sum;
}

int main()
{
	char str[10];            //ʹ���ַ���������ʮ������λ������Ϊʮ�����ƺ�����ĸ���ַ�����ȿ��Ա�ʾ����Ҳ���Դ���ַ���ֻ��Ҫ����ASCII��ֵת��
	gets_s(str);
	printf("%d", ten(str));

	return 0;
}*/




/*#include <stdio.h>
int i;

void string(int n)
{
	if (n / 10 != 0)
		string(n / 10);                               //�ݹ�
	putchar(n % 10 + 48);                             //��������ÿһ������n�е��Ǹ���λ����
	putchar(32);                                      //��Ҫ�������ÿһ�������ַ����������������ֱ�����ַ���������������ַ������
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	string(n);

	return 0;
}*/



/*#include <stdio.h>

int sum(int month, int day)
{
	int day_table[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }, i;
	for (i = 0; i<month-1; i++)
		day += day_table[i];

	return (day);
}

int leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 != 0)                      //�ж��Ƿ�Ϊ������㷨������Ҫ��һ��
		return 1;
	else return 0;
}

int main()
{
	int year = 0, month = 0, day = 0;
	scanf("%d,%d,%d", &year, &month, &day);
	day = sum(month, day);
	if (leap(year) && month >= 3)
		day++;
	printf("%d", day);

	return 0;
}*/


//���ýṹ��ʵ�֣�����n��ѧ������Ϣ(����ѧ�š��������ɼ�)���ٰ��ճɼ����������ѧ������Ϣ��
/*#include <stdio.h>

int main()
{
	struct student
	{
		int num = 0;
		char name[10] = { 0 };
		float score = 0;
	};
	struct student stu[5] = { {10101,"Zhang",78},{10103,"Wang",98.5},{10106,"Li",86},{10108,"Ling",73.5},{10110,"Sun",100} }, * p[5], * t;     //������һ��ָ������
	int i, j;
	for (i = 0; i < 5; i++)
		p[i] = &stu[i];
	for (i = 0; i < 4; i++)
		for (j = 0; j <4 - i; j++)
			if (p[j]->score < p[j+1]->score)
			{
				t = *(p + j);           //ע����������ô���ģ�ָ���ŵ��ǽṹ��������һ��Ԫ�صĵ�ַ��ȡ���ݺ󽻻����������Ԫ�أ���Ϊ�ǽṹ�壬����һ�����������ĵ�ַ������һ��Ԫ��λ�ñ��ˣ����еĳ�ԱҲ����һ��䣬��������Ԫ��λ�ñ��ˣ����Ǵ�0��4������������ݣ�һ�����ṹ�壩����
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
	for (i = 0; i < 5; i++)
		printf("%d,%s,%f\n", p[i]->num, p[i]->name, p[i]->score);

	return 0;
}*/



//���ýṹ��ʵ�֣��Ӽ�������10��������ƺͶ��۲�����ṹ�����У����в��Ҷ�����ߺ���͵������Ͷ��ۣ��������

/*#include <stdio.h>

int main()
{
	struct book
	{
		char name[10] = { 0 };
		int price = 0;
	};
	struct book b[20], * p = &b[0], * q = &b[0];                      //ע��ָ�붨����ǽṹ�����͵ģ������Ƕ���Ϊ��ָ����ڲ���Ա/Ԫ�ص����ͣ�����ָ����Ҫһ������Ķ���
	int i, max = 0, min = 0;
	for (i = 0; i < 10; i++)
	{
		gets_s(b[i].name);
		scanf_s("%d", &b[i].price);
		getchar();                                                    //����ҲҪ����getchar���������������ݺ�Ļس���ֹ������һ���ַ������飡��
	}
	max = b[0].price;
	min = b[0].price;
	for (i = 0; i < 10; i++)
		if (b[i].price > max)
		{
			p = &b[i];
			max = b[i].price;
		}
		else if (b[i].price < min)
		{
			q = &b[i];
			min = b[i].price;
		}

	printf("%s,%d\n", (*p).name, (*p).price);
	printf("%s,%d", (*q).name, (*q).price);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct Studnet
	{
		int num;
		char name[20];
		float score;
	}student1, student2;
	scanf("%d %s %f", &student1.num, student1.name, &student1.score);            //�������ĸ�ʽҪ�������ǿ��Գɹ��ģ��Կո����ÿһ������
	scanf("%d %s %f", &student2.num, student2.name, &student2.score);
	if (student1.score > student2.score)
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
	else printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	struct Studnet
	{
		int num;
		char name[20];
		float score;
	}student1 = { 0 }, student2 = { 0 };
	scanf("%d,%s,%f", &student1.num, student1.name, &student1.score);               //�ö��ŷָ��Ͳ��У���������������ǳ�ʼ��������
	scanf("%d,%s,%f", &student2.num, student2.name, &student2.score);
	if (student1.score > student2.score)
		printf("%d %s %6.2f\n", student1.num, student1.name, student1.score);
	else printf("%d %s %6.2f\n", student2.num, student2.name, student2.score);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	struct Person
	{
		char name[20];
		int count;
	};
	struct Person leader[3] = { {"Li",0},{"Zhang",0},{"Sun",0} };              //������ʼ��
	int i, j;
	char leader_name[20];
	for (i = 0; i < 10; i++)
	{
		gets_s(leader_name);                                                   //�ַ������뺯����gets!!!!!
		for (j = 0; j < 3; j++)
			if (strcmp(leader_name, leader[j].name) == 0)
				leader[j].count++;
	}
    for (j = 0; j < 3; j++)
		printf("%s,%d\n", leader[j].name, leader[j].count);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct Student
	{
		int num;
		float score;
		struct Student* next;
	};
	struct Student a, b, c, * head, * p;
	a.num = 10101;
	a.score = 89.5;
	b.num = 10103;
	b.score = 90;
	c.num = 10107;
	c.score = 85;
	head = &a;                                             //ͷָ�븳�ϵ�һ���ڵ�ĵ�ַ
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;                                              //���ָ�������Ŀ�ͷ��ʼ
	while (p != NULL)                                      //ѭ�����������ʹ���
	{
		printf("%d,%5.1f\n", p->num, p->score);
		p = p->next;                                       //�ָ������ָ���ָ�����һ����ַ���ṹ��ָ�룬ָ��һ����Ա�������Ա��ŵ��ǵ�ַ
	}

	return 0;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct Student
{
	long num;
	float score;
	struct Student* next;
};

struct Student* creat(void)                                                          //������һ���ṹ�����͵ķ���ָ��ֵ�ĺ������β�Ϊ��
{
	struct Student* head, * p1, * p2;
	int n = 0;
	p1 = p2 = (struct Student*)malloc(sizeof(struct Student));                       //�����������ռ�����ֽڣ���sizeof�������㣬����ǿ������ת����ͳһ��ַ������
	scanf("%d %f", &p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1)
			head = p1;
		else p2->next = p1;                                                          //���¿��ٵĽ���ǰһ�����������
		p2 = p1;                                                                     //p2������p1�����¼�µ�ǰ����λ��
		p1 = (struct Student*)malloc(sizeof(struct Student));
		scanf("%d %f", &p1->num, &p1->score);
	}
	p2->next = NULL;
	free(p1);                                                                        //���һ���ǵ��ͷſս��p1
	return (head);                                                                   //���ص���ͷָ���ֵ����һ��������ĵ�ַ����
}

void print(struct Student* head)
{
	struct Student* p;
	p = head;
	if (head != NULL)                                                               //ȷ�����Ƿǿ�����
		while (p != NULL)
		{
			printf("%d,%f\n", p->num, p->score);
			p = p->next;                                                            //����������һ�����ĵ�ַ
		}
}

int main()
{
	struct Student* pt;
	pt = creat();
	print(pt);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	FILE* fp;                                                            //���붨���ļ�ָ��fp
	char ch, filename[10];
	scanf("%s", filename);
	getchar();                                                           //�������ܻس���
	if ((fp = fopen(filename, "w")) != NULL)                             //����ļ������򿪣���Ϊ�գ����Ҵ��ļ���ʲô�ļ���ʲô��ʽ��ָ������
		ch = getchar();
	while (ch != '#')
	{
		fputc(ch,fp);                                                    //���ļ�����һ���ַ���ʲô�ַ���ʲô�ļ���ע��˳��
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);                                                          //���һ��Ҫ���ļ��ر�
	putchar(10);

	return 0;
}*/




/*#include <stdio.h>

int main()
{
	FILE* fp;                                                            //���붨���ļ�ָ��fp
	char ch, filename[10];
	gets_s(filename);                                                    //��gets_s�����������ļ���Ҳ����
	if ((fp = fopen(filename, "w")) != NULL)                             //����ļ������򿪣���Ϊ�գ����Ҵ��ļ���ʲô�ļ���ʲô��ʽ��ָ������
		ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);                                                    //���ļ�����һ���ַ���ʲô�ַ���ʲô�ļ���ע��˳��
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);                                                          //���һ��Ҫ���ļ��ر�
	putchar(10);

	return 0;
}*/




//�Ӽ��̶������ɸ��ַ����������ǰ���ĸ��С��˳������Ȼ����ź�����ַ����͵������ļ��б��档

/*#include <stdio.h>
#include <string.h>

void sort(char* str[5], char** p)
{
	int i, j;
	char* t = str[0];
	for(i=0;i<2;i++)
		for(j=0;j<2-i;j++)
			if (strcmp(*(p + j), *(p + j + 1)) > 0)            //ָ������ȡһ�����ݼ�Ϊ�ַ��������������/�׵�ַ
			{
				t = *(p + j);                                  //��ÿһ��ָ�������Ԫ���д�ŵ��ַ�������ĵ�ַ����λ��
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
	FILE* fp;                                                  //�ļ�ָ��Ҫ����ָ���С����
	fp = fopen("f1.dat", "w");;
	for (i = 0; i < 3; i++)
	{
		fputs(str[i], fp);
		fputc('\n', fp);                                       //fputs�������Դ�����
	}
	fclose(fp);
}

int main()
{
	char* str[3], ** p = str, array[3][8];                    //����һ��һάָ�����飬�������ÿ���ַ������׵�ַ������һ��ָ��ָ���ָ�룬�����ƶ���ָ�������е�λ��
	int i = 0;
	FILE* fp;
	char str1[3][10];
	for (i = 0; i < 3; i++)
	{
		gets_s(array[i]);                
		str[i] = &array[i][0];                                //ָ������һ��һ����ʼ��
	}
	sort(str, p);
	fp = fopen("f1.dat", "r");
	while(fgets(str1[i],10,fp)!=NULL)
	{
		printf("%s", str1[i]);
		i++;
	}
	fclose(fp);

	return 0;
}*/



//�����������ļ�A.txt��B.txt, �����һ����ĸ��Ҫ����������ļ��е���Ϣ�ϲ�������ĸ˳�����У��������һ�����ļ�C.txt��

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* fp1, * fp2, * fp3;
	char str1[30], str2[6], ch;
	int i, j;
	fp1 = fopen("A.txt", "r");                                        //�ļ���չ��������
	fgets(str1, 6, fp1);
	fclose(fp1);
	fp2 = fopen("B.txt", "r");
	fgets(str2, 6, fp2);
	fclose(fp2);
	strcat(str1, str2);
	printf("%s", str1);
	for (i = 0; i < strlen(str1) - 1; i++)
		for (j = 0; j < strlen(str1) -1-i; j++)
			if (str1[j] > str1[j + 1])
			{
				ch = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = ch;
			}
	fp3 = fopen("C.txt", "w");
	fputs(str1, fp3);
	fclose(fp3);

	return 0;
}*/




//����һ����ά��������ȡ�ı��ļ��е����ݣ�������Ծ������ʽ�����txt�ļ��������ĿĿ¼��

/*#include <stdio.h>

int main()
{
	char a[3][3], i, j;
	FILE* fp;
	fp = fopen("file.txt", "r");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			if (!feof(fp))                                //���ļ�����������ֵΪ1������δ��������0�������ִ��
			{
				a[i][j] = fgetc(fp);
				printf("%c ", a[i][j]);
			}
		printf("\n");
	}

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	FILE* in, * out;
	char str[20];
	int i;
	in = fopen("file1.dat", "r");
	for (i = 0; !feof(in); i++)
		str[i] = fgetc(in);
	str[i] = '\0';
	fclose(in);
	out = fopen("file2.dat", "w");
	fputs(str, out);                                  //��������ַ����Ľ������Ҳ���ļ�2���棬������getc����һ��һ�����ַ�����feof�����ƽ���
	fclose(out);

	return 0;
}*/



/*#include <stdio.h>

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
};

void save(struct Student stu[10])
{
	FILE* fp;
	int i;
	fp = fopen("stu.dat", "wb");
	for (i = 0; i < 10; i++)
		fwrite(&stu[i], sizeof(struct Student), 1, fp);
	fclose(fp);
}

int main()
{
	struct Student stu[10], stud[10];
	int i;
	FILE* fp;
	for (i = 0; i < 10; i++)
		scanf("%s %d %d %s", stu[i].name, &stu[i].num, &stu[i].age, stu[i].addr);
	save(stu);
	fp = fopen("stu.dat", "rb");
	for (i = 0; i < 10; i++)
	{
		fread(&stud[i], sizeof(struct Student), 1, fp);
		printf("%s %d %d %s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
	}
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>
#define SIZE 10

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

void save()
{
	FILE* fp;
	int i;
	if ((fp = fopen("stu.dat", "wb")) == NULL)
	{
		printf("cannot open file\n");
		return;
	}
	for (i = 0; i < SIZE; i++)
		if (fwrite(&stud[i], sizeof(struct Student), 1, fp) != 1)
			printf("file write error\n");
	fclose(fp);
}

int main()
{
	int i;
	for (i = 0; i < SIZE; i++)
		scanf("%s %d %d %s", stud[i].name, &stud[i].num, &stud[i].age, stud[i].addr);
	save();

	return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

int main()
{
	int i;
	FILE* fp;
	if ((fp = fopen("stu.dat", "rb")) == NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	for (i = 0; i < SIZE; i++)
	{
		fread(&stud[i], sizeof(struct Student), 1, fp);
		printf("%s %d %d %s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].addr);
	}
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	FILE* fp1, * fp2;
	char ch;
	fp1 = fopen("file1.dat", "r");
	fp2 = fopen("file2.dat", "w");
	ch = getc(fp1);                       //�ڿ�ʼѭ��֮ǰ����һ�εõ��ַ��Ͳ������������������һ����ֵķ��ţ����������һ���ַ�֮���ٶ����ļ�β��־����֮�����ж��ǲ��ǵ��ļ�ĩβ���ǵ����ļ�ĩβ
	while (!feof(fp1))
	{
		printf("%c", ch);
		ch = getc(fp1);
	}
	printf("\n");
	rewind(fp1);
	ch = getc(fp1);
	while (!feof(fp1))
	{
		fputc(ch, fp2);
		ch = getc(fp1);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}*/



/*#include <stdio.h>

struct Student
{
	char name[10];
	int num;
	int age;
	char addr[10];
};

int main()
{
	FILE* fp;
	int i;
	struct Student stu[10];
	fp = fopen("stu.dat", "rb");
	for (i = 0; i < 10; i += 2)
	{
		fseek(fp, i * sizeof(struct Student), 0);
		fread(&stu[i], sizeof(struct Student), 1, fp);
		printf("%s %d %d %s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].addr);
	}
	fclose(fp);

	return 0;
}*/




//�����ѧ����ÿ��ѧ���� 3 �ſεĳɼ����Ӽ��������������ݣ�����ѧ�� �ţ����������ſγɼ�����
// �����ƽ���ɼ�����ԭ�е����ݺͼ������ƽ������ ����ڴ����ļ�"stud"�С�
//��ע���뽫���븴��ճ�����У����������н����ͼ��

/*#include <stdio.h>

struct Student
{
	char num[10];
	char name[8];
	int score[3];
	float ave;
}stu[5];

int main()
{
	int i, j, sum=0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3.0;
		sum = 0;
	}
	fp = fopen("stud", "w");                            //������ԭ�ⲻ���ķ����ļ����Ҫ�ö����Ƹ�ʽ�ˣ��������ļ���ʽ����ʽ���ķ�ʽ���
	for (i = 0; i < 5; i++)
		fprintf(fp, "%s %s %d %d %d %f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);

	return 0;
}*/



/*#include <stdio.h>

struct day
{
	int year;
	int month;
	int date;
};

int main()
{
	struct day dae;
	int mon[13] = { 0.31,28,31,30,31,30,31,31,30,31,30,31 }, i, days = 0;
	scanf("%d %d %d", &dae.year, &dae.month, &dae.date);
	for (i = 1; i < dae.month; i++)
		days += mon[i];
	days += dae.date;
	if (dae.year % 4 == 0 && dae.year % 100 != 0 || dae.year % 400 == 0 && dae.month >= 3)         //������б𷽷�������4�Ҳ�����100������400��ע���·�����һ��Ҫ����2����
		days++;
	printf("%d", days);

	return 0;
}*/



/*#include <stdio.h>

struct day
{
	int year;
	int month;
	int date;
};

int days(struct day dae)
{
	int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }, i, dai = 0;
	for (i = 1; i < dae.month; i++)
		dai += mon[i];
	dai += dae.date;
	if (dae.year % 4 == 0 && dae.year % 100 != 0 || dae.year % 400 == 0 && dae.month >= 3)
		dai++;

	return dai;
}

int main()
{
	struct day dae;
	scanf("%d %d %d", &dae.year, &dae.month, &dae.date);
	printf("%d", days(dae));

	return 0;
}*/



/*#include <stdio.h>

struct student
{
	char num[6];
	char name[8];
	float score[3];
	float ave;
};

void input(struct student stu[5])
{
	int i;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
}

void average(struct student stu[5])
{
	int i, j;
	float sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
}

int max(struct student stu[5],int stud)
{
	int i, j;
	float max = 0;
	for(i=0;i<5;i++)
		for (j = 0; j < 3; j++)
			if (stu[i].score[j] > max)
			{
				max = stu[i].score[j];
				stud = i;
			}
	
	return stud;
}

int main()
{
	struct student stu[5];
	int i, stud = 0;
	input(stu);
	average(stu);
	for (i = 0; i < 5; i++)
		printf("%f\n", stu[i].ave);
	stud = max(stu, stud);
	printf("%s %s %f %f %f %f", stu[stud].num, stu[stud].name, stu[stud].score[0], stu[stud].score[1], stu[stud].score[2], stu[stud].ave);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct person
	{
		int number;
		int nexp;                                                //������ָ��Ϳ�������ͨ�����ͱ�������ŵ��Ǻ�һ���˵ı�ţ����Ǿ�̬�������������̬����Ͷ�̬����
	};
	struct person link[14];
	int i, count = 0, h = 13;
	for (i = 1; i <= 13; i++)
	{
		if (i == 13)
			link[i].nexp = 1;                                    //�γ�ȦȦ�����һ���˼��µ�һ���˵ı��
		else link[i].nexp = i + 1;                               //��ʼ����ǰһ���˼��º�һ���˵ı��
		link[i].number = i;                                      //��ÿһ���˱��
	}
	while (count < 12)                                           //�߳�12���ˣ�12��
	{
		i = 0;
		while (i != 3)
		{
			h = link[h].nexp;
			if (link[h].number)
				i++;
		}
		link[h].number = 0;                                      //����ǰ����˵ı��������
		count++;
	}
	for (i = 1; i <= 13; i++)
		if (link[i].number)
			printf("%d", link[i].number);

	return 0;
}*/




/*#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct student
	{
		char num[6];
		char name[8];
		char sex;
		int age;
		struct student* next;                                            //������̬�������һ��Ԫ�ذ�������ָ�룬ָ����һ��Ԫ�صĵ�ַ
	};
	struct student stu[10], * p, * pt, * head;
	int i, length, iage, flag = 1, find = 0;
	while (flag == 1)
	{
		scanf("%d", &length);
		if (length < 10)
			flag = 0;
	}
	for (i = 0; i < length; i++)
	{
		p = (struct student*)malloc(sizeof(struct student));             //sizeof�������������������������������Ƕ���Ľṹ�����������
		if (i == 0)
			head = pt = p;                                               //������һ����㣬����ͷ�ڵ�
		else pt->next = p;                                               //������
		pt = p;
		scanf("%s %s %c %d", p->num, p->name, &p->sex, &p->age);
	}
	p->next = NULL;
	p = head;
	scanf("%d", &iage);
	pt = head;
	p = pt;
	if (pt->age == iage)                                                 //ͷ�ڵ��Ƿ����
	{
		p = pt->next;
		head = pt = p;
		find = 1;
	}
	else pt = pt->next;
	while (pt != NULL)                                                   //����û������
	{
		if (pt->age == iage)
		{
			p->next = pt->next;
			find = 1;
		}
		else p = pt;
		pt = pt->next;
	}
	if (!find)                                                           //һֱû�ҵ�
		printf("not find");

	p = head;
	while (p != NULL)
	{
		printf("%4s %8s %c %6d\n", p->num, p->name, p->sex, p->age);
		p = p->next;
	}

	return 0;
}*/




#/*include <stdio.h>

int main()
{
	struct student
	{
		char num[6];
		char name[6];
		float score[3];
		float ave;
	};
	struct student stu[5];
	int i, j;
	float sum = 0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
	fp = fopen("stud", "w");
	for (i = 0; i < 5; i++)
		fprintf(fp, "%s %s %f %f %f %f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);
		          //fprintf�����ļ�ָ����ǰ���м��������ʽ������������ı�����������һ��һ������������������ʽͬprintf��scanf(Ҫ��&��
	return 0;
}*/




/*#include <stdio.h>

int main()
{
	struct student
	{
		char num[6];
		char name[6];
		float score[3];
		float ave;
	};
	struct student stu[5],t;
	int i, j;
	float sum = 0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4 - i; j++)
			if (stu[j].ave > stu[j + 1].ave)         //����
			{
				t = stu[j];                          //���Խ���һ�����ṹ��Ļ�����ֻҪ�м���Ҳ�ǽṹ���������
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
	fp = fopen("stu_sort", "w");
	for (i = 0; i < 5; i++)
		fprintf(fp, "%s %s %f %f %f %f\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].ave);

	return 0;
}*/



/*#include <stdio.h>

int main()
{
	struct student
	{
		char num[6];
		char name[6];
		float score[3];
		float ave;
	};
	struct student stu[5], t, stu_new, s[6];
	int i, j;
	float sum = 0;
	FILE* fp;
	for (i = 0; i < 5; i++)
		scanf("%s %s %f %f %f", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	for (i = 0; i < 5; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].ave = sum / 3;
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4 - i; j++)
			if (stu[j].ave > stu[j + 1].ave)
			{
				t = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = t;
			}
	scanf("%s %s %f %f %f", stu_new.num, stu_new.name, &stu_new.score[0], &stu_new.score[1], &stu_new.score[2]);
	stu_new.ave = (stu_new.score[0] + stu_new.score[1] + stu_new.score[2]) / 3;
	s[0] = stu_new;
	for (i = 1; i < 6; i++)
		s[i] = stu[i - 1];
	for(i=0;i<5;i++)
		for (j = 0; j < 5 - i; j++)
			if (s[j].ave < s[j + 1].ave)
			{
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
	fp = fopen("stu_new", "w");
	for (i = 0; i < 6; i++)
		fprintf(fp, "%s %s %f %f %f %f\n", s[i].num, s[i].name, s[i].score[0], s[i].score[1], s[i].score[2], s[i].ave);

	return 0;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	char name[6];
	int score[3];
};

void print(struct student stu[])
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%s %s %d %d %d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
}

int main()
{
	struct student stu[5];
	int i;
	for (i = 0; i < 5; i++)
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	printf("\n");
	print(stu);

	return 0;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	char name[6];
	int score[3];
};

void input(struct student stu[5])
{
	int i;
	for (i = 0; i < 5; i++)
		scanf("%s %s %d %d %d", stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
	printf("\n");
}

void print(struct student stu[5])
{
	int i;
	for (i = 0; i < 5; i++)
		printf("%s %s %d %d %d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
}

int main()
{
	struct student stu[5];
	input(stu);
	print(stu);

	return 0;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	struct student* next;                                         //��Ա�����ָ�������Ƕ���Ľṹ������ 
};

struct student* del(struct student* head, char num[6])            //������Ƿ���һ��ָ��ֵ�ĺ��������ص���ͷָ�룬�������ܴ�����������
{
	struct student* p1 = head, * p2 = head;                       //���������ṹ�����͵�ָ��
	if (head == NULL)                                             //������������
		printf("empty list!!");
	while (p1->num != num&&p1->next!=NULL)                        //������Ŀ�Ľ�㲢�ҵ�ǰ����δ����
		{
			p2 = p1;                                              //p2ָ�����p1��p1�ƶ�
			p1 = p1->next;
		}
	if (num == p1->num)                                           //����ҵ��ˣ����ϸ�ѭ��������λ��
	{
		if (p1 == head)                                           //���Ŀ�Ľ����ͷ��㣨����λ�ã�����ͷָ��
			head = p1->next;
		else p2->next = p1->next;                                 //��ǰ���ָ��ת�����������һ��ָ��
	}
	else printf("no exist!!");                                    //���û�ҵ�

	return head;
}*/




/*#include <stdio.h>

struct student
{
	char num[6];
	struct student* next;
};

struct student* insert(struct student* head, struct student* stud)
{
	struct student* p0 = stud->next, * p1 = head, * p2 = head;
	while (p1->num < p0->num&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (head->num > p0->num)
	{
		p0->next = head;
		head = p0;
	}
	else if (p1->next = NULL)
	{
		p1->next = p0;
		p0->next = NULL;
	}
	else 
	{
		p2->next = p0;
		p0->next = p1;
	}

	return head;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct student
{
	long num;
	float score;
	struct student* next;
};
int n;

struct student* creat()
{
	struct student* head, * p1, * p2;
	n = 0;
	p1 = p2 = (struct student*)malloc(sizeof(struct student));                      //������һ�����
	scanf("%ld %f",&p1->num, &p1->score);
	head = NULL;
	while (p1->num != 0)                                                            //����ʲôʱ�����ѭ�������ڶ�̬�����ڴ�ռ�
	{
		n++;
		if (n == 1)head = p1;
		else p2->next = p1;                                                         //���������������
		p2 = p1;
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf("%ld %f",&p1->num, &p1->score);
	}
	p2->next = NULL;
	return head;
}

void print(struct student* head)
{
	struct student* p = head;
	while (p!= NULL)
	{
		printf("%ld %f\n", p->num, p->score);
		p = p->next;
	}
}

struct student* del(struct student* head, long del_num)
{
	struct student* p1 = head, * p2 = head;
	if (head == NULL)
	{
		printf("empty list!!");
		return head;
	}
	else
	{
		while (p1->num != del_num && p1->next != NULL)
		{
			p2 = p1;
			p1 = p1->next;
		}
		if (p1->num == del_num)                                      //�ҵ���ʱ��
		{
			if (p1==head)
				head = p1->next;
			else
				p2->next = p1->next;
		}
		else 
			printf("no exist!!");
	}

	return head;
}

struct student* insert(struct student* head, struct student *stu)
{
	struct student* p1 = head, * p2 = head, * p0 = stu;
	while (p1->num < p0->num&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (p1->num> p0->num)                                                  //�ڵ�ǰ�����д�����������������ų��˰��½������������
	{
		if (head == p1)
		{
			head = p0;
			p0->next = p1;
		}
		else
		{
			p2->next = p0;
			p0->next = p1;
		}
	}
	else
	{
		p1->next = p0;
		p0->next = NULL;
	}
	
	return head;
}

int main()
{
	struct student* head, * stu;
	long del_num = 0;
	head = creat();
	print(head);
	scanf("%ld", &del_num);
	while (del_num != 0)
	{
		head = del(head, del_num);  
		print(head);
		scanf("%ld", &del_num);
	}
	stu = (struct student*)malloc(sizeof(struct student));
	scanf("%ld %f", &stu->num, &stu->score);
	while (stu->num != 0)
	{
		head = insert(head, stu);
		print(head);
		stu = (struct student*)malloc(sizeof(struct student));                  //���ѭ�������½����Ҫ���·���һ����̬�ڴ�ռ����������������ռ���������ݾͱ�������
		scanf("%ld %f", &stu->num, &stu->score);
	}
	
	return 0;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct student
{
	long num;
	int score;
	struct student* next;
};

struct student* creat()
{
	struct student* p1, * p2, * head;
	int n = 1;
	p1 = p2 = (struct student*)malloc(sizeof(struct student));
	scanf("%ld %d", &p1->num, &p1->score);                                      //����������������Ҫ��ld,ָ�����ǰ��Ҫ�ӵ�ַ����
	head = NULL;
	while (p1->num != 0)
	{
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf("%ld %d", &p1->num, &p1->score);
		n++;
	}
	p2->next = NULL;

	return head;
}

struct student* insert(struct student* heada, struct student* headb)
{
	struct student* pa1, * pa2, * pb1, * pb2;
	pa1 = pa2 = heada;
	pb1 = pb2 = headb;
	while (pa1->next != NULL || (pa1 == NULL && pb1 != NULL))
	{
		while (pb1->num > pa1->num && pa1->next != NULL)
		{
			pa2 = pa1;
			pa1 = pa1->next;
		}
		if (pb1->num < pa1->num)                                      //˼·�ǰ�b����Ľ��ֱ���뵽a������
		{
			if (pa1 == heada)
				heada = pb1;
			else pa2->next = pb1;
			pb1 = pb1->next;                                          //pb1��b���������a����Ľ��Ƚ�
			pb2->next = pa1;                                          //pb2����pb1��λ�ú͵�ǰ����������
	        pa2 = pb2;                                                //pa2��Ҫ�ڵ�ǰ��㱣�棬֮������Ƚϣ��п��ܻ��������м����
			pb2 = pb1;                                                //pb2�����Ӻ�֮��ص�b�и���pb1
		}
	}
	if (pb1 != NULL && pb1->num > pa1->num && pa1->next == NULL)      //���a���Ѿ������˵���b�л�û�н�����˵������b���е����н�㶼����a�У�ֱ�ӽ���
		pa1->next = pb1;

	return heada;
}

void print(struct student* headab)
{
	struct student* p = headab;
	while (p != NULL)                                                       //����д����p������p->next,�������ܰ����һ�����Ҳ������
	{
		printf("%ld %d\n", p->num, p->score);
		p = p->next;
	}
}

int main()
{
	struct student* heada, * headb, * headab;
	int sum = 0;
	heada = creat();
	headb = creat();
	headab = insert(heada, headb);
	print(headab);
	
	return 0;
}*/



/*#include <stdio.h>

struct student
{
	int num;
	char name[6];
	struct student* next;
}a[4], b[5];

struct student* del(struct student a[4], struct student b[5])
{
	struct student* pa1, * pa2, * pb1, * pb2, * head = a;
	pa1 = pa2 = a;
	while (pa1->next != NULL)
	{
		pb1 = pb2 = b;
		while (pb1->next != NULL)
		{
			if (pa1->num == pb1->num)
			{
				pa1 = pa1->next;                                       //ע��pa1/ָ��ÿһ�εı仯��λ�ñ���
				pa2->next = pa1;
				break;
			}
			pb2 = pb1;
			pb1 = pb1->next;
		}
		if (pb1->next == NULL)
		{
			pa2 = pa1;
			pa1 = pa1->next;
		}
	}

	return head;
}

int main()
{
	struct student* head, * p;
	int i;
	for (i = 0; i < 4; i++)
		scanf("%d %s", &a[i].num, a[i].name);
	for (i = 0; i < 4; i++)
	{
		if (i < 3)
			a[i].next = &a[i + 1];
		else a[i].next = NULL;
	}
	for (i = 0; i < 5; i++)
		scanf("%d %s", &b[i].num, b[i].name);
	for (i = 0; i < 5; i++)
	{
		if (i < 4)
			b[i].next = &b[i + 1];
		else b[i].next = NULL;
	}
	printf("\n");
	head = del(a, b);
	p = head;
	while (p != NULL)
	{
		printf("%d %s\n", p->num, p->name);
		p = p->next;
	}

	return 0;
}*/



/*#include <stdio.h>
#include <stdlib.h>

struct student
{
	char num[6];
	char name[6];
	char sex;
	int age;
	struct student* next;
};

struct student* creat(int n)
{
	struct student* head, * p1, * p2;
	int i;
	head = p1 = p2 = (struct student*)malloc(sizeof(struct student));
	scanf("%s %s %c %d", p1->num, p1->name, &p1->sex, &p1->age);
	for (i = 0; i < n-1; i++)
	{
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf("%s %s %c %d", p1->num, p1->name, &p1->sex, &p1->age);
		p2->next = p1;
		p2 = p1;
	}
	p1->next = NULL;

	return head;
}

struct student* del(struct student* head, int year)
{
	struct student* p1, * p2;
	p1 = p2 = head;
	while (p1->next != NULL)
	{
		if (p1->age == year)
		{
			p1 = p1->next;
			p2->next = p1;
		}
		else
		{
			p2 = p1;
			p1 = p1->next;
		}
	}
	if (p1->next == NULL && p1->age == year)                              //���ǵ����һ�����Ҳ��Ҫ��ɾ�������
		p2->next = NULL;

	return head;
}

void print(struct student* head)
{
	struct student* p;
	p = head;
	while (p != NULL)
	{
		printf("%s %s %c %d\n", p->num, p->name, p->sex, p->age);
		p = p->next;
	}
}

int main()
{
	struct student* head;
	int n = 0, year = 0;
	scanf("%d", &n);
	head = creat(n);
	print(head);
	scanf("%d", &year);
	head = del(head, year);
	print(head);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	char str[20];
	gets_s(str);
	strupr(str);
	fp = fopen("test", "w");
	fputs(str, fp);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fpa, * fpb, * fp;
	int i, j;
	char str1[30], str2[20], t = 0;
	gets_s(str1);
	gets_s(str2);
	printf("%d %d\n", strlen(str1), strlen(str2));
	fpa = fopen("A", "w");
	fpb = fopen("B", "w");
	fputs(str1, fpa);
	fputs(str2, fpb);
	fclose(fpa);
	fclose(fpb);
	fpa = fopen("A", "r");
	fpb = fopen("B", "r");
	fgets(str1, strlen(str1)+1, fpa);                //�ֳ�û�����Ƿŵ��ַ�������Ҫ������ֹ����\0���������һ���ַ����ױ���©�����¼���ֳ�+1
	fgets(str2, strlen(str2)+1, fpb);
	fclose(fpa);
	fclose(fpb);
	strcat(str1, str2);
	printf("%s\n", str1);
	scanf("ok");
	for(i=0;i<strlen(str1)-1;i++)
		for (j = 0; j < strlen(str1) - 1 - i; j++)
			if (str1[j] > str1[j + 1])
			{
				t = str1[j];
				str1[j] = str1[j + 1];
				str1[j + 1] = t;
			}
	fp = fopen("C", "w");
	fputs(str1, fp);
	fclose(fp);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

struct employee
{
	char num[6];
	char name[6];
	char sex;
	int age;
	char addr[20];
	int salary;
	char health[8];
	char level[10];
};

struct worker
{
	char name[6];
	int salary;
};

int main()
{
	struct employee people[4];
	struct worker employ[4];
	int i;
	FILE* fp;
	fp = fopen("employee.txt", "r");
	for (i = 0; i < 4; i++)
		fscanf(fp, "%s %s %c %d %s %d %s %s", people[i].num, people[i].name, &people[i].sex, &people[i].age, people[i].addr, &people[i].salary, people[i].health, people[i].level);
	for (i = 0; i < 4; i++)
		printf("%s %s %c %d %s %d %s %s\n", people[i].num, people[i].name, people[i].sex, people[i].age, people[i].addr, people[i].salary, people[i].health, people[i].level);
	for (i = 0; i < 4; i++)
	{
		strcpy(employ[i].name, people[i].name);                                    //�ַ�����֮�䴫�����ݲ�Ҫ��ָ���˼�룬ֱ��ʹ���ַ����麯�����ַ������ƺ�����������ʱ��Ҳ������
		employ[i].salary = people[i].salary;
	}
	printf("\n");
	for (i = 0; i < 4; i++)
		printf("%s %d\n", employ[i].name, employ[i].salary);
	fclose(fp);
	fp = fopen("worker", "w");
	for (i = 0; i < 4; i++)
		fprintf(fp, "%s %d\n", employ[i].name, employ[i].salary);
	fclose(fp);

	return 0;
}*/




/*#include <stdio.h>
#include <string.h>

struct worker
{
	char name[6];
	int salary;
};

int main()
{
	struct worker employee[4];
	int i, n = 4;
	char name[6];
	FILE* fp;
	fp = fopen("worker", "r+");
	for (i = 0; i < 4; i++)
		fscanf(fp, "%s %d", employee[i].name, &employee[i].salary);
	for (i = 0; i < 4; i++)
		printf("%s %d\n", employee[i].name, employee[i].salary);
	fputc('\n', fp);
	gets_s(name);
	for (i = 0; i < 4; i++)
		if (strcmp(employee[i].name, name) == 0)
		{
			employee[i] = employee[i + 1];
			n--;
		}
	for (i = 0; i < n; i++)
		printf("%s %d\n", employee[i].name, employee[i].salary);
	for (i = 0; i < n; i++)
		fprintf(fp, "%s %d\n", employee[i].name, employee[i].salary);
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[10];
	int i, j;
	FILE* fp;
	fp = fopen("words", "r");
	while (fscanf(fp, "%s", str) != EOF)
	{
		strupr(str);
		puts(str);
	}
	fclose(fp);

	return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main()
{
	char str[3][10];
	int i;
	FILE* fp;
	fp = fopen("words", "w");
	for (i = 0; i < 3; i++)
		gets_s(str[i]);
	for (i = 0; i < 3; i++)
		fputs(str[i], fp);
	fclose(fp);
	fp = fopen("words", "r");
	for (i = 0; i < 3; i++)
		fgets(str[i], strlen(str[i]) + 1, fp);
	for (i = 0; i < 3; i++)
		strupr(str[i]);
	for (i = 0; i < 3; i++)
		puts(str[i]);
	fclose(fp);

	return 0;
}*/




#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%o", &a);                   //%o�ǰ˽�����
	a >> 4;                        //aû�䣬�ǰ�b�����˽��
	c = ~(~0 << 4);
	d = b & c;
	printf("%o,%d\n%o,%d", a, a, d, d);

	return 0;
}