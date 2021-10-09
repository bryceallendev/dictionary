/*
    Dictionary.cpp

    Creates a dictionary of words
*/

#include "DictionaryWordProcessor.hpp"
#include "WordProcessor.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    // require filename
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <input_file>\n";
        return 1;
    }

    // collect a set of words from the input file
    std::ifstream in(argv[1]);
    DictionaryWordProcessor reader(in);
    reader.read();

    // output the dictionary to standard out
    reader.outputWords(std::cout);

    return 0;
}
