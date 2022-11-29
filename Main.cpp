#include <iostream>
#include "Structs.h"
#include <string>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 3;
	book* arr = new book[size]{
	{"Name_book-1","Author-1 KAne", 1700, 300, 1000},
	{"Name_book-2","Author-2 TOlne", 1800, 400, 2000},
	{"Name_book-3","Author-3 Vorne", 1900, 500, 3000} };
	int n = 0;
	std::string path1 = "file.txt";
	do
	{
	std::cout << "�������� ���� �� ������� � ����:" << '\n';
	std::cout << "1.����� ���������� � �����" << '\n';
	std::cout << "2.��� ������ �����" << '\n';
	std::cout << "3.������ ���������� � ����� � ��������� ����" << '\n';
	std::cout << "4.�������� ���� ����� � ������" << '\n';
	std::cout << "5.�������� ���� ������" << '\n';
	std::cout << "6.�����" << '\n';
	std::cin >> n;
	if ( n < 1 ||n > 6)
			std::cout << "������ �����\n";
		else
	system("cls");
	switch(n)
	{
	case 1 :
		std::cout << "1.����� ���������� � �����: " << '\n';
		std::cout << "������� ����� ����� : \n";
		do{
		std::cin >> n;
		if (n < 0 || n > 2)
			std::cout << "������ ������\n";
		else
		show_book(arr, 4, n);
		} while (n > 0 || n < 3);
		system("pause");
		break;
	case 2 :
		std::cout << "2.��� ������ �����" << '\n';
		std::cout << "������� ����� ����� : \n";
		do {
			std::cin >> n;
			if (n < 0 || n > 2)
				std::cout << "������ ������\n";
			else
				std::cout << author_name(arr[n]) << std::endl;
		} while (n > 0 || n < 3);
		system("pause");
		break;
	case 3 :
		std::cout << "3.������ ���������� � ����� � ��������� ����" << '\n';
		std::cout << "������� ����� ����� : \n";
		do {
			std::cin >> n;
			if (n < 0 || n > 2)
				std::cout << "������ ������\n";
			else
				save_book(arr[n], path1);
		} while (n > 0 || n < 3);
		break;
	case 4 :
		std::cout << "4.�������� ���� ����� � ������" << '\n';
		add_book(arr, size);
		break;
	case 5 :
		std::cout << "5.�������� ���� ������" << '\n';
		clear_arr(arr);
		break;
	case 6 : 
		break;
	}
	}while (n != 6);
	
	return 0;
}