// ZeroThree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class people {
public:
    std::string name;
    int age;
    std::string gender;
    people(std::string Name, int Age, std::string Gender) {
        name = Name, age = Age, gender = Gender;
    }
    virtual void person() {
        std::cout << "Имя: " << name << " Возраст: " << age << " Пол: " << gender << std::endl;;
    }
};

class worker : people {
public:
    std::string jobtitle;
    worker(std::string Jobtitle, std::string Name, int Age, std::string Gender) : people(Name, Age, Gender) {
        jobtitle = Jobtitle;
    }
     void person() override {
         std::cout << "Имя: " << name << " Возраст: " << age << " Пол: " << gender << " Должность: " << jobtitle << std::endl;;
    }


};
int main()
{
    setlocale(LC_ALL, "Ru");
    people Robert("Роберт Полсон", 36, "Мужской но с нюансом");
    Robert.person();
    worker Tyler("Основатель бойцовского клуба", "Тайлер Дерден", 36, "Мужской");
    Tyler.person();
}

