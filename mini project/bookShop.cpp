//book shop
/*A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as
author, title, price, publisher and number of copies. Whenever a customer wants a book, the sales person
inputs the title and author and the system searches the list and displays whether it is available or not. If it is not,
an appropriate message is displayed. During the buying process the system displays the book details and
requests for the number of copies required. If the requested copies are available, the total cost of the requested
copies is displayed; otherwise the message “Requiredcopies not in stock”is displayed.
Design a system using a class called books with suitable member functions and Constructors. Use new operator
in constructors to allocate memory space required. Implement C++ program for the system.*/

#include "books.hpp"

#define size_lib 50


void meny_display();
void search_book(unsigned int, Book*);

int main(){

    Book* library[size_lib];
    unsigned int bookmark =0;

    while(bookmark!=size_lib){

        meny_display();
        unsigned int num;
        unsigned int numbersOfBook;


        std::cout << "Enter your choice: ";
        std::cin>>num;

        switch(num){
            case 1:
            {
                Book* bok= new Book();
                library[bookmark]= bok;
                bookmark++;
                break;
            }
            case 2:
            {
                std::string book_name;
                std::string author_fir_name;
                std::string author_sec_name;
                unsigned int purchurs_amount;
                float customer_payment;

                std::cout<<"What is the name of the book you want to buy? \n";
                std:: cin >> book_name;
                std::cout<<"Enter author first name \n";
                std:: cin >> author_fir_name;
                std::cout<<"Enter author second name \n";
                std:: cin >> author_sec_name;
                std::cout << "how many books do you want?\n";
                std::cin>> purchurs_amount;

                for (int i=0; i< bookmark; i++){
                    if((library[i]->tittle == book_name)&&(library[i]->authorfirst == author_fir_name)
                    &&(library[i]->authorsecond == author_sec_name)&&((library[i]->copies)>= purchurs_amount)){
                        std::cout<< "We have the book you want, your total price is "<<(library[i]->price)* (purchurs_amount)<< ". Please type the amount you are paying\n";
                        std::cin>>customer_payment;
                        if((library[i]->price*purchurs_amount) ==customer_payment){
                            std::cout << "You have bought the book sucessfully!\n";
                        }else if(library[i]->price*purchurs_amount < customer_payment){
                            std::cout << "Thank you for the bonns. You have bought the book successfully!\n";

                        }
                        else{
                            std::cout << "Please pay the correct amount!\n";
                        }
                    }else
                    {
                        std::cout<<"Sorry, Required copies are not in stock now.\n";
                    }
                }
                break;
            }

            case 3:
            {
                std::string book_name;
                std::string author_fir_name;
                std::string author_sec_name;
                unsigned int purchurs_amount;

                std::cout<<"Type the name of the book you are searching \n";
                std:: cin >> book_name;
                std::cout<<"Enter author first name \n";
                std:: cin >> author_fir_name;
                std::cout<<"Enter author second name \n";
                std:: cin >> author_sec_name;

                if(bookmark==0){
                    std::cout<<"Sorry, we dont have the book you want to buy now.\n";

                }

                for (int i=0; i< bookmark; i++){
                    if((library[i]->tittle == book_name)&&(library[i]->authorfirst == author_fir_name)
                    &&(library[i]->authorsecond == author_sec_name)){
                        std::cout<< "We found the book you are searching\n";
                        std::cout << "The price is: "<<library[i]->price << ' kr\n';
                        std::cout << "The copy is: "<< library[i]->copies<<'\n';
                    }
                    else
                    {
                        std::cout<<"Sorry, we dont have the book you want to buy now.\n";
                    }

                }
                break;
            }
            case 4:
            {
                std::string book_name;
                std::string author_fir_name;
                std::string author_sec_name;
                unsigned int purchurs_amount;

                std::cout<<"Type the name of the book you are searching \n";
                std:: cin >> book_name;
                std::cout<<"Enter author first name \n";
                std:: cin >> author_fir_name;
                std::cout<<"Enter author second name \n";
                std:: cin >> author_sec_name;

                if(bookmark==0){
                    std::cout<<"Sorry, we dont have the book you want to buy now.\n";

                }

                for (int i=0; i< bookmark; i++){
                    if((library[i]->tittle == book_name)&&(library[i]->authorfirst == author_fir_name)
                    &&(library[i]->authorsecond == author_sec_name)){
                        std::cout<< "We found the book you are searching\n";

                        std::cout << "Enter Author First Name: ";
                        std::cin >>book_name;
                        // std::cout << "Enter Author Second Name: "<<library[i]->authorsecond << ' kr\n';
                        // std::cout << "Enter Title Name: "<<library[i]->tittle << ' kr\n';
                        // std::cout << "Enter Publisher Name: "<<library[i]->publish_name << ' kr\n';
                        // std::cout << "Enter Price: "<<library[i]->price << ' kr\n';
                        // std::cout << "Enter Number of Copies: "<<library[i]->copies << ' kr\n';
                    }
                    else
                    {
                        std::cout<<"Sorry, we dont have the book you want to buy now.\n";
                    }

                }
                break;
            }
            case 5:
            {
                bookmark=size_lib;
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

void search_book(unsigned int bookmark, Book* library[]){
    std::string book_name;
    std::string author_fir_name;
    std::string author_sec_name;
    unsigned int purchurs_amount;
    float customer_payment;

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
