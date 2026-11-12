#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>
#include <filesystem>
#include <print>
#include "readfile.h"

enum STATUS {
	MATCH = 0,
	IO_ERROR = 1,
	NO_MATCH = 2
};

int main() {
    std::string filename, word;
	std::print("this program can read a file in the same directory as the program, then check if a word chosen by user shows up in said file\n");
	std::print("Enter file name: ");
		std::getline(std::cin, filename); //Write std::cin buffer to string filename.
		if (std::filesystem::exists(filename) != 1) { return ENOENT; } //Check whether file exists and exit with an error if not (No such file or directory).
	std::print("\nEnter a word: ");
		std::getline(std::cin, word); //Write std::cin buffer to string word.
	std::println("\nUser chose the following word: {}", word);
	switch (readfile(filename, word)) {
		case MATCH: //File open for reading and string match was found.
			std::println("Which was found inside of file :)");
			return 0;
		case IO_ERROR: //File not open for reading, error.
			std::println("But the program wasn't able to open the file. :(");
			return -1;
		case NO_MATCH: //File open for reading but no string match. Not necessarily an error for the operating system's concern, so return 0.
			std::println("Which was not found in file :(");
			return 0;
		default:
			std::println(std::cerr, "An unknown error occurred.");
			return -1;
	}
}

