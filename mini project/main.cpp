//book shop
/*A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as
author, title, price, publisher and userChoiceber of copies. Whenever a customer wants a book, the sales person
inputs the title and author and the system searches the list and displays whether it is available or not. If it is not,
an appropriate message is displayed. During the buying process the system displays the book details and
requests for the userChoiceber of copies required. If the requested copies are available, the total cost of the requested
copies is displayed; otherwise the message “Requiredcopies not in stock”is displayed.
Design a system using a class called books with suitable member functions and Constructors. Use new operator
in constructors to allocate memory space required. Implement C++ program for the system.*/
//Author: Can Yang

#include "include/books.hpp"


int main(){

    Book* library[LIBRARY_SIZE];
    int bookmark =0;

    while(bookmark!=LIBRARY_SIZE){

        meny_display();
        unsigned int userChoice;

        std::cout << "Enter your choice: ";
        std::cin>>userChoice;

        switch(userChoice){
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
                unsigned int purchase_amount;
                float customer_payment;

                std::cout<<"What is the name of the book you want to buy? \n";
                std:: cin >> book_name;
                std::cout<<"Enter author first name \n";
                std:: cin >> author_fir_name;
                std::cout<<"Enter author second name \n";
                std:: cin >> author_sec_name;                std::cout << "how many books do you want?\n";
                std::cin>> purchase_amount;

                for (int i=0; i< bookmark; i++){
                    if((library[i]->tittle == book_name)&&(library[i]->authorfirst == author_fir_name)
                    &&(library[i]->authorsecond == author_sec_name)&&((library[i]->copies)>= purchase_amount)){
                        int total_price=(library[i]->price)* (purchase_amount);
                        std::cout<< "We have the book you want, your total price is "<<total_price<< ". Please type the amount you are paying\n";
                        std::cin>>customer_payment;
                        if(total_price ==customer_payment){
                            std::cout << "You have bought the book sucessfully!\n";
                        }else if(total_price < customer_payment){
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

                std::cout<<"Type the name of the book you are searching \n";
                std::cin >> book_name;
                std::cout<<"Enter author first name \n";
                std:: cin >> author_fir_name;
                std::cout<<"Enter author second name \n";
                std:: cin >> author_sec_name;

                if(bookmark==0){
                    std::cout<<"Sorry, we dont have the book you want to search now.\n";

                }

                Book* book = search_books(bookmark, library, book_name, author_fir_name, author_sec_name);
                if (book==nullptr){
                    std::cout<<"Sorry, we dont have the book you want to search now.\n";
                }else{
                    display_book(book);
                }

                break;
            }
            case 4:
            {
                std::string book_name;
                std::string author_fir_name;
                std::string author_sec_name;
                std::string book_publisher;
                float book_price ;
                unsigned int book_copies;

                unsigned int book_property;
                bool is_editing;

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

                        char answer;
                        is_editing = true;

                        while (is_editing)
                        {
                            std::cout<<" What do you want to edit\n";
                            std::cout << "1. Author first name\n";
                            std::cout << "2. Author seond name\n";
                            std::cout << "3. Book name\n";
                            std::cout << "4. Book publisher\n";
                            std::cout << "5. Book price\n";
                            std::cout << "6. numbers of copies\n";
                            std::cout <<"\n";
                            std::cin >> book_property;

                            // switch cases
                            const int auther_name_fi_id=1;
                            const int auther_name_se_id=2;
                            const int book_name_id =3;
                            const int publisher_id =4;
                            const int price_id=5;
                            const int copies_id=6;

                            switch (book_property)
                            {
                                case auther_name_fi_id:
                                    std::cout << "Enter Author First Name that you want to edit to: \n";
                                    std::cin >>author_fir_name;
                                    library[i]->authorfirst= author_fir_name;
                                    break;

                                case auther_name_se_id:
                                    std::cout << "Enter Author Second Name that you want to edit to: \n";
                                    std::cin >> author_sec_name;
                                    library[i]->authorsecond = author_sec_name;
                                    break;

                                case book_name_id:
                                    std::cout << "Enter Title Name that you want to edit to: \n";
                                    std::cin>> book_name;
                                    library[i]->tittle = book_name;
                                    break;
                                case publisher_id:
                                    std::cout << "Enter book publisher that you want to edit to: \n";
                                    std::cin>> book_publisher;
                                    library[i]->publish_name = book_publisher;
                                    break;
                                case price_id:
                                    std::cout << "Enter book price that you want to edit to: \n";
                                    std::cin>> book_price;
                                    library[i]->price = book_price;
                                    break;
                                case copies_id:
                                    std::cout << "Enter book copies that you want to edit to: \n";
                                    std::cin>> book_copies;
                                    library[i]->copies = book_copies;
                                    break;
                            }
                            std::cout << "Do you still want to edit something else? type y or n\n";
                            std::cin >> answer;
                            if (answer == 'n'){
                                is_editing=false;
                            }

                        }

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
                // Release memory
                for(int i=0; i<bookmark;i++){
                    delete library[i];
                }
                bookmark=LIBRARY_SIZE;

            }
        }
    }
}

