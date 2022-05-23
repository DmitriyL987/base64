#include<iostream>
#include <string>
#include "base64.h"

std::string text3 = "SW52YWxpZCBjaGFyYWN0ZXIgaW4gaW5wdXQgc3RyZWFtLgo=";
std::string text2 = "0JjQt9GD0YfQuNGC0YwgQysrINC30LAgMjEg0LTQtdC90Yw==";

int main() {
	std::cout << decode(text2) << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << text3 << std::endl;
	std::cout << decode(text3)<< std::endl;
} 
