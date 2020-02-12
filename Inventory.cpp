#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/*
 Creates an Inventory item and sets its name, price, and
 count of item instances
*/
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
 Removes and item and lowers its count stored in inventory
*/
void Inventory::sell()
{
	if (m_in_stock > 0)
  		m_in_stock--;
	else
		std::cout << "Sorry, that item is out of stock" << std::endl;

}

/*
 Overload for "operator << " to be able to output name and
 and price of each item to an 'ostream' object
*/
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
