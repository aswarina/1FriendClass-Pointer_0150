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
