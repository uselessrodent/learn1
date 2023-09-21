#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string>


using namespace std;

int main() {
	system("chcp 1251");
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int wigth = 80;

	string descr = "по данным Gantner Group за 1999г.";

	string brand1;
	string brand2;
	string brand3;
	int pr_num1 = 1;
	int pr_num2 = 1;
	int pr_num3 = 1;
	unsigned int sales1 = 10000;
	unsigned int sales2 = 10000;
	unsigned int sales3 = 10000;
	float market_s1 = 10.00f;
	float market_s2 = 10.00f;
	float market_s3 = 10.00f;

	char tmpC1[64];
	printf("Введите фирму 1      количество продуктов 1      годовой объем продаж 1      часть рынка 1 \n");
	scanf_s("%s %d %u %f", tmpC1, 64, &pr_num1, &sales1, &market_s1);
	brand1 = tmpC1;

	char tmpC2[64];
	printf("Введите фирму 2      количество продуктов 2      годовой объем продаж 2      часть рынка 2 \n");
	scanf_s("%s %d %u %f", tmpC2, 64, &pr_num2, &sales2, &market_s2);
	brand2 = tmpC2;

	char tmpC3[64];
	printf("Введите фирму 3      количество продуктов 3      годовой объем продаж 3      часть рынка 3 \n");
	scanf_s("%s %d %u %f", tmpC3, 64, &pr_num3, &sales3, &market_s3);
	brand3 = tmpC3;

	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	printf("|Фирмы - производители СКБД                                                     |\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
	//       15             25                            25                   15
	printf("|Фирма         |Количество продуктов    |Годовой объем продаж    |Часть рынка   |");
	printf("\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand1.c_str());
	for (int i = 0; i < 14 - brand1.length(); i++)
		printf(" ");
	printf("|%d", pr_num1);
	for (int i = 0; i < 24 - to_string(pr_num1).length(); i++)
		printf(" ");
	printf("|%u", sales1);
	for (int i = 0; i < 24 - to_string(sales1).length(); i++)
		printf(" ");
	printf("|%.2f", market_s1);
	for (int i = 0; i < 18 - to_string(market_s1).length(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand2.c_str());
	for (int i = 0; i < 14 - brand2.size(); i++)
		printf(" ");
	printf("|%d", pr_num2);
	for (int i = 0; i < 24 - to_string(pr_num2).length(); i++)
		printf(" ");
	printf("|%u", sales2);
	for (int i = 0; i < 24 - to_string(sales2).length(); i++)
		printf(" ");
	printf("|%.2f", market_s2);
	for (int i = 0; i < 18 - to_string(market_s2).length(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|%s", brand3.c_str());
	for (int i = 0; i < 14 - brand3.size(); i++)
		printf(" ");
	printf("|%d", pr_num3);
	for (int i = 0; i < 24 - to_string(pr_num3).length(); i++)
		printf(" ");
	printf("|%u", sales3);
	for (int i = 0; i < 24 - to_string(sales3).length(); i++)
		printf(" ");
	printf("|%.2f", market_s3);
	for (int i = 0; i < 18 - to_string(market_s3).length(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");

	printf("|Примечание: %s", descr.c_str());
	for (int i = 0; i < wigth - 13 - descr.size(); i++)
		printf(" ");
	printf("|\n");
	for (int i = 0; i < wigth; i++)
		printf("-");
	printf("\n");
}
