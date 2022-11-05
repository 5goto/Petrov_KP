#pragma once

#include <iostream>
#include <string>
using namespace std;

long long polinomic_hash(string str)
{
	const int p = 31;
	long long hash = 0, p_pow = 1;
	for (size_t i = 0; i < str.length(); ++i)
	{
		// желательно отнимать 'a' от кода буквы
		// единицу прибавляем, чтобы у строки вида 'aaaaa' хэш был ненулевой
		hash += (str[i] - 'a' + 1) * p_pow;
		p_pow *= p;
	}
	return hash;
}

class Performer
{
	
	string performer;
	string role;
	string name;


public:
	Performer(string performer_, string name_, string role_) :
		performer{ performer_ }, role{ role_ }, name{ name_ } {}
	Performer(string role_) : performer{}, role{role_}, name{} {}
	Performer() : performer{}, role{}, name{} {}


	/*System::String^ get_date_string()
	{
		return "<" + date.get_day() + "/" + date.get_mounth() + "/" + date.get_year() + ">";
	}*/
	operator int() const
	{
		//return room_number;
		/*long long tmp = polinomic_hash(role);*/
		int counter{ };
		for (auto i = 0; i < role.length(); ++i)
			counter += (int)role[i];
		return counter;
		//return tmp;
	}
	auto get_all_data_string()
	{
		auto str_e = gcnew System::String(performer.c_str());
		auto str_role = gcnew System::String(role.c_str());
		auto str_des = gcnew System::String(name.c_str());

		auto result = str_e + ":::" + str_des + ":::"
			+ str_role;

		return result;
	}

	/*System::String^ get_all_date()
	{
		auto str_e = gcnew System::String(employee.c_str());
		return date.day.ToString() + "/" + date.mounth.ToString() + "/" + date.year.ToString() + "(" + str_e + ")";
	}*/

	/*System::String^ get_all_date()
	{
		auto str_e = gcnew System::String(performer.c_str());
		return (date.day + 30 * date.mounth + 365 * date.year).ToString() + "(" + str_e + ")";
	}*/

	bool operator ==(const Performer& other)
	{
		return role == other.role;
	}
	bool operator !=(const Performer& other)
	{
		return role != other.role;
	}
	bool operator >=(const Performer& other)
	{
		return role >= other.role;
	}
	bool operator <=(const Performer& other)
	{
		return role <= other.role;
	}
	bool operator >(const Performer& other)
	{
		return role > other.role;
	}
	bool operator < (const Performer& other)
	{
		return role < other.role;
	}
	//friend ostream& operator << (ostream& out, Performer& object)
	//{
	//	out << "Employee: " << object.performer << " Building " << object.role << 
	//		" Room number " << object.cost << " | Date: " << object.date;
	//	return out;
	//}
	string get_name() { return name; }
	string get_role() { return role; }
	string get_performer() { return performer; }
};



class Project 
{
	string name;
	string description;
	int cost;
public:
	Project(string name_, string performer_, int cost_) :
		name{ name_ }, description{ performer_ }, cost{ cost_ } {}
	Project() : name{ }, description{  }, cost{  } {}
	operator int() const
	{
		int counter{ };
		for (auto i = 0; i < name.length(); ++i)
			counter += (int)name[i];
		return counter;
	}
	auto get_all_data_string()
	{
		auto str_name = gcnew System::String(name.c_str());
		auto str_performer = gcnew System::String(description.c_str());


		auto result = str_name + ":::" + str_performer + ":::"
			+ cost.ToString();

		return result;
	}
	string get_name() { return name; }
	string get_description() { return description; }
	int get_cost() { return cost; }

	bool operator ==(const Project& other)
	{
		return name == other.name && description == other.description && cost == other.cost;
	}
	bool operator !=(const Project& other)
	{
		return name != other.name || description != other.description || cost != other.cost;
	}
};