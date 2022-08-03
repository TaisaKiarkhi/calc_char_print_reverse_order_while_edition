#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	const size_t max_size{ 1000 };
	char c_style_string[max_size]{};
	unsigned int count_chars{};

	cout << "Hello, enter characters (the limit is 1000): ";
	cin.getline(c_style_string, max_size);

	size_t i{};

	while (i<size(c_style_string)) {
		if (c_style_string[i] == '\0') {
			break;
		}
		++count_chars;
		++i;
		
	}
	cout << "You entered " << count_chars << " characters ( whitespaces are included)." << endl;

	cout << "Printing characters in the reverse order: ";

	for (int i{ static_cast<int>(count_chars - 1 )}; i >= 0; --i) {
		cout << c_style_string[i];
		
	}
	cout << endl;

	return 0;
}