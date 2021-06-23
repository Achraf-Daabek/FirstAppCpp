#include "include/database.h"

void database::write(vector<vector<string>> list){
    ofstream db;
    db.open("db/lists.sl");
    if(db.is_open()){
        for ( int index=0;index<(int)list.size();index++){
           for(int listIndex = 0 ; listIndex < (int)list[index].size(); listIndex++){
             if(listIndex == 0){
               db << "#" << list[index][listIndex] << endl ;
             }else{
                 db << list[index][listIndex] << endl ;
                 }
           }
           db << "%"  << endl ;
        }
    }else{
        cout << "cannot open file ...";
    }
    db.close();

};

vector<vector<string>>  database::read(){
    string line;
    ifstream db;
    vector<string> userList;

    db.open("db/lists.sl");
    if (db.is_open()){
        while(getline(db,line,'\n')){
               if(line.front() == '#'){
                   cout<< "found a hachtag " << line << endl;
                   line.erase(line.begin());
                   userList.push_back(line);
               }else if (line.front() == '%'){
                    cout << "Found a percentage !" << endl;
                    mainlist.push_back(userList);
                    userList.clear();
               }else{
                   cout << "found a item : "<< line << endl;
                   userList.push_back(line);
               }


        }
    }else{
        cout << "connot read file !!! \n";
    }
    return mainlist;
};