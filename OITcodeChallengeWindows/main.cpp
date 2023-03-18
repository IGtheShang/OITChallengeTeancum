#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {


    int userInput = 0;
    map<int,string> decimaltoRomanN;
    decimaltoRomanN[0] = "";
    decimaltoRomanN[1] = "I";
    decimaltoRomanN[5] = "V";
    decimaltoRomanN[10] = "X";
    decimaltoRomanN[50] = "L";
    decimaltoRomanN[100] = "C";
    decimaltoRomanN[500] = "D";
    decimaltoRomanN[1000] = "M";

    while (userInput != 9999){


        string romanNumber = "";
        int thousandsDigit = 0;
        int hundredsDigit = 0;
        int tensDigit = 0;

        cout << "Please input an Decimal Number less than 4000:" << endl;

        cin >> userInput;
        if(userInput > 3999){
            continue;
        }


        thousandsDigit = userInput/1000;
        userInput %=1000;
        hundredsDigit = userInput/100;
        userInput %=100;
        tensDigit = userInput /10;
        userInput %=10;

        for(int i = 0; i <thousandsDigit; i++){
            romanNumber += decimaltoRomanN[1000];
        }
        if(hundredsDigit>0){
            if(hundredsDigit == 9){
                romanNumber += decimaltoRomanN[100];
                romanNumber += decimaltoRomanN[1000];
            }
            else if (hundredsDigit>5){
                romanNumber+=decimaltoRomanN[500];
                for (int i = 0; i < hundredsDigit-5;i++){
                    romanNumber+= decimaltoRomanN[100];
                }
            }
            else if(hundredsDigit == 4){
                romanNumber += decimaltoRomanN[100];
                romanNumber += decimaltoRomanN[500];
            }
            else{
                for(int i = 0;i < hundredsDigit;i++ ){
                    romanNumber += decimaltoRomanN[100];
                }
            }
        }
        if(tensDigit>0){
            if(tensDigit == 9){
                romanNumber += decimaltoRomanN[10];
                romanNumber += decimaltoRomanN[100];
            }
            else if (tensDigit>5){
                romanNumber+=decimaltoRomanN[50];
                for (int i = 0; i < tensDigit-5;i++){
                    romanNumber+= decimaltoRomanN[10];
                }
            }
            else if(tensDigit== 4){
                romanNumber += decimaltoRomanN[10];
                romanNumber += decimaltoRomanN[50];
            }
            else{
                for(int i = 0;i < tensDigit;i++ ){
                    romanNumber += decimaltoRomanN[10];
                }
            }
        }
        if(userInput>0){
            if(userInput == 9){
                romanNumber += decimaltoRomanN[1];
                romanNumber += decimaltoRomanN[10];
            }
            else if (userInput>5){
                romanNumber+=decimaltoRomanN[5];
                for (int i = 0; i < userInput-5;i++){
                    romanNumber+= decimaltoRomanN[1];
                }
            }
            else if(userInput == 4){
                romanNumber += decimaltoRomanN[1];
                romanNumber += decimaltoRomanN[5];
            }
            else{
                for(int i = 0;i < userInput;i++ ){
                    romanNumber += decimaltoRomanN[1];
                }
            }
        }
        cout << "your Roman Number is: " << romanNumber << endl << endl;




    }




    return 0;
}
