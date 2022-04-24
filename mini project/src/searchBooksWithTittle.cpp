#include "books.hpp"

Book* search_books_with_tittle(int bookmark, Book** library, std::string tittle){
    for(int i=0; i<bookmark;i++){
        if((library[i]->tittle== tittle)){
            return library[i];
        }
    }
        return nullptr;
}