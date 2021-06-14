
#include <iostream>
using std::cout;
using std::cin;

int main( )
{
    double ProductionHours,
           PreProductionHours,
           ProducersHours,
           ProductionCost,
           PreProductionCost,
           ProducersCost,
           TotalCost;

    cout << "Enter Production Hours: ";
    cin >> ProductionHours;

    cout << "\nEnter Pre-Production Hours: " ;
    cin >> PreProductionHours;

    cout << "\nEnter Producers Hours: ";
    cin  >> ProducersHours;

    ProductionCost = ProductionHours * ProductionCost;
    PreProductionCost = PreProductionHours * PreProductionCost;
    ProducersCost = ProducersHours * ProducersCost;

    TotalCost = ProductionCost + PreProductionCost + ProducersCost;

    cout << "\n\nCar Dealership Bill";

    cout << "\n\nProduction Cost: ";
    cout << ProductionCost ;

    cout << "\n\nPre-Production Cost: ";
    cout << PreProductionCost;

    cout << "\n\nProducers Cost: ";
    cout << ProducersCost;

    cout << "\n\nWeekly Total Cost: ";
    cout << TotalCost << std::endl;

    return 0;
}
