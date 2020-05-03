//Кулитков Л.Е. РИ-280017
#include <iostream>
#include "List.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, "ru");

	List<string> lst;
	lst.add_end("Петров");
	lst.add_end("Сергеев");
	lst.add_end("Яшин");
	lst.add_end("Андреев");
	lst.add_end("Сергеев");
	lst.add_end("Иванов");
	lst.add_end("Петров");
	lst.add_end("Андреев");
	lst.add_end("Лаптев");

	cout << "Наш список:" << endl;

	for (int i = 0; i < lst.getSize(); i++)
	{
		cout << lst[i] << endl;
	}

	//Алгоритм для нахождения в односвязном списке k-го элемента с конца
	int k;
	cout << "\nНомер искомого элемента с конца: "; cin >> k;
	cout << k << "-й элемент списка с конца: " << lst[lst.getSize() - k] << endl;

	//Удаление дубликатов из несортированного связного списка
	lst.del_dups();
	cout << "\nСписок после удаления дубликатов:" << endl;

	for (int i = 0; i < lst.getSize(); i++)
	{
		cout << lst[i] << endl;
	}

	return 0;
}
