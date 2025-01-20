#include "President.h"
#include "Manager.h"
#include "Worker.h"

int main() {
    President president;
    Manager manager;
    Worker worker;

    president.Print();
    manager.Print();
    worker.Print();

    return 0;
}
