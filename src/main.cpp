#include "include/list.h"
#include "include/database.h"


int main(int arg_count, char *args[])
{   List SimpleList;
    database data;
  
   

    if(arg_count>1){
       
        SimpleList.name= string(args[1]);//get the second argument 
        SimpleList.mainlist = data.read();
        SimpleList.find_userList();
        SimpleList.print_menu();
        data.write(SimpleList.mainlist);
        
    }else{
        cout << "not supplied" << endl;
    }
   

return 0;

}
