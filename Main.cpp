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
	show_book(arr, 4, 1);
	std::cout << "\n";
	std::cout << author_name(arr[1]) << std::endl;
	std::string path1 = "file.txt";
	save_book(arr[2], path1);
	add_book(arr, 3);
	show_book(arr, 4, 3);
	clear_arr(arr, 4);
	show_book(arr, 4, 1);
	return 0;
}