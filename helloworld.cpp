#include<iostream>
#include <fstream>
#include<string>

//we want to read in readme.md and print its contents to console
int main ()
{

	std::cout << "Hello, we will now read README.md" << std::endl << std::endl;


	std::string printer;
	
	std::ifstream reader;
	reader.open("README.md", std::ios::in);
	//open README.md for future operations
	
	
	while ( !reader.eof() )
	{
		reader >> printer;
		std::cout << printer << std::endl;
	}
	reader.close();
	
  	return 0;
}

