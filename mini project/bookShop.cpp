//book shop
#include "books.hpp"

#define size 50

int main(){
    while(true){
        std::cout << "MENY\n";
        std::cout << "1. Entry of New Book\n";
        std::cout << "2. Buy Book\n";
        std::cout << "3. Search For Book\n";
        std::cout << "4. Edit Details of Book\n";
        std::cout << "5. Exit\n";
        std::cout <<"\n";


        unsigned int num;
        std::cout << "Enter your choice: ";
        std::cin>>num;

        std::string author_name;
        std::string tittle_name;
        std::string publish_name;
        std::string price_name;
        std::string copies;



        switch(num){
            case 1:
            std::cout << "Enter Author Name: ";
            std::cin >> author_name;
            std::cout << "Enter Tittle Name: ";
            std::cin >> tittle_name;
            std::cout << "Enter Publisher Name: "
            std::cin >> publish_name;
            std::cout << "Enter Price: ";
            std::cin >> price_name;
            std::cout << "Enter numbers of copies: ";
            std::cin >> copies;

            // Books *b[size] = {
            //     new It,
            //     new Hobbit
            // };
            Books b(author_name, tittle_name);
        b.print();


        };
    };
}

