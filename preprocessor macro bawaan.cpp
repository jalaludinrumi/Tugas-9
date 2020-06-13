#include <iostream>
using namespace std;

int main () 
{
   cout << " Baris program : " << __LINE__ << endl;
   cout << " Nama file : " << __FILE__ << endl;
   cout << " Tanggal dikerjakan : " << __DATE__ << endl;
   cout << " Waktu dikerjakan : " << __TIME__ << endl;
   
   return 0;
}

