#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Выполнила  студентка группы УЗС-111 Короткова Анастасия Игоревна\n";
	cout << "Программа для поиска простых чисел\n";

	int r;
	do
	{
		int n1, n2;

		cout << "Введите границы интервала: ";
		cin >> n1 >> n2;

		while (n1 <= n2)
		{
			int k = 2;
			bool is_simple = true;
			//необходимо проверить только числа, который хотя бы в 2 раза меньше
			while (k <= n1 / 2)
			{
				if (n1 % k == 0)
				{
					is_simple = false;
				}
				k++;
			}
			if (is_simple)
			{
				cout << n1 << " простое\n";
			}
			n1++;
		}
		cout << "Повторить(1)?: ";
		cin >> r;
	}
	while (r == 1);

	system("pause");
}
