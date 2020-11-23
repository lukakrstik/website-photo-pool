/* REFERENCA
<div class="card m-2" style="border: none;">
	<a href="https://github.com/lukakrstik/website-photo-pool/blob/master/images/DSC_6141-1-2.jpg?raw=true" data-fancybox="gallery">
		<img class="card-img" src="https://github.com/lukakrstik/website-photo-pool/blob/master/images/DSC_6141-1-2.jpg?raw=true%22%3E
	</a>
</div>
*/
#include<iostream>
#include<windows.h>
#include<fstream>
int main() {
	std::ifstream input;
	std::ofstream output;
	input.open("links.txt");
	output.open("processed.txt", std::ofstream::app);
	std::string link;
	std::string link2;
	while (!input.eof()) {
		input >> link >> link2;
		output << "<div class=\"card m-2\" style=\"border: none;\">\n";
		output << "\t<a href=\"" << link << "\" data-fancybox=\"gallery\">\n";
		output << "\t\t<img class=\"card-img\" src= \"" << link2 << "\">\n";
		output << "\t</a>\n";
		output << "</div>\n\n";
	}
	input.close();
	std::cout << "Ajt sea drapaj si meot.\n";
	system("PAUSE");
	return 0;
}