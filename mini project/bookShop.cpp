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


void meny_display();

int main(){

    Book* library[50];
    unsigned int bookmark =0;

    /*for(int i=0;i<10;i++){
        library[i]=NULL;
    }*/

    while(true){

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
                        std::cout<< "We have the book you want, please type the amount you are paying\n";
                        std::cin>>customer_payment;
                        if(library[i]->price ==customer_payment){
                            std::cout << "You have bought the book sucessfully!\n";
                        }else{
                            std::cout << "Please pay the correct amount!\n";
                        }
                    }else
                    {
                        std::cout<<"Sorry, we dont have the book you want to buy now.\n";
                    }
                }
                break;
            }

            case 3:
                break;


        };
        //std::cout <<"authorname"<< library[bookmark-1];
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

/*void search_book(){
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
            std::cout<< "We have the book you want, please type the amount you are paying\n";
            std::cin>>customer_payment;
        if(library[i]->price ==customer_payment){
            std::cout << "You have bought the book sucessfully!\n";
        }else{
            std::cout << "Please pay the correct amount!\n";
         }
        }else
        {
        std::cout<<"Sorry, we dont have the book you want to buy now.\n";
        }



}*/
