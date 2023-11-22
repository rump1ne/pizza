#include <iostream> 
#include<fstream> 
#include <stdio.h> 

using namespace std;

class pizzeria {
public:
    int id;
    double rating;
    string name;
    pizzeria(int id, double rating, string name) {
        this->rating = rating;
        this->id = id;
        this->name = name;
    }

};

class menu {
public:
    int id;
    int pizzeria_id;
    string pizza_name;
    double price;

    menu(int id, int pizzeria_id, string pizza_name, double price) {
        this->id = id;
        this->pizzeria_id = pizzeria_id;
        this->pizza_name = pizza_name;
        this->price = price;
    }
};

class person {
public:
    int  id;
    string name;
    int age;
    string gender;
    string address;

    person(int id, string name, int age, bool gender, string address) {
        this->id = id;
        this->name = name;
        this->age = age;
        this->gender = gender? "male" : "false";
        this->address = address;
    }
};

class person_visit {
public:
    int id;
    int person_id;
    int pizza_id;
    bool date_visit;

    person_visit(int id, int person_id, int pizza_id, bool date_visit) {
        this->id = id;
        this->person_id = person_id;
        this->pizza_id = pizza_id;
        this->date_visit = date_visit;

    }
};

class person_order {
    int id;
    int person_id;
    int menu_id;
    int order_id;

    person_order(int id, int person_id, int menu_id, int order_id) {
        this->id = id;
        this->person_id = person_id;
        this->menu_id = menu_id;
        this->order_id = order_id;
    }
};

int main() {
    pizzeria* pizzeria_1 = new pizzeria(1, 3, "Dodo pizza");
    printf("id = %d rating = %lf name = %s\n", pizzeria_1->id, pizzeria_1->rating, pizzeria_1->name.c_str());

    pizzeria* pizzeria_2 = new pizzeria(2, 4.5, "888");
    printf("id = %d rating = %lf name = %s\n", pizzeria_2->id, pizzeria_2->rating, pizzeria_2->name.c_str());

    pizzeria* pizzeria_3 = new pizzeria(3, 2.6, "Dad Johns");
    printf("id = %d rating = %lf name = %s\n", pizzeria_3->id, pizzeria_3->rating, pizzeria_3->name.c_str());

    person* person_1 = new person(1, "Adolf", 94, "male", "Kapfwagen strashe 24/1");
    printf("id = %d name = %s age = %d gender = %s address = %s\n", person_1->id, person_1->name.c_str(), person_1->age, person_1->gender.c_str(), person_1->address.c_str());

    person* person_2 = new person(2, "zaza", 23, "male", "net takou 33");
    printf("id = %d name = %s age = %d gender = %s address = %s\n", person_2->id, person_2->name.c_str(), person_2->age, person_2->gender.c_str(), person_2->address.c_str());

    person* person_3 = new person(3, "Naruto", 16, "male", "konoxa");
    printf("id = %d name = %s age = %d gender = %s address = %s\n", person_3->id, person_3->name.c_str(), person_3->age, person_3->gender.c_str(), person_3->address.c_str());

    pizzeria* pizzeria_2 = new pizzeria(2, 4.5, "888");
    printf("id = %d rating = %lf name = %s\n", pizzeria_2->id, pizzeria_2->rating, pizzeria_2->name.c_str());

    pizzeria* pizzeria_3 = new pizzeria(3, 2.6, "Dad Johns");
    printf("id = %d rating = %lf name = %s\n", pizzeria_3->id, pizzeria_3->rating, pizzeria_3->name.c_str());

    menu* pizza_1 = new menu(1, 1, "Margarita", 10.99);
    printf("id = %d pizzeria_id = %d pizza_name = %s price = %lf\n", pizza_1->id, pizza_1->pizzeria_id, pizza_1->pizza_name.c_str(), pizza_1->price);

    menu* pizza_2 = new menu(2, 1, "Pepperoni", 12.99);
    printf("id = %d pizzeria_id = %d pizza_name = %s price = %lf\n", pizza_2->id, pizza_2->pizzeria_id, pizza_2->pizza_name.c_str(), pizza_2->price);

    menu* pizza_3 = new menu(3, 1, "meat", 14.99);
    printf("id = %d pizzeria_id = %d pizza_name = %s price = %lf\n", pizza_3->id, pizza_3->pizzeria_id, pizza_3->pizza_name.c_str(), pizza_3->price);

    person_visit* visit_1 = new person_visit(1, 1, 1, true);
    printf("id = %d person_id = %d pizza_id = %d date_visit = %d\n", visit_1->id, visit_1->person_id, visit_1->pizza_id, visit_1->date_visit);

    person_visit* visit_2 = new person_visit(2, 3, 2, false);
    printf("id = %d person_id = %d pizza_id = %d date_visit = %d\n", visit_2->id, visit_2->person_id, visit_2->pizza_id, visit_2->date_visit);

    person_visit* visit_3 = new person_visit(3, 1, 3, true);
    printf("id = %d person_id = %d pizza_id = %d date_visit = %d\n", visit_3->id, visit_3->person_id, visit_3->pizza_id, visit_3->date_visit);

    person_order* order_1 = new person_order(1, 1, 1, 1);
    printf("id = %d person_id = %d menu_id = %d order_id = %d\n", order_1->id, order_1->person_id, order_1->menu_id, order_1->order_id);

    delete pizzeria_1;
    delete pizzeria_2;
    delete pizzeria_3;
    delete person_1;
    delete person_2;
    delete person_3;
    delete pizza_1;
    delete pizza_2;
    delete pizza_3;
    delete visit_1;
    delete visit_2;
    delete visit_3;
    delete order_1;
    delete order_2;
    delete order_3;


    return 0;
}
