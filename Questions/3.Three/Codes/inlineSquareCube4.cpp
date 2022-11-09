#include <iostream>
using namespace std;
class A{

    public:
    inline void squareAndCube(int n);
};
inline void A:: squareAndCube(int n) {
    cout<<"Square: "<<n*n<<endl<<"Cube: "<<n*n*n;
}
int main() {
    A a;
    int n;
    cout<<"Enter an integer";
    cin>>n;
    a.squareAndCube(n);
    return 0;
}
