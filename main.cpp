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
    return 0;
}

int addition(){

}
