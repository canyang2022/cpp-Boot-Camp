#include "searchBooks.hpp"

Book* search_books(int bookmark, Book** library, std::string tittle, std::string author_fir_name,std::string author_sec_name){
    for(int i=0; i<bookmark;i++){
        if((library[i]->tittle== tittle) && (library[i]->authorfirst == author_fir_name)
                    &&(library[i]->authorsecond == author_sec_name)){
            return library[i];
        }
    }
        return nullptr;
}


