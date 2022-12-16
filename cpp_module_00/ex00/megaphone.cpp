#include <iostream>

std::string toUpperString(std::string str)
{
	std::string ret = "";

	for (size_t i = 0; i < str.length(); i++)
	{
		ret += std::toupper(str[i]);
	}

	return ret;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		std::string ret = "";
		for (int i = 1; i < argc; i++)
		{
			ret += toUpperString(argv[i]);
		}
		std::cout << ret << std::endl;
	}

	return 0;
}
