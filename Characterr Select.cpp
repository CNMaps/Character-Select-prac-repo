#include <iostream>
#include <string>

using namespace std;


int main() {

	std::string name;
	std::string favthing;
	std::string str;
	std::string wk;


	while (name.empty()) {
		std::cout << "Enter your name: ";
		std::getline(std::cin, name);
	}

	std::cout << "Your name is: " << name << "\n" << "\n";

	while (favthing.empty()) {
		std::cout << "Enter your favourite thing, " << name << ": ";
		std::getline(std::cin, favthing);
	}

	std::cout << "Your favourite thing is: " << favthing << "\n" << "\n";

	while (str.empty()) {
		std::cout << "Enter your greatest strength: ";
		std::getline(std::cin, str);
		std::cout << "\n";
	}

	while (wk.empty()) {
		std::cout << "Enter your weakness: ";
		std::getline(std::cin, wk);
		std::cout << "\n";
	}

	std::cout << "As the Hero, " << name << "." << " You have been called unto this world to save us from the evil lord, " << wk << "." << " Use your "

	return 0;
}