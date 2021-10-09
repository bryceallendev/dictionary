/*
    WordProcessor.hpp

    Declarations for reading words from files
*/

#ifndef INCLUDED_WORDPROCESSOR_HPP
#define INCLUDED_WORDPROCESSOR_HPP

#include <istream>
#include <functional>

class WordProcessor {
public:

    // constructor with input stream
    WordProcessor(std::istream& in);

    // read the words and apply the processWord
    void read();

    // destructor
    virtual ~WordProcessor() = default;

protected:
    virtual void processWord(const std::string& word) = 0;
    
    virtual void progress(int position);

private:
    std::istream& input;
};

#endif
