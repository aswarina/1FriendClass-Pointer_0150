#include <iostream>
#include <string>
using namespace std;

class siswa;
class out_of_range
{
private:
   string nama;

public:
   void setNama(string pNama);
   friend class siswa;

};

class siswa
{
private:
   int id;

public:
    void setId(int pId);
    void displayAll(orang &a);
};


