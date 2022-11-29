#include <iostream>
#include "Structs.h"
#include <string>
#include <fstream>

int main()
{
	setlocale(LC_ALL, "Russian");
	book* arr = new book[3]{
	{"Name_book-1","Author-1 KAne", 1700, 300, 1000},
	{"Name_book-2","Author-2 TOlne", 1800, 400, 2000},
	{"Name_book-3","Author-3 Vorne", 1900, 500, 3000} };
	int n = 0;
	std::string path1 = "file.txt";
	do
	{
	std::cout << "Выберете один из пунктов в меню:" << '\n';
	std::cout << "1.Вывод информации о книге" << '\n';
	std::cout << "2.Имя автора книги" << '\n';
	std::cout << "3.Запись информации о книге в отдельный файл" << '\n';
	std::cout << "4.Добавьте свою книгу в список" << '\n';
	std::cout << "5.Очистите весь список" << '\n';
	std::cout << "6.Выход" << '\n';
	std::cin >> n;
	if ( n < 1 ||n > 6)
			std::cout << "Ошибка ввода\n";
		else
	system("cls");
	switch(n)
	{
	case 1 :
		std::cout << "1.Вывод информации о книге: " << '\n';
		std::cout << "Введите номер книги : \n";
		std::cin >> n;
		show_book(arr, 4, n);
		break;
	case 2 :
		std::cout << "2.Имя автора книги" << '\n';
		std::cout << "Введите номер книги : \n";
		std::cin >> n;
		std::cout << author_name(arr[n]) << std::endl;
		break;
	case 3 :
		std::cout << "3.Запись информации о книге в отдельный файл" << '\n';
		std::cout << "Введите номер книги : \n";
		std::cin >> n;
		save_book(arr[n], path1);
		break;
	case 4 :
		std::cout << "4.Добавьте свою книгу в список" << '\n';
		add_book(arr, 3);
		break;
	case 5 :
		std::cout << "5.Очистите весь список" << '\n';
		clear_arr(arr);
		break;
	case 6 : break;
	}
	do{
	std::cout << "Чтобы продолжить нажмите 1: ";
	std::cin >> n;
	if (n == 1)
		system("cls");
			else
				std::cout << "Ошибка ввода\n";
	}while (n != 1);
	}while (n != 6);
	
	return 0;
}