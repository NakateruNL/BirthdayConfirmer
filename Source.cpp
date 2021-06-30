#include <iostream>
#include <string.h>
#include <conio.h>

int main() {
	int newAge;
	std::cout << "What's your age?\n";
	std::cin >> newAge;


	if (newAge < 18) {
		std::cout << "Fuck you bitch!\n";
		exit(1);
	}

	int Day;
	int Month;
	int Year;
	std::string slash = "/";

dayline:
	std::cout << "Enter your Date of birth in this format: DD/MM/YYYY\n"; //2010
	std::cin >> Day;

	if (Day > 31) {
		std::cout << "Day can't be higher than 31!\n";
		goto dayline;
	}

	std::cout << Day << slash;

monthline:
	std::cin >> Month;

	if (Month > 12) {
		std::cout << "Month can't be higher than 12!\n";
		std::cout << Day << slash;
		goto monthline;

	}

	std::cout << Day << slash << Month << slash;

yearline:
	std::cin >> Year;
	if (Year > 2021) {
		std::cout << "Year can't be higher than 2021!\n";
		std::cout << Day << slash << Month << slash;
		goto yearline;
	}


	if (Year > 2003) {
		std::cout << "You are not 18!";
		exit(1);
	}

	int checkAge = 2021 - Year;

	// std::cout << checkAge << " ";

	// std::cout << checkAge << " " << newAge; || TEST FUNCTION
	// std::cout << typeid(checkAge).name() << " " << typeid(Year).name(); || TEST FUNCTION

	if (checkAge != newAge) {
		std::cout << "You are not 18!";
		exit(1);
	}
	else {
		std::cout << "You are " << checkAge << " years old\n";
	}

	int Maand = Month;

	switch (Maand) {
	case 1:
		std::cout << "You are born on: " << Day << " Januari " << Year << "\n";
		break;
	case 2:
		std::cout << "You are born on: " << Day << " February " << Year << "\n";
		break;
	case 3:
		std::cout << "You are born on: " << Day << " Maart " << Year << "\n";
		break;
	case 4:
		std::cout << "You are born on: " << Day << " April " << Year << "\n";
		break;
	case 5:
		std::cout << "You are born on: " << Day << " Mei " << Year << "\n";
		break;
	case 6:
		std::cout << "You are born on: " << Day << " Juni " << Year << "\n";
		break;
	case 7:
		std::cout << "You are born on: " << Day << " Juli " << Year << "\n";
		break;
	case 8:
		std::cout << "You are born on: " << Day << " Augustus " << Year << "\n";
		break;
	case 9:
		std::cout << "You are born on: " << Day << " September " << Year << "\n";
		break;
	case 10:
		std::cout << "You are born on: " << Day << " Oktober " << Year << "\n";
		break;
	case 11:
		std::cout << "You are born on: " << Day << " November " << Year << "\n";
		break;
	case 12:
		std::cout << "You are born on: " << Day << " December " << Year << "\n";
		break;
	}

	std::string terminate;
	std::cout << "Enter T to terminate!\n";
	std::cin >> terminate;

	if (terminate == "t" || terminate == "T") {
		exit(1);
	}


}