#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class database
{
    private:
    protected:
    public:
        database(){};
        ~database(){};
        vector<vector<string>> mainlist;
        string name;
        void write(vector<vector<string>>mainlist);
        vector<vector<string>>  read();

};

