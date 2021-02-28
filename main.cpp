#include <iostream>
#include <fstream>
#define DEBUG

void cryptor(std::string file, char mode, int deep)
{
	//need make buffer file 
	//go to every line in file
	//define vector of motion algo
	//replace every symbol in line on taking on some digit
}


		
		
int main(int argc, char* argv[])
{
	std::string filename = argv[1];
	int deep = std::stoi(argv[3]);
	char mode = argv[2][1];	


#ifdef DEBUG
	std::cout << filename << '\n' << mode << '\n' << deep << '\n';
#endif

	


	return 0;
}
