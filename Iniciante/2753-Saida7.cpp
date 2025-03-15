#include <iostream>

int main() {
	for (unsigned char i = 0, ch = 97; i < 26; ++i)
		std::cout << int(ch) << " e " << ch++ << '\n';

	return 0;
}