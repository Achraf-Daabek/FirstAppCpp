#include <iostream>//read write to console
#include <vector>

using namespace std;

class List {
private : 
protected :
public :
    List(){
        //constructor

    }
    ~List(){
        //destructor
    }
    vector<vector<string>> mainlist;
    vector<string> list;
    string name;
    int currentlyUserIndex;
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    bool find_userList();
    void save_list();
};