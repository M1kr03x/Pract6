
#include <iostream>
#include <string>
using namespace std;
class phone {
public:
    phone(string Model, string Number){
        model = Model;
        number = Number;
    }
    string model;
    string number;
   virtual void call(string number) {
        cout << "Вызов по номеру " << number<<endl;
    }
};
class smartphone : phone {
public:
    smartphone(string Model, string Number, double cameraResolution) : phone(Model, Number) {
        cameraresolution = cameraResolution;
    }
    void  call(string number)  override {
        cout << "Вызов по номеру " << number<<endl;
    }
    
    double cameraresolution;
    void shot() {
        cout << "Снимок сделан "<<endl;
    }
};
int main()
{
    setlocale(LC_ALL, "Ru");
    phone myhomephone("Nokia3310", "8805553535");
    myhomephone.call("8932432423");
    smartphone myworkphone("calculator", "8332323232", 80);
    myworkphone.shot();
    myworkphone.call("112");
    

}

