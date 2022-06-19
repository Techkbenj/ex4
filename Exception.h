#ifndef HW4_EXCEPTION_H
#define HW4_EXCEPTION_H
#include <iostream>

class DeckFileNotFound : public std::exception
{
public:

    DeckFileNotFound() = default;

    const char * what() const noexcept override { return "Deck File Error: File not found";};
};

class DeckFileFormatError : public std::exception
{
public:

    DeckFileFormatError(int line) {m_msgWithNumOfLine = "Deck File Error: File format error in line " + std::to_string(line);};

    const char * what() const noexcept override
    {
        return m_msgWithNumOfLine.c_str();
    };

private:
    std::string m_msgWithNumOfLine;
};

class DeckFileInvalidSize : public std::exception
{
public:

    DeckFileInvalidSize() = default;

    const char * what() const noexcept override { return "Deck File Error: Deck size is invalid";};
};

#endif //HW4_EXCEPTION_H
