#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>

template<typename Out>
void split(const std::string &s, char delim, Out result) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}


int main(){

	std::vector<std::string> x = split("one:two::three", ':');
	std::vector<std::string>::iterator it;
	for (std::vector<std::string>::iterator i = x.begin(); i != x.end(); ++i)
	{
		std::cout<<*i<<"\n";
	}
	return 0;
}