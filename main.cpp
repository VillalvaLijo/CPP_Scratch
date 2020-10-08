#include <iostream>



int addition(int numA, int numB);

int main() {

    using namespace std;

    int numA, numB, sum;

    int chest = 42, waist = 0x42, inseam = 042;

    char ch = 'M';
    int i = ch;

    cout << "Hello, World!" << endl;

    cout<< " This Program takes the input of two numbers and performs addition." << endl;

    cout<< "Chest: "<< chest<<"\n";
    cout<<"Waist: "<< waist<<"\n";
    cout<<"Inseam: "<<inseam<<"\n";

    //cout<<"Execute Addition " << numA << " + " << numB << " + " << sum << endl;

    cout<<"Charecter ch is "<<ch<<" to us but in ASCII it is: "<<i<<endl;

    cout<<"Watch me add one to Char ch and change it's Alphabetic Value (As well as it's binary value"<<endl;
    ch += 1;
    cout<<"Code: ch+1"<<endl;
    i = ch;

    cout<<"New value for ch: "<<ch<<" New ASCII value: "<<i<<endl;
    char alarm = '\a';
    cout<<"ITS LIT FAM"<<endl;


    //universal charecter practice
    cout<<"Let them eatg\u00E2teau.\n";

    //using char as a number holder.
    char five = 5;
    unsigned char twohundo = 200;
    signed char negbucktwenty = -120;

    cout<<"These next three strings use chars to display:\n";
    cout<<"char five: "<<five<<endl;
    cout<<"unsigned char twohundo: "<<twohundo<<endl;
    cout<<"signed char negbucktwenty: "<< negbucktwenty<<endl;
    //cannot read on my system

    //practice with Boolean data types
    bool Go = true;
    bool Stop = false;
    cout<<"These next two strings display bool data types\n";
    cout<<"Go: "<<Go<<endl;
    cout<<"Stop: "<<Stop<<endl;

    if (Go == true) {
        cout<<"GO is True!";
    }
    else {
        cout<<"You must Stop!";
    }




    return 0;
}

int addition(){

}
