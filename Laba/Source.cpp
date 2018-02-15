
#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, exit;
	do
	{
		cout << "number exemple: ";
		cin >> n;
		cout << endl;
		switch (n)
		{
		case 1:
		{
			/*1.Разработать программу, реализующую обработку числового двухмерного произвольного массива тремя методами сортировки (пузырьком, вставкой, выбором).*/
			int a[5][5];
			int b[5][5];
			int c[5][5];
			int i, j, m, k;
			int temp;
			//пузырьковый
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					a[i][j] = 5 + rand() % 95;
					b[i][j] = 5 + rand() % 95;
					c[i][j] = 5 + rand() % 95;
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "-----------------------------\n";
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					cout << b[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "-----------------------------\n";
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					cout << c[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "-----------------------------\n";
			cout << "-----------------------------\n";
			cout << "сортировка пузырьковым методом" << endl;
			for (k = 0;k < 5;k++)
			{
				for (i = 0;i < 5;i++)
				{
					for (j = 4;j > i;j--)
					{
						if (a[k][j] < a[k][j - 1])
						{
							m=a[k][j];
							a[k][j] = a[k][j - 1];
							a[k][j - 1] = m;
						}
					}
				}
			}
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					cout << a[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "-----------------------------\n";
			cout << "-----------------------------\n";
			cout << "сортировка методом выбором" << endl;
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 4;j++)
				{
					m = j;
					for (k = j + 1;k < 5;k++)
					{
						if (b[i][k] < b[i][m])
							m = k;
					}
					temp = b[i][j];
					b[i][j] = b[i][m];
					b[i][m] = temp;
				}
			}
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					cout << b[i][j] << "\t";
				}
				cout << endl;
			}
			cout << "-----------------------------\n";
			cout << "-----------------------------\n";
			cout << "сортировка методом вставки" << endl;
			for (i = 0;i < 5;i++)
			{
				for (j = 1;j < 5;j++)
				{
					int value = c[i][j];
					int index = j;
					while ((index > 0) && (c[j][index - 1] > value))
					{
						c[j][index] = value;
					}
				}
			}
			for (i = 0;i < 5;i++)
			{
				for (j = 0;j < 5;j++)
				{
					cout << c[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;
		default:cout << "no exemple" << endl;
			break;
		}
		cout << "continue? 1-Yes 2-No: ";
		cin >> exit;
		cout << endl;
	} while (exit == 1);
}