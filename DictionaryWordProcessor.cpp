/*
    DictionaryWordProcessor.cpp

    Definitions for dictionary creation
*/

#include "DictionaryWordProcessor.hpp"

// constructor with input stream
DictionaryWordProcessor::DictionaryWordProcessor(std::istream& in)
    : WordProcessor(in)
{}

// output words to out stream
void DictionaryWordProcessor::outputWords(std::ostream& out) const {

    // output the dictionary with each "word" on a single line
    std::copy(words.begin(), words.end(),
              std::ostream_iterator<std::string>(out, "\n"));
}


void DictionaryWordProcessor::processWord(const std::string& word) {
    WordProcessor::processWord(word);
}

void DictionaryWordProcessor::progress(int position) {
    std::clog << "Word number:" << position << "\n";
}