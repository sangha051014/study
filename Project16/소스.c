////#include<stdio.h>
////
////int main(void)
////{
////	int total = 0, num = 1;
////
////
////	while (num != 0)
////	{
////		printf("���� �Է�(0 to quit) : ");
////		scanf_s("%d", &num);
////		total += num;
////
////	}
////
////	printf("�հ� : %d \n", total);
////
////	return 0;
////}
//#include<stdio.h>
//
//int main(void)
//{
//	int total = 0, num = 1;
//
//	printf("���� �Է�(0 to quit) : ");
//	scanf_s("%d", &num);
//	total += num;
//
//	while (num != 0)
//	{
//		printf("���� �Է�(0 to quit) : ");
//		scanf_s("%d", &num);
//		total += num;
//	}
//	printf("�հ� : %d \n", total);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	int total = 0, num = 0;
//
//	do
//	{
//		total += num;
//		num = num + 2;
//	} while (num <= 100);
//
//	printf("�հ� : %d ", total);
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main(void)
//{
//	int cur = 2;
//	int is = 0;
//
//	do
//	{
//		is = 1;
//
//		
//			do
//			{
//				printf("%d x %d = %d \n", cur, is, cur * is);
//				is++;
//
//			} while (is < 10);
//
//			cur++;
//
//
//	} while (cur < 10);
//	
//	return 0;
//
//}
//#include<stdio.h>
//
//int main(void)
//{
//	int total = 0;
//	int i, num;
//	printf("0���� num������ ����, num��? ");
//	scanf_s("%d", &num);
//
//	for (i = 0; i <= num; i++)
//		total += i;
//
//	printf("0���� %d������ ������ : %d \n", num, total);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	double total = 0.0;
//	double input = 0.0;
//	int num=0;
//
//	for (; input >=0.0 ; )
//	{
//		total += input;
//		printf("�Ǽ� �Է�(minus to quit) : ");
//		scanf_s("%lf", &input);
//		num++;
//	}
//	printf("��� : %f \n", total / (num - 1));
//	return 0;
//}

//#include<stdio.h>
//
//int main(void)
//{
//	
//	int num1, num2;
//	int total;
//	
//	printf("�� ���� �Է� : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	for (total = 0; num1 <= num2; num1++)
//	{
//		total += num1;
//	}
//
//	printf("�հ� : %d \n", total);
//	return 0;
//
//
//	
//} 
//#include<stdio.h>
//int main(void)
//{
//	int i, result=1, num;
//
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//
//	for (i = 1; i <= num; i++)
//		result *= i;
//
//	printf("%d \n", result);
//}
//#include<stdio.h>
//
//int main(void)
//{
//	int num;
//
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//
//	if(num < 0)
//		printf("�Է� ���� 0���� �۴� \n");
//	if (num > 0)
//		printf("�Է� ���� 0���� ũ�� \n");
//	if (num == 0)
//		printf("�Է� ���� 0�̴�. \n");
//
//	return 0;
//
//}

//#include<stdio.h>
//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.���� 2.���� 3.���� 4.������ \n");
//	printf("����:");
//	scanf_s("%d", &opt);
//	printf("�ΰ��� �Ǽ� �Է� : \n");
//	scanf_s("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if (opt == 4)
//		result = num1 / num2;
//
//	printf("��� ��� : %f \n", result);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int num;
//
//	for (num = 1; num < 100; num++)
//	{
//		if (num % 2== 0 || num % 5 == 0)
//			printf("2 �Ǵ� 5�� ��� : %d \n",num);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int opt;
//	double num1, num2;
//	double result;
//
//	printf("1.���� 2.���� 3.���� 4.������ : ");
//	scanf_s("%d", &opt);
//	printf("�� ���� �Ǽ� �Է�: \n");
//	scanf_s("%lf %lf", &num1, &num2);
//
//	if (opt == 1)
//		result = num1 + num2;
//	else if (opt == 2)
//		result = num1 - num2;
//	else if (opt == 3)
//		result = num1 * num2;
//	else
//		result = num1 / num2;
//	
//	printf("��� ��� : %f \n", result);
//
//	return 0;
//
//}

//#include<stdio.h>
//int main(void)
//{
//	int num, abs;
//	
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//
//	abs = num > 0 ? num : num * (-1);
//	printf("���� : %d \n", abs);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//	int num = 0;
//	
//
//	for (num = 1; num < 100; num++)
//	{
//		if (num % 7 == 0)
//			printf("%d \n", num);
//		else if (num % 9 == 0)
//			printf("%d \n", num);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int num1, num2, result;
//	printf("�� ���� �Է�:");
//	scanf_s("%d %d", &num1, &num2);
//
//	if (num1 > num2)
//		result = num1 - num2;
//	else if (num1 < num2)
//		result = num2 - num1;
//	
//	printf("���� ��� : %d \n", result);
//
//	return 0;
//
//}
//#include<stdio.h>
//int main(void)
//{
//	int kor, eng, mat,avg;
//
//	printf("���� ���� �Է� : ");
//	scanf_s("%d", &kor);
//	printf("���� ���� �Է� : ");
//	scanf_s("%d", &eng);
//	printf("���� ���� �Է� : ");
//	scanf_s("%d", &mat);
//
//	avg = (kor + eng + mat) / 3;
//	if (avg >= 90)
//		printf("����� ������ A�Դϴ�. \n");
//	else if (avg >= 80)
//		printf("����� ������ B�Դϴ�. \n");
//	else if (avg >= 70)
//		printf("����� ������ C�Դϴ�. \n");
//	else if (avg >= 50)
//		printf("����� ������ D�Դϴ�. \n");
//	else
//		printf("����� ������ F�Դϴ�. \n");
//
//	return 0;
//
//
//}
//#include<stdio.h>
//int main(void)
//{
//	int num1, num2, result;
//
//	printf("�� ���� �Է� : ");
//	scanf_s("%d %d", &num1, &num2);
//
//	result = (num1 < num2) ? num2 - num1 : num1 - num2;
//	printf("��� ��� : %d \n", result);
//
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int sum = 0, num = 0;
//
//	while (1)
//	{
//		sum += num;
//		if (sum > 5000)
//			break;
//		num++;
//	}
//	
//	printf("sum: %d\n", sum);
//	printf("sum: %d\n", num);
//	return 0;
//}
//#include<stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("start! ");
//
//	for (num = 1; num < 20; num++)
//	{
//		if (num % 2 == 0 || num % 3 == 0)
//			continue;
//		printf("%d ", num);
//	}
//
//		
//		printf("end! \n");
//		return 0;
//#include<stdio.h>
//
//int main(void)
//{
//	int i, j;
//
//	for (i = 1; i < 10; i++)
//	{
//		if (i % 2 != 0)
//			continue;
//		for (j = 1; j <= i; j++)
//		{
//			if (j > i)
//				break;
//			printf("%d * %d = %d \n", i, j, i * j);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int A, Z, result;
//	
//	
//	for (A = 0; A < 10; A++)
//	{
//		for (Z = 0; Z < 10; Z++)
//		{
//			if (A == Z)
//				continue;
//			result = (A * 10 + Z) + (Z * 10 + A);
//				
//			if(result==99)
//				printf("A: %d, Z:%d \n", A, Z);
//
//			
//		}
//		printf("\n");
//
//	}
//	return 0;
//	
//}
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	printf("5������ ���� �Է�:");
//	scanf_s("%d", &num);
//
//	switch (num)
//	{
//	case 1:
//		printf("1�� one \n");
//		break;
//	case 2:
//		printf("2�� two \n");
//		break;
//	case 3:
//		printf("3�� three \n");
//		break;
//	case 4:
//		printf("4�� four \n");
//		break;
//	case 5:
//		printf("5�� five \n");
//		break;
//	default:
//		printf("I don't know! \n");
//	
//	}
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	char sel;
//	printf("M ����, A ����, E ����");
//	printf("�Է� : ");
//	scanf_s("%c", &sel);
//
//	switch (sel)
//	{
//	case 'M':
//	case 'm':
//		printf("Morning \n");
//		break;
//	case 'A':
//	case 'a':
//		printf("Afternoon \n");
//		break;
//	case 'E':
//	case 'e':
//		printf("Evening \n");
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	printf("�ڿ��� �Է�: ");
//	scanf_s("%d", &num);
//
//	if (num == 1)
//		goto ONE;
//	else if (num == 2)
//		goto TWO;
//	else
//		goto OTHER;
//ONE:
//	printf("1�� �Է��ϼ̽��ϴ� \n");
//	goto END;
//TWO:
//	printf("2�� �Է��ϼ̽��ϴ� \n");
//	goto END;
//OTHER:
//	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̽��ϴ� \n");
//END :
//	return 0;
//	
//}
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	printf("���� �Է� : ");
//	scanf_s("%d", &n);
//
//	switch (n/10)
//	{
//	case 0:
//		printf("0�̻� 10�̸�");
//		break;
//	case 1:
//		printf("10�̻� 20�̸�");
//		break;
//	case 2:
//		printf("20�̻� 30�̸�");
//		break;
//	default:
//		printf("30�̻�");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int Add(int num1, int num2)
//{
//	return num1 + num2;
//}
//void ShowAddResult(int num)
//{
//	printf("���� ��� ���: %d \n",num);
//}
//int ReadNum(void)
//{
//	int num;
//	scanf_s("%d", &num);
//	return num;
//}
//void HowToUseProg(void)
//{
//	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ� \n");
//	printf("��! �׷� �� ���� ������ �Է��ϼ��� \n");
//}
//int main(void)
//{
//	int num1, num2, result;
//	HowToUseProg();
//	num1 = ReadNum();
//	num2 = ReadNum();
//	result = Add(num1, num2);
//	ShowAddResult(result);
//	return 0;
//}
//#include <stdio.h>
//int NumberCompare(int num1, int num2);
//
//int main(void)
//{
//	printf("3�� 4�߿��� ū ���� %d�̴� \n", NumberCompare(3, 4));
//	printf("7�� 2�߿��� ū ���� %d�̴� \n", NumberCompare(7, 2));
//	return 0;
//}
//
//int NumberCompare(int num1, int num2)
//{
//	if (num1 > num2)
//		return num1;
//	else
//		return num2;
//
//}
//#include <stdio.h>
//int abscompare(int num1, int num2);
//int getabs(int num);
//
//int main(void)
//{
//	int num1, num2;
//	printf("�ΰ��� ���� �Է�: ");
//	scanf_s("%d %d", &num1, &num2);
//	printf("%d�� %d�� ������ �� ū ������ %d�̴� \n",num1,num2, abscompare(num1, num2));
//	return 0;
//}
//
//int abscompare(int num1, int num2)
//{
//	return (getabs(num1) > getabs(num2)) ? num1 : num2;
//	
//}
//int getabs(int num)
//{
//	return (num > 0) ? num : num * (-1);
//}
//#include <stdio.h>
//int Maxnum(int num1, int num2, int num3)
//{	
//	if (num1 > num2 && num1 > num3)
//		return num1;
//	else if (num2 > num3)
//		return num2;
//	else
//		return num3;		
//		
//}
//int Minnum(int num1, int num2, int num3)
//{
//	if (num1 < num2 && num1 < num3)
//		return num1;
//	else if (num2 < num3)
//		return num2;
//	else
//		return num3;
//}
//
//int main(void) 
//{	
//	int num1, num2, num3;
//	printf("������ �Է��Ͻÿ�: ");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("%d, %d, %d �� ���� ū ������ %d�̴�. \n", num1, num2, num3, Maxnum(num1,num2,num3));
//	printf("%d, %d, %d �� ���� ���� ������ %d�̴�. \n", num1, num2, num3, Minnum(num1, num2, num3));
//	return 0;
//
//}
//#include <stdio.h>
//double CelToFah(double c)
//{
//	return c * 1.8 + 32;
//	 
//}
//double FahToCel(double f)
//{
//	return (f - 32) / 1.8;
//}
//
//double main(void)
//{
//	double c,f;
//
//	printf("���� �µ� �Է� : ");
//	scanf_s("%lf", &c);
//	printf("%lf \n", CelToFah(c));
//	printf("ȭ�� �µ� �Է� : ");
//	scanf_s("%lf", &f);
//	printf("%lf \n", FahToCel(f));
//
//	return 0;
//}
//#include<stdio.h>
//int fibonacci(int num)
//{
//	int n1 = 0, n2 = 1, result;
//	if (num == 1) {
//		printf("0");
//		return 0;
//	}
//	else if (num >= 2) {
//		printf("0, 1, ");
//	}
//
//	for (int i = 0; i < num-2; i++)
//	{
//		result = n1 + n2;
//		printf("%d, ", result);
//		n1 = n2;
//		n2 = result;
//	}
//	
//
//}
//
//int main(void)
//{
//	int num;
//	printf("���� �Է� : ");
//	scanf_s("%d", &num);
//	fibonacci(num);
//}
//#include<stdio.h>
//
//void ShowFIbo(int num)
//{
//	int f1 = 0, f2 = 1, f3, i;
//	
//	if (num == 1)
//		printf("%d", f1);
//	else
//		printf("%d, %d, ", f1, f2);
//	for (i = 0; i < num - 2; i++)
//	{
//		f3 = f1 + f2;
//		printf("%d, ", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//	
//}
//int main(void)
//{
//	int n;
//	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ���� : ");
//	scanf_s("%d", &n);
//
//	ShowFIbo(n);
//	return 0;
//}
//#include <stdio.h>
//
//int SimpleFuncOne(void)
//{
//	int num = 10;
//	num++;
//	printf("SimpleFuncOne num : %d \n", num);
//	return 0;
//}
//int SimpleFuncTwo(void)
//{
//	int num1 = 20;
//	int num2 = 30;
//	num1++, num2--;
//	printf("num1 & num2 : %d %d \n", num1, num2);
//	return 0;
//}
//int main(void)
//{
//	int num = 17;
//	SimpleFuncOne();
//	SimpleFuncTwo();
//	printf("main num : %d", num);
//	return 0;
//}
//#include<stdio.h>
//void Add(int val);
//int num;
//
//int main(void)
//{
//	printf("num: %d \n", num);
//	Add(3);
//	printf("num: %d \n", num);
//	num++;
//	printf("num: %d \n", num);
//	return 0;
//
//}
//void Add(int val)
//{
//	num += val;
//}
//#include <stdio.h>
//
//void SimpleFunc(void)
//{
//	static int num1 = 0;
//	int num2 = 0;
//	num1++, num2++;
//	printf("static : %d, local : %d \n", num1, num2);
//
//}
//
//int main(void)
//{
//	int i;
//	for (i = 0; i < 3; i++)
//		SimpleFunc();
//	return 0;
//}

#include<stdio.h>

int total = 0;

int AddtoTotal(int num)
{
	static total = 0;
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է�%d : ", i + 1);
		scanf_s("%d", num);
		printf("���� : %d \n", AddtoTotal(num));
	}
	return 0;
}