/*
    DictionaryWordProcessor.hpp

    Declarations for dictionary creation
*/

#ifndef INCLUDED_DICTIONARYWORDPROCESSOR_HPP
#define INCLUDED_DICTIONARYWORDPROCESSOR_HPP

#include "WordProcessor.hpp"
#include <iterator>
#include <istream>
#include <iostream>
#include <ostream>
#include <string>
#include <set>

class DictionaryWordProcessor : public WordProcessor {
public:

    // constructor with input stream
    DictionaryWordProcessor(std::istream& in);

    // output words to out stream
    void outputWords(std::ostream& out) const;

private:
    std::set<std::string> words;
    virtual void processWord(const std::string& word);
    virtual void progress(int position);
};

#endif
