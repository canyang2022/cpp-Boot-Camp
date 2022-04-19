#include<iostream>
#include "../include/books.hpp"

std::string enter_authorname(std::string author_name){
    //consume the getline enter
    std::string Buffer;
    std::getline(std::cin, Buffer);

    std::cout << "Enter Author Name: ";
    std::getline(std::cin, author_name);
    return author_name;
}

void meny_display(){
    std::cout << "MENY\n";
    std::cout << "1. Entry of New Book\n";
    std::cout << "2. Buy Book\n";
    std::cout << "3. Search For Book\n";
    std::cout << "4. Edit Details of Book\n";
    std::cout << "5. Exit\n";
    std::cout <<"\n";

}


// Book, author, title, price, publisher and number of copies
Book::Book()
{
    std::cout << "Enter Author First Name: ";
    std::cin >> authorfirst;
    std::cout << "Enter Author Second Name: ";
    std::cin >> authorsecond;
    std::cout << "Enter Tittle Name: ";
    std::cin >> tittle;
    std::cout << "Enter Publisher Name: ";
    std::cin >> publish_name;
    std::cout << "Enter Price: ";
    std::cin >> price;
    std::cout << "Enter numbers of copies: ";
    std::cin >> copies;

}

Book* search_books(int bookmark, Book** library, std::string tittle, std::string author_fir_name,std::string author_sec_name ){
    for(int i=0; i<bookmark;i++){
        if((library[i]->tittle== tittle) && (library[i]->authorfirst == author_fir_name)
                    &&(library[i]->authorsecond == author_sec_name)){
            return library[i];
        }
    }
        return nullptr;
}

void display_book(Book* book){
    std::cout<< "We found the book you are searching\n";
    std::cout << "The book name is: "<<book->tittle << '\n';
    std::cout << "The author name is: "<<book->authorfirst<<" "<<book->authorsecond << '\n';
    std::cout << "The publisher is: "<<book->publish_name << '\n';
    std::cout << "The price is: "<<book->price << " kr"<< '\n';
    std::cout << "The copy is: "<< book->copies<<'\n';

}

