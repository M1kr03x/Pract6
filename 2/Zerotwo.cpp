
#include <iostream>

class transport {
public:
    transport(std::string Title, int Maxspeed) {
        title = Title, maxspeed = Maxspeed;
    }
    void showtransport() {
        std::cout << title << "\t" << maxspeed << std::endl;
    }
    std::string title;
    int maxspeed;
};
class OPKmachine : transport {
public:
    int volume;
    OPKmachine(int Volume , std::string Title, int Maxspeed) : transport(Title, Maxspeed) {
        volume = Volume;
    }
    void bassboostmoment() {
        std::cout << "Вы включили кальянный рэп рэпыч в "<<title<< " на " << volume << "% громкости" << "\t Так держать!" << std::endl;
    }
};
class airplane : transport{
public:
    int meters;
    airplane(int Meters, std::string Title, int Maxspeed) : transport(Title, Maxspeed){
        meters = Meters;
    }
    void fieldfill() {
        std::cout << "Ура, поле опылено на " << meters << " квадратных метров" << std::endl;
    }

};
class concretemixer : transport{
public:
    concretemixer(std::string title,int maxspeed) : transport(title, maxspeed) {

    }
    void mix() {
        std::cout << "Бетономешалкааааааа, мешает бетоооооооон" << std::endl;
    }

};
int main()
{
    setlocale(LC_ALL, "Ru");
    transport roflanchik("Десяточка", 480);
    roflanchik.showtransport();
    OPKmachine geniy(34 , "Мёртвый пятнарь",43);
    geniy.bassboostmoment();
    airplane fly(34, "Боинг", 43);
    fly.fieldfill();
    concretemixer ahahahbeton("adun", 34);
    ahahahbeton.mix();


}

