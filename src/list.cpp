#include "include/list.h"


void List::print_menu(){
    int choice;
    cout << "*************************************\n";
    cout << "1- print liste\n";
    cout << "2-add to liste\n";
    cout << "3- delete from liste\n";
    cout << "4-save \n";
    cout << "5-quite \n";
    cout << "hello "+name+" entre your choice and press return : \n";
    
    cin >> choice;

    if (choice == 5){
        return;

    }else if (choice == 1){print_list();}
    else if (choice == 2){add_item();}
    else if (choice == 3){delete_item();}
    else if (choice == 4){save_list();}
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
    cout << "****************delete item ************\n";
    cout << "Select item to deleted : \n";
    if(list.size()){
        for(int v=0 ;  v < (int)list.size() ; v++){
            cout << v << " : " << list[v] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
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
bool List::find_userList(){
    bool userfound = false;
     cout << "\n\n\n\n\n\n\n\n\n\n";
     cout << "*************** welcome "<< name << "**************"  << endl ;
    for (int user_index = 0 ; user_index < (int)mainlist.size() ; user_index++){
        cout << mainlist[user_index][0] << endl;
        if(mainlist[user_index][0] == name){
            cout << "user has been found : " << mainlist[user_index][0] << endl;
            list= mainlist[user_index];
            currentlyUserIndex = user_index;
            userfound =true;
            break;
        }
    }
    if(!userfound){
        list.push_back(name);
        mainlist.push_back(list);
        currentlyUserIndex = (int) mainlist.size() -1;
    }
   return userfound;
}

void List::save_list(){
    
     cout << "*************** saving list **************"  << endl ;
    mainlist[currentlyUserIndex]=list;
    print_menu();
   
}