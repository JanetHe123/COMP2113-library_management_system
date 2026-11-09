#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>
#include <memory>
#include <iostream>

class Book {
public:
    Book(const std::string& id, const std::string& title,
         const std::string& author, const int total_number, int available_number);

    bool borrowCopy();
    bool returnCopy();
    std::string getId() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    int getTotalNumber() const;
    int getAvailableNumber() const;

private:
    std::string id;
    std::string title;
    std::string author;
    int total_number;
    int available_number;
};


extern std::vector<std::unique_ptr<Book>> allBooks;

bool addBook(const std::string& id, const std::string& title,
             const std::string& author, const int total_number);
Book* searchBook_ID(const std::string& id);
std::vector<Book*> searchBook_title(const std::string& title);
bool addBookFromFile(const std::string& id, const std::string& title,
                     const std::string& author, const int total_number, int available_number);
void handleAddBook();
void handleSearchBook();

#endif