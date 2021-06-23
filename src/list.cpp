#include "include/list.h"


void List::print_menu(){
    int choice;
    cout << "*************************************\n";
    cout << "1- print liste\n";
    cout << "2-add to liste\n";
    cout << "3- delete from liste\n";
    cout << "4-quite\n";
    cout << "hello "+name+" entre your choice and press return : \n";
    
    cin >> choice;

    if (choice == 4){
        exit(0);

    }else if (choice == 1){print_list();}
    else if (choice == 2){add_item();}
    else if (choice == 3){delete_item();}
    
    else{
        cout << "sorry choice not implemented yet\n";
    }
}
void List::add_item(){
        cout << "\n\n\n\n\n\n" ;
        cout << "********add item fuction*************\n" ;
        cout << "Type in an item and press enter : \n" ;
        string item;
        cin >> item;
        //push the item to the vector
        list.push_back(item);
        cout << "Successflly added \n\n\n\n\n\n";
        cin.clear();
        print_menu();
}
void List::delete_item(){
    cout << "****************delete item ************";
    cout << "Select item to deleted";
    if(list.size()){
        for(int v=0 ;  v < (int)list.size() ; v++){
            cout << v << " : " << list[v] << "\n";
        }
    }else{ cout << "No item to delete";}

    print_menu();

}
void List::print_list(){
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "*************** Printing  list  **************\n";
    for(int i = 0 ; i < (int) list.size() ; i++){
        cout << " * " << list[i] << endl;

    }
    cout << " M - Menu \n" ;
    char choice;
    cin >> choice;
    if(choice == 'M' || choice == 'm'){
        print_menu();
    }
    else { cout << "invalid choice. Quitting ... \n" ; }
}