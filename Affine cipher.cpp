#include <iostream>
#include <string>

using namespace std;

int main()
{
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: AffineCipher.cpp
// Last Modification Date: 1/3/2018
// Author1 and ID and Group: Nada Mohamed Mahmoud 20170370 G-14
// Author2 and ID and Group: Aya Amr Mohamed 20170359 G-14
// Teaching Assistant: Eng:
    int x;
    cout << "what do you like to do today?\n";
    cout << "1=Cipher a message \n" << "2=Decipher a message \n"<< "3=End \n";
    cout << "enter the number you want:";
    cin >> x;
    int cipher=0;
    string text;
    string capital="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
switch (x){
// cipher a message
case (1):
    cout << "what is your message? \n";
    cin.ignore();
    getline(cin,text);
    for(int k=0;k<text.size();k++){
            text[k]=toupper(text[k]);}
    for(int i=0;i<text.size();i++){
        for (int a=0;a<capital.size();a++){
            if (text.at(i)==capital.at(a)){
                cipher=5*a+8;
                while (cipher>=26){
                    cipher=cipher-26;}
                text.at(i)=capital.at(cipher);
                            }
                        }
                    }
    cout << text << endl;
    break;
case (2):
// decipher the message
    cout << "what is your message? \n";
    cin.ignore();
    getline(cin,text);
    for(int k=0;k<text.size();k++){
            text[k]=toupper(text[k]);}
    for(int i=0;i<text.size();i++){
        for (int a=0;a<capital.size();a++){
            if (text.at(i)==capital.at(a)){
                cipher=21*(a-8);
                while (cipher>=26){
                    cipher=cipher-26;}
                while (cipher<0){
                    cipher=cipher+26;}
                text.at(i)=capital.at(cipher);
                            }
                        }
                    }
    cout << text << endl;
    break;
case (3):
    cout << "Good luck :) \n";
    break;
default :
    cout << "please,enter the correct number \n";
    break;
    }
    return 0;
}
