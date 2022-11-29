#pragma once

#include <iostream>
#include <string>

struct book
{
	std::string	Name_book;
	std::string Author;
	int year_of_publishing = 0;
	int Number_of_pages = 0;
	int price = 0;
};

void show_book(book* &arr,const int length, int n);
std::string author_name(book& B);
void save_book(book& B, std::string path);
void add_book(book* &arr, int length);
void clear_arr(book*& arr);