#include "include/list.h"



int main(int arg_count, char *args[])
{

    if(arg_count>1){
       List SimpleList;
        SimpleList.name= string(args[1]);//get the second argument 
        SimpleList.print_menu();
    }else{
        cout << "not supplied" << endl;
    }


return 0;

}
