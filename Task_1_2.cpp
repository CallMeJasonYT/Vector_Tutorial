#include <stdlib.h> 
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main()
{
 vector<int> vec; //Δημιουργία Vector
int i; 
 cout << "vector size = " << vec.size() << endl; //Το μέγεθος του Vector είναι αρχικά 0
 srand(time(0));
 for (i = 0; i < 7; i++){
 vec.push_back(rand()); //Εισάγουμε στο Vector 7 random αριθμούς
 }
 cout << "extended vector size = " << vec.size() << endl; // Άρα το Vector έχει τώρα 7 θέσεις
 for(i = 0; i < vec.size(); i++){
 cout << "Vector [" << i << "] = " << vec[i] << endl; //Εκτυπώνουμε τους αριθμούς μέσα στις θέσεις του Vector
 }
 return 0;
}