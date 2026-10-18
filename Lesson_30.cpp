//#include <iostream>
//
//class Vehicle {
//protected:
//    std::string brand;
//    int speed;
//public:
//    Vehicle() {
//
//    }
//    Vehicle(std::string brand, int speed) : brand(brand), speed(speed) {
//        std::cout << "[LOG]: Vehicle cter." << std::endl;
//    }
//    ~Vehicle() {
//        std::cout << "[LOG]: Vehicle dter." << std::endl;
//    }
//    void ShowInfo() const {
//        std::cout << "Brand: " << brand << "\nSpeed: " << speed  << " km/h." << std::endl;
//    }
//};
//
//class Car : public virtual Vehicle {
//private:
//    int passangerCapacity;
//public:
//    Car(std::string brand, int speed, int passangerCapacity) :
//        Vehicle(brand, speed), passangerCapacity(passangerCapacity) { 
//        std::cout << "[LOG]: Car cter." << std::endl;
//    }
//    ~Car() {
//        std::cout << "[LOG]: Car dter." << std::endl;
//    }
//
//    void ShowInfo() const {
//        Vehicle::ShowInfo();
//        std::cout << "Passangers: " << passangerCapacity <<  std::endl;
//    }
//};
//
//class Airplane : public virtual Vehicle {
//private:
//    int flyHeight;
//public:
//    Airplane(std::string brand, int speed, int flyHeight) :
//        Vehicle(brand, speed), flyHeight(flyHeight) {
//        std::cout << "[LOG]: Airplane cter." << std::endl;
//    }
//    ~Airplane() {
//        std::cout << "[LOG]: Airplane dter." << std::endl;
//    }
//
//    void ShowInfo() const {
//        Vehicle::ShowInfo();
//        std::cout << "Fly height: " << flyHeight << std::endl;
//    }
//};
//
//class FlyingCar : public Car, public Airplane {
//private:
//    double cost;
//public:
//    FlyingCar(std::string brand, int speed, int passangerCapacity, int flyHeight, double cost) :
//        Car(brand, speed, passangerCapacity), Airplane(brand, speed, flyHeight), cost(cost) {
//        std::cout << "[LOG]: FlyingCar ctor.\n";
//    }
//    ~FlyingCar() {
//        std::cout << "[LOG]: FlyingCar dtor." << std::endl;
//    }
//    void ShowInfo() const {
//        Car::ShowInfo();
//        Airplane::ShowInfo();
//        std::cout << "Cost: " << cost << '$' << std::endl;
//    }
//};
//
//int main()
//{
//    Car car("Volvo", 200, 5);
//    car.ShowInfo();
//}
