  #include<iostream>
using namespace std;
int main()
{
    char op;
    float num1 , num2;
    //It allows user to enter operator
    //i.e +,-,*,/
    cin>> op;
    //It allows user to enter the operands
    cin>> num1 >> num2;
    //switch statement begins 
    switch (op)
    {
        //If user enter +
        case '+':
        cout<< num1 + num2;
        break;
        //If user enter -
        case '-':
        cout<< num1 - num2;
        break;
        //If user enter *
        case '*':
        cout<< num1 * num2;
        break;
        //If user enter /
        case '/':
        cout<< num1 / num2;
        break;
        
        //If the operator is other than+,-,*,/ 
        //error message will display 
        default:
        cout<<"Error operator is not correct ";
        //switch statement ends
    }
    return 0;
}