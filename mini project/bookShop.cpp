//book shop
#include "books.hpp"


void meny_display();

int main(){
    while(true){

        meny_display();
        unsigned int num;
        unsigned int numbersOfBook;

        std::cout << "Enter your choice: ";
        std::cin>>num;

        switch(num){
            case 1:
                std::cout<<"how many books do you want to add?\n";
                std::cin >> numbersOfBook;
                Books* library;

                for(int i=0; i < numbersOfBook; i++){
                    Books* bok= new Books();
                    library[i]= *bok;
                }
        };
    };
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

