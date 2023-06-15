// Virtual Function ka Magic
#include <iostream>
using namespace std;

class Smartphone{
  public:
  //Pure Virtual Function
    virtual void TakeASelfie() = 0;
    virtual void Calling() = 0;
};
class Android: public Smartphone{
    public:
    void TakeASelfie(){
        cout<<"Android Selfie\n";
    }
};
class Iphone: public Smartphone{
    public:
    void TakeASelfie(){
        cout<<"Iphone Selfie\n";
    }
    void Calling(){
        cout<<"Call is been processed\n";
    }
};

int main() {
  Smartphone* s1 = new Iphone();
  s1 -> Calling();

    return 0;
}
