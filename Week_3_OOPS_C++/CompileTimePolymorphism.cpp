#include<iostream>
#include<algorithm>
using namespace std;

// Function Overloading --> Compile Time Polymorphism
// name of the function is same but it differ in the argument type ans count of arguments 
// means if work differently of different kind of arguments 

class Add{
    public:
        int Sum(int a, int b){
            return a + b;
        }

        // By differing the argument type ; 
        double Sum(double a, double b){
            return a + b;
        }

        // by differing the argument count
        int Sum(int a, int b, int c){
            return  a + b + c;
        }

        int Sum(int arr[], int n){
            int total = 0;
            for(int it = 0; it < n; it++){
                total += arr[it];
            }
            return total;
        }
};


// 2: Operator Overloading  --> 2nd type of Compile time polymorphism
class complex{
    // Complex Number == realpart + i imagnary part
    public:
        int realPart;
        int imgPart;

        complex(){};

        complex(int real, int img){
            this->realPart = real;
            this->imgPart = img;
        }

        void print(){
            printf("%d + i%d", this->realPart, this->imgPart);
            cout<<endl;
        }

        // plus operator is overloaded as per the complex class need 
        complex operator+ (const  complex &obj){
            complex result;
            result.realPart = this->realPart + obj.realPart;
            result.imgPart = this->imgPart + obj.imgPart;
            return result;
        }

        // overloaded minus operator 
        complex operator- (const complex &obj){
            complex result;
            result.realPart = this->realPart - obj.realPart;
            result.imgPart = this->imgPart - obj.imgPart;
            return result;
        }

        // overload == 
        bool operator== (const complex &obj){
            if(this->realPart == obj.realPart && this->imgPart == obj.imgPart){
                return true;
            }
            return false;
        }
};
int main(){
    Add number;
    cout<<"Adding two numbers : "<<number.Sum(4, 5)<<endl;
    int arr[5] = { 4, 5, 6, 2, 3};
    cout<<"The sum of all the number's of array is : "<<number.Sum(arr, 5)<<endl;

    complex c1(2, 4);
    c1.print();
    complex c2(5, 6);
    c2.print();

    // complex c3 = c1 + c2; --> plus operator ko overload karna pdhega

    // now after overloading if we try to add two complex number we can 
    complex c3 = c1 + c2;
    c3.print();

    // overloaded == operator for complex class 
    bool ans = c1 == c2;
    cout<<ans<<endl;
    complex c4(5, 8);
    // minus 
    complex c5 = c3 - c4;
    c5.print();

    complex c6(2 , 2);
    c6.print();
    cout<<(c5 == c6)<<endl;
}