#include <iostream>
using namespace std;

int main()
{
    char C;
    int lowercasevowel1, uppercasevowel1;

    cout<<"enter an alphabet"<<endl;
    cin>> C;

    lowercasevowel1 = (C=='a'|| C=='e' || C=='i' || C=='o' || C=='u');
    uppercasevowel1 = (C == 'A' || C == 'E' || C == 'I' || C == 'O' || C== 'U');
    if (lowercasevowel1 || uppercasevowel1 )
        cout<<C<<" is a vowel";
    else cout <<C<<"is a consonant";
    return 0;
}
