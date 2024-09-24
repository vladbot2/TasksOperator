#include <iostream>
using namespace std;

int main() {
	//1
//    int totalMinutes;
//   cout << "Enter the time in minutes since the start of the week: ";
//   cin >> totalMinutes;
//
//    int minutesInWeek = 7 * 24 * 60;
//    int currentMinutes = totalMinutes % minutesInWeek;
//
//    int daysPassed = currentMinutes / (24 * 60);
//    int currentDay = daysPassed % 7;
//    int currentHour = (currentMinutes / 60) % 24;
//    int currentMinute = currentMinutes % 60;
//    int currentSecond = 0;
//
//    cout << "Current day: " << currentDay
//        << ", hour: " << currentHour
//        << ", minute: " << currentMinute
//        << ", second: " << currentSecond << endl;
//
//    int minutesToEndOfWeek = minutesInWeek - currentMinutes;
//    int daysLeft = minutesToEndOfWeek / (24 * 60);
//    int hoursLeft = (minutesToEndOfWeek % (24 * 60)) / 60;
//    int minutesLeft = (minutesToEndOfWeek % (24 * 60)) % 60;
//
//    cout << "Time left until the end of the week: " << daysLeft
//        << " days, " << hoursLeft
//        << " hours, " << minutesLeft
//        << " minutes." << endl;
//

 /*   2
    int length, width;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    int area = length * width;
    int perimeter = 2 * (length + width);

    cout << "Area: " << area << "Perimeter: " << perimeter << endl;*/

    //3
   /* int a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    int perimeter = a + b + c;

    int s = perimeter / 2;

    int area = s * (s - a) * (s - b) * (s - c);
    if (area < 0) {
        cout << "Invalid triangle sides." << endl;
        return 1;
    }

    int sqrtArea = area;
    int x = area / 2;
    for (int i = 0; i < 10; i++) {
        sqrtArea = (sqrtArea + x / sqrtArea) / 2;
    }

    cout << "Perimeter: " << perimeter << "Area: " << sqrtArea << endl;*/

    //4
  /*  int weightPerItem, quantity, costPerUnit;

    cout << "Enter the weight of one item (in grams): ";
    cin >> weightPerItem;  

    cout << "Enter the quantity of items: ";
    cin >> quantity;

    cout << "Enter the cost per unit (in currency): ";
    cin >> costPerUnit;

    int totalWeight = weightPerItem * quantity;  
    int totalCost = costPerUnit * quantity;

    cout << "Total weight of the order: " << totalWeight << " grams" << endl;
    cout << "Total cost of the order: " << totalCost << " currency" << endl;*/

    //5
   /* int pricePerKilogram, quantity, totalCost;

    cout << "Enter the price per kilogram of apples: ";
    cin >> pricePerKilogram;

    cout << "Enter the quantity of kilograms you want to buy: ";
    cin >> quantity;

    totalCost = pricePerKilogram * quantity;

    if (quantity > 5) {
        totalCost *= 0.90;  
    }

    cout << "Total cost of the purchase: " << totalCost << " currency" << endl;*/

    //6
  /*  int distance, speed;

    cout << "Enter the distance between the two cities (in kilometers): ";
    cin >> distance;

    cout << "Enter the speed of the car (in kilometers per hour): ";
    cin >> speed;

    float travelTime = distance / speed;

    int travelHours = (travelTime);
    int travelMinutes = (travelTime - travelHours) * 60;

    int departureHour = 8;
    int departureMinute = 0;

    int arrivalHour = departureHour + travelHours;
    int arrivalMinute = departureMinute + travelMinutes;

    if (arrivalMinute >= 60) {
        arrivalHour += arrivalMinute / 60;
        arrivalMinute = arrivalMinute % 60;
    }

    int remainingHours = 24 - arrivalHour - 1; 
    int remainingMinutes = 60 - arrivalMinute;

    if (remainingMinutes == 60) {
        remainingMinutes = 0;
        remainingHours += 1;
    }

    cout << "Travel time: " << travelHours << " hours and " << travelMinutes << " minutes." << endl;
    cout << "Arrival time: " << arrivalHour << ":" << (arrivalMinute < 10 ? "0" : "") << arrivalMinute << endl;
    cout << "Time remaining until the end of the day: " << remainingHours << " hours and " << remainingMinutes << " minutes." << endl;*/

//7

//int pricePerBook, quantity, vatRate;
//
//cout << "Enter the price of one book: ";
//cin >> pricePerBook;
//
//cout << "Enter the quantity of books: ";
//cin >> quantity;
//
//cout << "Enter the VAT rate (as a percentage): ";
//cin >> vatRate;
//
//int totalCost = pricePerBook * quantity;
//
//int vatAmount = (vatRate / 100) * totalCost;
//
//int finalCost = totalCost + vatAmount;
//
//cout << "Total cost of the purchase (including VAT): " << finalCost << " currency" << endl;

    //8
//int waterUsageLiters, costPerCubicMeter;
//
//cout << "Enter the volume of water used in liters: ";
//cin >> waterUsageLiters;
//
//cout << "Enter the cost of one cubic meter of water: ";
//cin >> costPerCubicMeter;
//
//int waterUsageCubicMeters = waterUsageLiters / 1000;
//
//int totalCost = waterUsageCubicMeters * costPerCubicMeter;
//
//cout << "Total cost of water for the month: " << totalCost << " currency" << endl;

    //10
//int powerWatts; 
//int hoursPerDay; 
//
//cout << "Enter the power of the device in watts: ";
//cin >> powerWatts;
//
//cout << "Enter the number of hours the device operates per day: ";
//cin >> hoursPerDay;
//
//int dailyConsumptionKWh = (powerWatts / 1000) * hoursPerDay; 
//int monthlyConsumptionKWh = dailyConsumptionKWh * 30; 
//
//cout << "Daily consumption: " << dailyConsumptionKWh << " kWh" << endl;
//cout << "Monthly consumption: " << monthlyConsumptionKWh << " kWh" << endl;

}
