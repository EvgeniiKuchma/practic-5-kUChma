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
void add_book(book arr[], const int size)
{
	book* tmp = new book[size + 1]{};
	for (int i = 0; i < size; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;
	getline(std::cin, arr[size].Name_book);
	getline(std::cin, arr[size].Author);
	std::cin >> arr[size].year_of_publishing;
	std::cin >> arr[size].Number_of_pages;
	std::cin >> arr[size].price;
}
void  clear_arr(book* &arr, const int length)
{
	delete[] arr;
}