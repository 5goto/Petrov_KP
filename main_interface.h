#pragma once
#include "main_interface.h"
#include "hash_table_class.h"
#include "tree_class.h"
#include "init_mod.h"
#include "hotel_main_classes.h"
#include "tree.h"

vector<int> hash_function_keys;
vector<string> hash_function_objects_names;

vector<vector<int>> tree_function_keys;
vector<string> tree_function_objects_names;

class Main_interface 
{
	BTree<Performer*>* performers_data_base;
	SimpleHashTable<Project*>* project_data_base;
	int hash_table_size;
	bool inited;

public:
	Main_interface() : performers_data_base{ nullptr }, project_data_base{ nullptr }, inited{false} {}
	~Main_interface()
	{
		delete performers_data_base;
		delete project_data_base;
	}

	void Init_Data_Bases(int size) // инициализация основных баз данных
	{
		Init_Сleaning_Data_Base cleaning_base;
		Init_Room_Data_Base room_base;
		hash_table_size = size;
		performers_data_base = cleaning_base.Init_Data_Base();
		project_data_base = room_base.Init_Data_Base(hash_table_size);
		inited = true;
	}

	bool is_bases_inited()
	{
		return inited;
	}

	/*vector<string> Init_Cleaning_for_Form()
	{
		ifstream file_for_input("Сleaning.txt");
		string tmp;
		vector<string> splitted_line;
		vector<string> result;


		while (getline(file_for_input, tmp))
		{
			result.push_back(tmp);
		}
		file_for_input.close();
		return result;
	}*/

	vector<int> get_initialize_hash_keys() { return hash_function_keys; }
	vector<string> get_initialize_hash_objects_names() { return hash_function_objects_names; }

	vector<vector<int>> get_tree_keys() { return tree_function_keys; }
	vector<string> get_tree_names() { return tree_function_objects_names; }

	auto get_all_tree_for_debug()
	{
		return performers_data_base;
	}

	auto get_all_tree_for_drawning()
	{
		return performers_data_base->draw_wrap_return();
	}

	auto get_all_hash_table()
	{
		return project_data_base;
	}

	auto get_hash_table_size()
	{
		return hash_table_size;
	}

	int insert_element_to_project(string name, string desc, int cost)
	{
		Project* tmp_struct = new Project{ name, desc, cost };
		int op_result = project_data_base->add_element(tmp_struct);
		return op_result;
	}

	int delete_element_from_project(string name, string desc, int cost)
	{
		Project* tmp_struct = new Project{ name, desc, cost };
		int op_result = project_data_base->delete_element(tmp_struct);
		return op_result;
	}

	auto insert_element_to_performer(string perform, string name, string role)
	{
		Performer* tmp_struct = new Performer{ perform, name, role };
		auto path = performers_data_base->additem(tmp_struct);
		return path;
	}

	auto delete_element_to_performer(string perform, string name, string role)
	{
		Performer* tmp_struct = new Performer{ perform, name, role };
		auto process_result = performers_data_base->delete_wrap(tmp_struct);
		return process_result;
	}

	auto find_all_elements_by_name(string name)
	{
		auto elements_found = performers_data_base->searchOrderTraversWrapper(name);
		return elements_found;
	}

	auto find_object_in_tree(string perform, string name, string role)
	{
		Performer* tmp_struct = new Performer{ perform, name, role };
		return performers_data_base->tree_search(tmp_struct);
	}

	auto find_object_in_table(string name, string description, int cost)
	{
		Project* tmp_struct = new Project{ name, description, cost };
		int operation_result = project_data_base->search_index(tmp_struct);
		if (operation_result != -1)
			return true;
		else
			return false;
	}

	int get_string_code(string object) // функция переводит Строку к числовому представлению - считает сумму кодов символов
	{
		int counter{ };
		for (auto i = 0; i < object.length(); ++i)
			counter += (int)object[i];
		return counter;
	}

	auto print_intermediate_result(string role, int cost_low, int cost_hi, int& comparsions)
	{
		Performer* search_object{ new Performer{role} };
		vector<Project*> result;

		auto sub_result = performers_data_base->search_wrap(search_object, comparsions);

		while (sub_result != NULL)
		{
			Project* tmp = project_data_base->search_index(get_string_code(sub_result->num->get_name()));
			if (tmp != NULL)  
			{
				auto cost = tmp->get_cost();
				if (cost >= cost_low && cost <= cost_hi ) // извлекаем поле возраста из объекта Манга и если оно совпадает с искомым
					result.push_back(tmp); // записываем его в ответ
			}
			sub_result = sub_result->next;
			comparsions++;
		}
		return result;
	}
};