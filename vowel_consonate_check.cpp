

                                    //check whether alphabet vowel or consonant using switch statements
#include<iostream>
using namespace std;
int main(){
    char alphabate;
    cout<<"enter a alphabate:";
    cin>>alphabate;
    switch(alphabate){
        case 'a':
        cout<<"vowel"<<endl;
        break;

        case 'e':
        cout<<"vowel"<<endl;
        break;

        case 'i':
        cout<<"vowel"<<endl;
        break;

        case 'o':
        cout<<"vowel"<<endl;
        break;

        case 'u':
        cout<<"vowel"<<endl;
        break;

        case 'A':
        cout<<"vowel"<<endl;
        break;

        case 'E':
        cout<<"vowel"<<endl;
        break;

        case 'I':
        cout<<"vowel"<<endl;
        break;

        case 'O':
        cout<<"vowel"<<endl;
        break;

        case 'U':
        cout<<"vowel"<<endl;
        break;
/*
        //  OR  //
       
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        cout<<"vowel";
        break;
*/
        default:
        cout<< "Consonant"<<endl;
        break; 
    }
    cout<<"thank you";
    return 0;
}  
        
