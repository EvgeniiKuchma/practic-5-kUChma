#include <iostream>
#include <string>
#include "Structs.h"
#include <fstream>

void show_book(book* &arr,const int length, int n)
{
	for (int i = 0; i < length; i++)
		if (i == n)
		{
			std::cout << arr[n].Name_book << std::endl;
			std::cout << arr[n].Author << std::endl;
			std::cout << arr[n].year_of_publishing << std::endl;
			std::cout << arr[n].Number_of_pages << std::endl;
			std::cout << arr[n].price << std::endl;
		}
};
std::string author_name(book& B)
{
	return B.Author.substr(B.Author.rfind(' ') + 1);
}
void save_book(book& B, std::string path)
{
	std::ofstream out;
	out.open(path, std::ios::out);
	if (out.is_open())
	{
		out << B.Name_book <<'\n';
		out << B.Author << '\n';
		out << B.year_of_publishing << '\n';
		out << B.Number_of_pages << '\n';
		out << B.price << "\n\n";
	}
	else std::cout << "File opening error\n";
	out.close();
}
void add_book(book* &arr, int size)
{
	book* tmp = new book[size + 1];
	for (int i = 0; i < size; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;
	std::cout << "Название: ";
	getline(std::cin, arr[size].Name_book);
	std::cout << '\n';
	std::cout << "Имя: ";
	getline(std::cin, arr[size].Author);
	std::cout << '\n';
	std::cout << "Дата: ";
	std::cin >> arr[size].year_of_publishing;
	std::cout << '\n';
	std::cout << "Страницы: ";
	std::cin >> arr[size].Number_of_pages;
	std::cout << '\n';
	std::cout << "Цена: ";
	std::cin >> arr[size].price;
	std::cout << std::endl;
}
void  clear_arr(book* &arr)
{
	delete[] arr;
}