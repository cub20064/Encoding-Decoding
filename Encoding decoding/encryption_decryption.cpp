#include <iostream>
using namespace std;
string vigenere(string text, string key, bool EncDec);
int main()
{
          string plainText, cipherText, key;
          char x;
          do
          {         cout<<"-------------------------------------------------------------------"<<endl;
                    cout << "wecome to encrptyion derption station"<<endl;
                    cout << "plase chosee one of the option"<<endl;
                    cout << "    1.encrption     2.decryption         3.exit " <<endl;
                    int option;
                    cin >> option;

                    switch (option)
                    {
                    case 1:
                              cout << "enter plain text"<<endl;
                              cin >> plainText;
                              cout << "enter key"<<endl;
                              cin >> key;
                              cipherText = vigenere(plainText, key, 0);
                              cout << "cipher text is : " << cipherText << endl;
                              cout << "press y/Y to rapeat the process or any other to exit "<<endl;
                              cin >> x;

                              break;
                    case 2:
                              cout << "enter cipher text"<<endl;
                              cin >> plainText;
                              cout << "enter key"<<endl;
                              cin >> key;
                              cipherText = vigenere(plainText, key, 1);
                              cout << "plain text is : " << cipherText << endl;
                              cout << "press y/Y to rapeat the process or any other to exit "<<endl;
                              cin >> x;
                              break;

                    case 3:
                              x = 'n';
                              break;

                    default:
                              break;
                    }

          } while (x == 'y' || x == 'Y');
}

string vigenere(string text, string key, bool EncDec)
{
          string newKey = key, newText;
          while (newKey.length() < text.length())
          {
                    newKey += key;
          }
          if (EncDec == 0)
          {
                    for (int i = 0; i < text.length(); i++)
                    {
                              newText += (text[i] + newKey[i]) % 26 + 65;
                    }
          }
          else
          {
                    for (int i = 0; i < text.length(); i++)
                    {
                              newText += (text[i] - newKey[i] + 26) % 26 + 65;
                    }
          }

          return newText;
}