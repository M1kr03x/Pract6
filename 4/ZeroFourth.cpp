
#include <iostream>
class device {
public:
    int Storage;
    std::string CPU;
    int RAM;
    device(int storage, std::string cpu, int ram){
        Storage = storage, CPU = cpu, RAM = ram;
    }
    virtual void showdevice() {
        std::cout << "Размер памяти: " << Storage << " Кол-во ОЗУ: " << RAM << " Название проца " << CPU << std::endl;;
    }
};
class PC:device {
public:
    std::string OSType;
    PC(std::string ostype, int storage, std::string cpu, int ram):device(storage,cpu,ram){
        OSType = ostype;
    }
    void showdevice() override {
        std::cout << "Размер памяти: " << Storage << " Кол-во ОЗУ: " << RAM << " Название проца: " << CPU << " Тип операционки: " << OSType << std::endl;;
    }
};
class Notebook :device {
public:
    std::string resolution;
    Notebook(std::string Resolution, int storage, std::string cpu, int ram):device(storage, cpu, ram){
        resolution = Resolution;
    }
    void showdevice() override {
        std::cout << "Размер памяти: " << Storage << " Кол-во ОЗУ: " << RAM << " Название проца: " << CPU << " Разрешение экрана: " << resolution << std::endl;;
    }

};
class Phone : device {
public:
    std::string cameraduim;
    Phone(std::string cameraDuim, int storage, std::string cpu, int ram) :device(storage, cpu, ram) {
        cameraduim = cameraDuim;
    }
    void showdevice() override {
        std::cout << "Размер памяти: " << Storage << " Кол-во ОЗУ: " << RAM << " Название проца: " << CPU << " Дюймовка камеры: " << cameraduim << std::endl;;
    }
};

int main()
{
    setlocale(LC_ALL, "Ru");
    PC razor("Windows", 4234, "I2 кофилейк", 64);
    razor.showdevice();
    Notebook asuszhdau("1920x1080", 4324, "i5 ryzen", 16);
    asuszhdau.showdevice();
    Phone POCO("Сколько-то там дюймов", 1000, "Телефонный проц", 8);
    POCO.showdevice();
}

