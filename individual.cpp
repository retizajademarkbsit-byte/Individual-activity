#include <iostream>
using namespace std;
int main() {
string Fullname, course, yr, sec, Birthday, Motto;

cout<< "Enter Fullname: ";
cin>>Fullname;
cout << "Enter course: ";
cin>>course; 
cout<< "yr: ";
cin>>yr;
cout<< "sec: ";
cin>>sec;
cout<< "Birthday: ";
cin>>Birthday;
cout<<"Motto: ";
cin>>Motto;

cout<< "Hi, I'm " << Fullname << " of " << course << ","<< yr << "," << sec << ". Welcome to Data Structures and Algorithm! My Birthday is on " << Birthday << " and my motto/motivation in life is " << Motto << endl;

return 0;

}