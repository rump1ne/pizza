#include <iostream>
#include <string>
#include <vector>
#include <map>

// Define structs for each table

// Pizzeria table
struct Pizzeria {
    int id;
    std::string name;
    float rating;
};

// Person table
struct Person {
    int id;
    std::string name;
    int age;
    std::string gender;
    std::string address;
};

// Person visits table
struct PersonVisits {
    int id;
    int person_id;
    int pizzeria_id;
    std::string visit_date;
};

// Menu table
struct Menu {
    int id;
    int pizzeria_id;
    int pizza_id;
    float price;
};

// Person order table
struct PersonOrder {
    int id;
    int person_id;
    int menu_id;
    std::string order_date;
};

int main() {
    // Example usage
    std::vector<Pizzeria> pizzerias;
    std::vector<Person> persons;
    std::vector<PersonVisits> personVisits;
    std::vector<Menu> menus;
    std::vector<PersonOrder> personOrders;

    // Populate the tables (for demonstration purposes)
    Pizzeria pizzeria1 = {1, "Pizzeria Uno", 4.2};
    Pizzeria pizzeria2 = {2, "Pizza Hut", 3.8};
    pizzerias.push_back(pizzeria1);
    pizzerias.push_back(pizzeria2);

    Person person1 = {1, "John", 30, "Male", "123 Main St"};
    Person person2 = {2, "Emma", 25, "Female", "456 Oak Ave"};
    persons.push_back(person1);
    persons.push_back(person2);

    PersonVisits visit1 = {1, 1, 1, "2023-01-15"};
    PersonVisits visit2 = {2, 2, 2, "2023-02-20"};
    personVisits.push_back(visit1);
    personVisits.push_back(visit2);

    Menu menu1 = {1, 1, 1, 12.99};
    Menu menu2 = {2, 2, 3, 15.49};
    menus.push_back(menu1);
    menus.push_back(menu2);

    PersonOrder order1 = {1, 1, 1, "2023-01-16"};
    PersonOrder order2 = {2, 2, 2, "2023-02-21"};
    personOrders.push_back(order1);
    personOrders.push_back(order2);

    // Create a map to store Pizzeria information
    std::map<int, Pizzeria> pizzeriaMap;
    for (const auto& pizzeria : pizzerias) {
        pizzeriaMap[pizzeria.id] = pizzeria;
    }

    // Displaying sample data using map (for demonstration purposes)
    std::cout << "Sample Pizzerias:" << std::endl;
    for (const auto& entry : pizzeriaMap) {
        std::cout << "ID: " << entry.second.id << ", Name: " << entry.second.name << ", Rating: " << entry.second.rating << std::endl;
    }

    // Similar display for other tables...

    return 0;
}
