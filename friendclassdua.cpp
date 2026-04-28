#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNilaipelajar(pelajar &x);
};

class pelajar
{
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNilaipelajar(pelajar &x);
};