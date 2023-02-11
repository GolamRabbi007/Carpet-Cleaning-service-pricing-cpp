#include <iostream>
using namespace std;

int main()
{
	
    char answer {};
    do{
    cout<<"Welcome to Carpet Cleaning Service"<<endl;
    cout<<"How many rooms would you like to be cleaned?"<<endl;
    int num_of_rooms {};
    cin>>num_of_rooms;
    cout<<"Please input Room_size in Square feet..."<<endl;
    double room_size {};
    cin>>room_size;
    double total_room_size {};
    total_room_size = room_size * num_of_rooms;
    cout<<"==================================="<<endl;
    cout<<"Your total room size is "<<total_room_size<<" sqft"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Per sqft cleaning cost is $10"<<endl;
    cout<<"Tax rate is 6%"<<endl;
    double per_sqft_cleaning_cost {10};
    double tax_rate {.06};
    double total_cost_without_tax {};
    double total_cost_with_tax {};
    total_cost_without_tax = total_room_size * per_sqft_cleaning_cost ;
    total_cost_with_tax = total_cost_without_tax + (total_cost_without_tax) * tax_rate;
    cout<<"Your total expense without tax is "<<total_room_size<<" * "<<per_sqft_cleaning_cost<<" = "<<total_cost_without_tax<<endl;
    cout<<"your tax expense is "<< total_cost_without_tax << " * "<<tax_rate<<" = "<<(total_cost_without_tax) * tax_rate << endl;
    cout<<"Your total cost for cleaning the room with tax would be $"<<total_cost_with_tax<<endl;
    cout<<"Would you like to repeat? (y/n) "<<endl;
    cin>>answer;
    }
    while (answer != 'n' && answer !='N');
    cout<<"Thank you for choosing us !!"<<endl;
	return 0;
}
