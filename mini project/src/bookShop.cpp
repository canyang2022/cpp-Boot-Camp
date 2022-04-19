#include<iostream>
#include "../include/books.hpp"


void meny_display(){
    std::cout << "MENY\n";
    std::cout << "1. Entry of New Book\n";
    std::cout << "2. Buy Book\n";
    std::cout << "3. Search For Book\n";
    std::cout << "4. Edit Details of Book\n";
    std::cout << "5. Exit\n";
    std::cout <<"\n";

}

void search_book(unsigned int bookmark, Book** library){
    std::string book_name;
    std::string author_fir_name;
    std::string author_sec_name;

    std::cout<<"Type the name of the book you are searching \n";
    std:: cin >> book_name;
    std::cout<<"Enter author first name \n";
    std:: cin >> author_fir_name;
    std::cout<<"Enter author second name \n";
    std:: cin >> author_sec_name;

    for (int i=0; i< bookmark; i++){
        if((library[i]->tittle == book_name)&&(library[i]->authorfirst == author_fir_name)
        &&(library[i]->authorsecond == author_sec_name)){
            std::cout<< "We found the book you are searching\n";
            std::cout << "The price is: "<<library[i]->price << '\n';
            std::cout << "The copy is: "<< library[i]->copies<<'\n';
        }else
        {
        std::cout<<"Sorry, we dont have the book you want to buy now.\n";
        }

    }

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
