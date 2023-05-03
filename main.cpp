#include <iostream>
#include <string>

using namespace std;

void salute (){
    cout<<" \t **** hello here ! **** "<<endl;
}
void asks(string ask){
    cout<<"how you doing today ?"<<endl;
    getline(cin, ask);
    cout<<"Ohh okay"<<endl;
    cout<<"But !!!!"<<endl;

}
void questions (){
    struct {
        string question1;
        int age ;
    }question;

    cout<<"Can i ask you a question ?"<<endl;
    cin>>question.question1;

    cout<<"okay and thanks :\n "
        <<"now! How old are you ?"<<endl;
    cin>>question.age;

    cout<<"Answer to question = "<<question.question1 <<"\nAge = "<<question.age<<endl;
}

int main() {
    
    salute();

    string askt = std::string();
    asks(askt);

    questions();


    cout<<"\n \n \n \n last line "<<endl;

    return 0;
}
