#include <print>
#include <iostream>
#include <string>

int main() {
	std::string name;
	std::println("What is your name? ");
	std::getline(std::cin, name);
	std::printf("Welcome %s\n", name.c_str());

	float resistance, voltage;
	std::println("Enter the resistance (in ohms): ");
	std::cin >> resistance;
	std::println("Enter the voltage (in volts): ");
	std::cin >> voltage;


	std::printf("Your current is %.2f", voltage / resistance);
}