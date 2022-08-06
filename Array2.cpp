// #include <iostream>
//
// using namespace std;
//
// int main() {
//      // int marks[] = {25,65,75,86,98,45};
//      //  int b=0;
//      // // while (b<4) {
//      // //   cout << marks[b] << endl;
//      // //   b++;
//      // // }
//      // // do {
//      // //   cout << marks[b] << endl;
//      // //
//      // //   b++;
//      // //
//      // // } while(b<4);
//      //
//      //
//      // // cout << *b << endl;
//      // float a = 3.5;
//      //
//      // cout << a  << endl;
//      //
//      // return 0;
//
// }
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
 fstream fileIn("Ctext-1.txt", fstream::in );
 string strInput;
 getline( fileIn, strInput, '\0');
 cout<<"Mono-alphabetic Substitution de-Cipher.:"<<endl;
 cout<<"Reading from file.: Ctext-1.txt"<<endl;
 cout << "=====================================================" << endl;  cout<<"CipherText from file is: "<<endl;
 cout<<endl;
 cout << strInput << endl;
 cout << "=====================================================" << endl;  cout<<"Decoding Using Given Key.: mlvdrxopwfchykjszuibneqatg"<<endl;
 cout << "=====================================================" << endl;  char keyDecode[] = { 'm', 'l', 'v', 'd', 'r', 'x', 'o', 'p', 'w', 'f', 'c', 'h', 'y', 'k', 'j', 's', 'z', 'u', 'i', 'b', 'n', 'e', 'q',  'a', 't', 'g',' '};
 char alphabets[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',  'y', 'z',' '};
 for(int i=0; i<strInput.length();i++)
 {
 if(strInput[i]==keyDecode[0])
 {
 strInput[i]=alphabets[i];
 }
 }
 cout << strInput << endl;
 fileIn.close();
}
