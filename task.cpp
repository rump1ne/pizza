#include <iostream>
#include <string>
#include <map>

class Pizzeria {
public:
    int id;
    double rating;
    std::string name;

    Pizzeria(int id, double rating, const std::string& name) {
        this->rating = rating;
        this->id = id;
        this->name = name;
    }
};

class Menu {
public:
    int id;
    int pizzeria_id;
    std::string pizza_name;
    double price;

    Menu(int id, int pizzeria_id, const std::string& pizza_name, double price) {
        this->id = id;
        this->pizzeria_id = pizzeria_id;
        this->pizza_name = pizza_name;
        this->price = price;
    }
};

class Person {
public:
    int id;
    std::string name;
    int age;
    bool gender;
    std::string address;

    Person(int id, const std::string& name, int age, bool gender, const std::string& address) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->address = address;
    }
};

class PersonVisit {
public:
    int id;
    int person_id;
    int pizza_id;
    bool date_visit;

    PersonVisit(int id, int person_id, int pizza_id, bool date_visit) {
        this->id = id;
        this->person_id = person_id;
        this->pizza_id = pizza_id;
        this->date_visit = date_visit;
    }
};

class PersonOrder {
public:
    int id;
    int person_id;
    int menu_id;
    int order_id;

    PersonOrder(int id, int person_id, int menu_id, int order_id) {
        this->id = id;
        this->person_id = person_id;
        this->menu_id = menu_id;
        this->order_id = order_id;
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    int chosenPizzeria;

    std::map<int, Pizzeria*> pizzerias;
    pizzerias[1] = new Pizzeria(1, 3, "Синица");
    pizzerias[2] = new Pizzeria(2, 4, "Папа Джонс");
    pizzerias[4] = new Pizzeria(4, 6, "Додо");

    std::map<int, Menu*> menus;
    menus[54] = new Menu(54, 1, "маргаритта", 85);
    menus[23] = new Menu(23, 2, "пеперони", 65);
    menus[65] = new Menu(65, 4, "четыре сыра", 70);

    std::map<int, Person*> persons;
    persons[12] = new Person(12, "Алексей", 30, true, "Address1");
    persons[19] = new Person(19, "Валентин", 25, true, "Address2");
    persons[87] = new Person(87, "Александр", 40, true, "Address3");

    std::map<int, PersonVisit*> visits;
    visits[99] = new PersonVisit(99, 12, 2, true);
    visits[68] = new PersonVisit(68, 19, 6, true);
    visits[85] = new PersonVisit(85, 51, 1, true);

    std::map<int, PersonOrder*> orders;
    orders[94] = new PersonOrder(94, 12, 54, true);
    orders[24] = new PersonOrder(24, 19, 23, true);
    orders[621] = new PersonOrder(621, 51, 76, true);

    std::cout << "Выберите пиццерию (0-2): ";
    std::cin >> chosenPizzeria;

    std::cout << "Информация о заказах для пиццерии " << pizzerias[chosenPizzeria]->name << ":" << std::endl;
    for (const auto& visit : visits) {
        if (visit.second->pizza_id == chosenPizzeria) {
            int personId = visit.second->person_id;
            int menuId = visit.second->pizza_id;

            std::cout << "Заказ №" << orders[i]->id << std::endl;
            std::cout << "Покупатель: " << persons[i]->name << std::endl;
            std::cout << "Пицца: " << menus[menuId]->pizza_name << std::endl;
            std::cout << "Цена: " << menus[menuId]->price << " рублей" << std::endl;
            std::cout << "Дата заказа: " << (visits[i]->date_visit) << std::endl;
            std::cout << "--------------------------" << std::endl;
        }
    }

    return 0;
}
