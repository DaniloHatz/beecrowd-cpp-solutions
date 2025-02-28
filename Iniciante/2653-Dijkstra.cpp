#include <iostream>
#include <string>
#include <set>

int main() {
	std::string joia;
	std::set<std::string> colecao;
	
	while (std::cin >> joia) colecao.insert(joia);
	
	std::cout << colecao.size() << '\n';

	return 0;
}