#include<iostream>
#include<windows.h>
#include<fstream>
int main() {
	std::ifstream input;
	std::ofstream output;
	input.open("links.txt");
	output.open("processed.txt", std::ofstream::app);
	std::string link;
	while (!input.eof()) {
		input >> link;
		output << "<div class=\"card m-2\" style=\"border: none;\">\n";
		output << "\t<img class=\"card-img\" src= \"" << link << "\">\n";
		output << "</div>\n\n";
	}
	Sleep(1000);
	std::cout << "2%" << std::endl;
	Sleep(500);
	std::cout << "30%" << std::endl;
	Sleep(2000);
	std::cout << "70%" << std::endl;
	Sleep(250);
	std::cout << "99%" << std::endl;
	std::cout << "100%" << std::endl;
	std::cout << "Ajt sea drapaj si meot.\n";
	return 0;
}