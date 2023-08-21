// Opros_analis.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string.h>
#include <list>
using namespace std;


class AnswerKit
{
	static const char* Countries[5];

	static const char* Education[4];
	static const char* Sex[2];
	static const char* Religion[5];
	static const char* Mustache[2];
	static const char* Health[4];
	static const char* Bodytype[3];
	static const char* Orientation[2];
	static const char* Postcode[10];
	static const char* Profession[4];



	static const char* Mainthings[6];
	static const char* Pets[4];

public:
	static const char* GetMainthings(int x);
	static const char* FillСountry(int x);
	static const char* GetPet(int x);
	static const char* Fill(const char* types, int x);
	static int PetSize();
	static int IndexPet(const char* pet);
	static int IndexMainthings(const char* main);
	static int Size(const char* types);

};


const char* AnswerKit::Mainthings[6] = { "Nothing","Fishing","Food","Religion","Beer","Family" };/*bool*/
const char* AnswerKit::Profession[4] = { "Programmer","engineer","scientist","teacher" };
const char* AnswerKit::Postcode[10] = { "8345","9512","312","451","789","5651","8992","0123","1233","5551" };
const char* AnswerKit::Orientation[2] = { "Heterosexual","Super heterosexual" };
const char* AnswerKit::Bodytype[3] = { "Athletic","Thin","Thick" };
const char* AnswerKit::Health[4] = { "Worst","Not good","Good","Excellent" };
const char* AnswerKit::Mustache[2] = { "Yes","No" };
const char* AnswerKit::Religion[5] = { "Christianity","Islam","Buddhism","Judaism","Hinduism" };
const char* AnswerKit::Sex[2] = { "Male","Female" };
const char* AnswerKit::Education[4] = { "Secondary education","Secondary special education","Bachelor","Master" };
const char* AnswerKit::Pets[4] = { "Dog","Cat","Parrot","Nothing" };/*bool*/
const char* AnswerKit::Countries[5] = { "USA","Russia","China","Japan","Canada" };


const char* AnswerKit::Fill(const char* types, int x)
{
	if (strcmp(types, "Profession") == 0)
	{
		return Profession[x];
	}
	else if (strcmp(types, "Postcode") == 0)
	{
		return Postcode[x];
	}
	else if (strcmp(types, "Orientation") == 0)
	{
		return Orientation[x];
	}
	else if (strcmp(types, "Bodytype") == 0)
	{
		return Bodytype[x];
	}
	else if (strcmp(types, "Health") == 0)
	{
		return Health[x];
	}
	else if (strcmp(types, "Mustache") == 0)
	{
		return Mustache[x];
	}
	else if (strcmp(types, "Religion") == 0)
	{
		return Religion[x];
	}
	else if (strcmp(types, "Sex") == 0)
	{
		return Sex[x];
	}
	else if (strcmp(types, "Education") == 0)
	{
		return Education[x];
	}
}

const char* AnswerKit::FillСountry(int x)
{
	return Countries[x];
}



int AnswerKit::PetSize()
{
	return 4;
}

int AnswerKit::Size(const char* types)
{
	if (strcmp(types, "Profession") == 0)
	{
		return 4;
	}
	else if (strcmp(types, "Postcode") == 0)
	{
		return 10;
	}
	else if (strcmp(types, "Orientation") == 0)
	{
		return 2;
	}
	else if (strcmp(types, "Bodytype") == 0)
	{
		return 3;
	}
	else if (strcmp(types, "Health") == 0)
	{
		return 4;
	}
	else if (strcmp(types, "Mustache") == 0)
	{
		return 2;
	}
	else if (strcmp(types, "Religion") == 0)
	{
		return 5;
	}
	else if (strcmp(types, "Sex") == 0)
	{
		return 2;
	}
	else if (strcmp(types, "Education") == 0)
	{
		return 4;
	}
	else if (strcmp(types, "Mainthings") == 0)
	{
		return 6;
	}


}

int AnswerKit::IndexPet(const char* pet)
{
	for (int i = 0; i < PetSize(); i++)
	{
		if (strcmp(Pets[i], pet) == 0)
		{
			return i;
		}
	}
	return 3;
}

int AnswerKit::IndexMainthings(const char* main)
{
	for (int i = 0; i < AnswerKit::Size("Mainthings"); i++)
	{
		if (strcmp(Mainthings[i], main) == 0)
		{
			return i;
		}
	}
	return 3;
}

const char* AnswerKit::GetPet(int x)
{
	return Pets[x];
}

const char* AnswerKit::GetMainthings(int x)
{
	return Mainthings[x];
}



class Form
{
	struct Questre
	{
		int old;/*1+*/
		int salary;/*2+*/
		int happy; /*3*/
		int work_experience;/*4*/
		int workOurs;/*5*/
		int workdays;/*6*/
		int happycountry;

		const char* country;/*7*/
		const char* education;/*8*/
		const char* sex;/*9*/
		const char* religion;/*10*/
		const char* mustache;/*11*/
		const char* wantlive;/*12*/
		const char* health;/*13*/
		const char* postcode;/*15*/
		const char* bodytype;/*16*/
		const char* orientation;/*17*/
		const char* profession;

		bool mainthings[5];/*19*/
		bool pets[4];/*20*/
	};
	Questre* ptrQuest;

public:
	static Form* Create();

	bool* GetPets();
	bool* GetMainthings();
	int GetOld();

	int GetSalary() { return ptrQuest->salary; }
	int GetHappy() { return ptrQuest->happy; }
	int GetWork_experience() { return ptrQuest->work_experience; }
	int GetWorkOurs() { return ptrQuest->workOurs; }
	int GetWorkdays() { return ptrQuest->workdays; }
	int GetHappycountry() { return ptrQuest->happycountry; }



	const char* GetCountry();
	const char* GetProfession() { return ptrQuest->profession; }
	const char* GetSex() { return ptrQuest->sex; }
	const char* GetReligion() { return ptrQuest->religion; }
	const char* GetMustache() { return ptrQuest->mustache; }
	const char* GetWantlive() { return ptrQuest->wantlive; }
	const char* GetHealth() { return ptrQuest->health; }
	const char* GetPostcode() { return ptrQuest->postcode; }
	const char* GetBodytype() { return ptrQuest->bodytype; }
	const char* GetOrientation() { return ptrQuest->orientation; }
	const char* GetEducation() { return ptrQuest->education; }
	void Print();

	~Form()
	{
		delete ptrQuest;
	}

private:
	Form(Questre* questptr) : ptrQuest(questptr) {}
};

bool* Form::GetPets()
{
	return ptrQuest->pets;
}

bool* Form::GetMainthings()
{
	return ptrQuest->mainthings;
}

Form* Form::Create()
{
	Questre* tmp = new Questre;
	tmp->old = 17 + rand() % 100;
	tmp->salary = 12000 + rand() % 2222222;
	tmp->work_experience = rand() % 50;
	tmp->workOurs = rand() % 14;
	tmp->workdays = rand() % 8;
	tmp->happycountry = rand() % 10;
	tmp->happy = rand() % 11;
	tmp->country = AnswerKit::FillСountry(rand() % 5);
	tmp->pets[AnswerKit::PetSize() - 1] = rand() % 2;
	tmp->bodytype = AnswerKit::Fill("Bodytype", rand() % (AnswerKit::Size("Bodytype")));
	tmp->education = AnswerKit::Fill("Education", rand() % (AnswerKit::Size("Education")));
	tmp->health = AnswerKit::Fill("Health", rand() % (AnswerKit::Size("Health")));
	tmp->mustache = AnswerKit::Fill("Mustache", rand() % (AnswerKit::Size("Mustache")));
	tmp->orientation = AnswerKit::Fill("Orientation", rand() % (AnswerKit::Size("Orientation")));
	tmp->postcode = AnswerKit::Fill("Postcode", rand() % (AnswerKit::Size("Postcode")));
	tmp->religion = AnswerKit::Fill("Religion", rand() % (AnswerKit::Size("Religion")));
	tmp->wantlive = AnswerKit::Fill("Country", rand() % (AnswerKit::Size("Country")));
	tmp->profession = AnswerKit::Fill("Profession", rand() % (AnswerKit::Size("Profession")));
	tmp->sex = AnswerKit::Fill("Sex", rand() % (AnswerKit::Size("Sex")));
	tmp->wantlive = AnswerKit::FillСountry(rand() % 5);

	if (true)
	{
		int a;
		a = 0;
		for (int i = AnswerKit::Size("Mainthings") - 1; i > -1; i--)
		{
			if ((i != 0))
			{
				tmp->mainthings[i] = rand() % 2;
				if (tmp->mainthings[i] == 1)
				{
					a = 1;
				}
			}
			else
			{
				if (a == 0)
				{
					tmp->mainthings[i] = 1;
				}
				else
				{
					tmp->mainthings[i] = 0;
				}
			}
		}
	}

	if (tmp->pets[AnswerKit::PetSize() - 1] != 1)
	{
		int a;
		a = 0;
		for (int i = AnswerKit::PetSize() - 2; i > -1; i--)
		{
			tmp->pets[i] = rand() % 2;
			if (tmp->pets[i] == 1)
			{
				a = 1;
			}
		}
		if (a == 0)
		{
			tmp->pets[AnswerKit::PetSize() - 1] = 1;
		}
	}
	else
	{

		for (int i = AnswerKit::PetSize() - 2; i > -1; i--)
		{
			tmp->pets[i] = 0;
		}
	}

	return new Form(tmp);
}



const char* Form::GetCountry()
{
	return ptrQuest->country;
}

int Form::GetOld()
{
	return ptrQuest->old;
}

void Form::Print()
{
	cout << "________________________________________________________________" << endl;
	cout << "Old:                        " << ptrQuest->old << endl;
	cout << "Country:                    " << ptrQuest->country << endl;
	cout << "Religion                    " << ptrQuest->religion << endl;
	cout << "Mustache                    " << ptrQuest->mustache << endl;
	cout << "Education                   " << ptrQuest->education << endl;
	cout << "Profession                  " << ptrQuest->profession << endl;
	cout << "Salary                      " << ptrQuest->salary << endl;
	cout << "Health                      " << ptrQuest->health << endl;
	cout << "Happy with the country      " << ptrQuest->happycountry << endl;
	cout << "Body type:                  " << ptrQuest->bodytype << endl;
	cout << "Work days                   " << ptrQuest->workdays << endl;
	cout << "Working hours per day       " << ptrQuest->workOurs << endl;
	cout << "Work experience years       " << ptrQuest->work_experience << endl;
	cout << "Orientation                 " << ptrQuest->orientation << endl;
	cout << "Sex                         " << ptrQuest->sex << endl;
	cout << "Postcode                    " << ptrQuest->postcode << endl;
	cout << "Want live in                " << ptrQuest->wantlive << endl;
	cout << "Happy                       " << ptrQuest->happy << "(0-10)" << endl;
	/*cout << "\t  \t " << ptrQuest-> << endl;*/


	cout << "Pets:                       ";
	for (int i = 0; i < AnswerKit::PetSize(); i++)
	{
		if (ptrQuest->pets[i] == 1)
		{
			cout << AnswerKit::GetPet(i) << ' ';
		}
	}
	cout << "\nMainthings:                 ";
	for (int i = 0; i < AnswerKit::Size("Mainthings"); i++)
	{
		if (ptrQuest->mainthings[i] == 1)
		{
			cout << AnswerKit::GetMainthings(i) << ' ';
		}
	}


}




template <class form, class Allocator = allocator<form>>
class Mycollection
{

	int collection_length;
	int additional_length;
	form** collection;
	int reserve;
public:

	Mycollection* SearchOld(int old);
	Mycollection* Search(const char* types, const char* name);
	Mycollection* Search(const char* types, int old);

	int OldFrequensy(int old);
	void CountryFrequensy(const char* country);

	void Frequency(const char* types, int number);
	void Frequency(const char* types, const char* name);

	void Push_back(form* collection);
	void Push_back();

	int Size()
	{
		return collection_length;
	}


	void Delete(int index);

	void Print();

	Mycollection();
	Mycollection(int size);

	~Mycollection();


};

template <class form, class Allocator>
void Mycollection<form, Allocator>::Frequency(const char* types, int number)
{
	double counter;
	float cond;
	counter = 0;

	if (strcmp(types, "Old") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetOld())
			{
				counter++;
			}
		}
		cond = counter / collection_length;

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

	if (strcmp(types, "Salary") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number < (*collection[i]).GetSalary())
			{
				counter++;
			}
		}
		cond = counter / collection_length;

		cout << "Salary less than " << number << endl;
		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

	if (strcmp(types, "Happy") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetHappy())
			{
				counter++;
			}
		}
		cond = counter / collection_length;

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}


	if (strcmp(types, "Workexperience") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetWork_experience())
			{
				counter++;
			}
		}
		cond = counter / collection_length;

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

	if (strcmp(types, "Workhours") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetWorkOurs())
			{
				counter++;
			}
		}
		cond = counter / collection_length;

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

	if (strcmp(types, "Workdays") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetWorkdays())
			{
				counter++;
			}
		}
		cond = counter / collection_length;

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}


	if (strcmp(types, "Happycountry") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetHappycountry())
			{
				counter++;
			}
		}
		cond = counter / collection_length;

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

}
template <class form, class Allocator>
void Mycollection<form, Allocator>::Frequency(const char* types, const char* name)
{
	double counter = 0;
	float cond;

	if (strcmp(types, "Country") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetCountry()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Religion") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetReligion()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Pet") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if ((*collection[i]).GetPets()[AnswerKit::IndexPet(name)] == 1)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Mainthings") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if ((*collection[i]).GetMainthings()[AnswerKit::IndexMainthings(name)] == 1)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Mustache") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetMustache()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Education") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetEducation()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Profession") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetProfession()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Health") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetHealth()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Bodytype") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetBodytype()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Orientation") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetOrientation()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Sex") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetSex()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Postcode") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetPostcode()) == 0)
			{
				counter++;
			}
		}
		cond = counter / collection_length;
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}
}

template <class form, class Allocator>
void Mycollection<form, Allocator>::CountryFrequensy(const char* country)
{
	double counter = 0;
	float cond;
	for (int i = 0; i < collection_length; i++)
	{
		if (strcmp(country, (*collection[i]).GetCountry()) == 0)
		{
			counter++;
		}
	}

	cond = counter / collection_length;
	cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;

}


template <class form, class Allocator>
Mycollection<form, Allocator>* Mycollection<form, Allocator>::SearchOld(int old)
{
	Mycollection* ptrList;
	ptrList = new Mycollection;

	for (int i = 0; i < collection_length; i++)
	{
		if (old == (*collection[i]).GetOld())
		{
			(*ptrList).Push_back(collection[i]);
		}
	}
	return ptrList;
}

template <class form, class Allocator>
Mycollection<form, Allocator>* Mycollection<form, Allocator>::Search(const char* types, const char* name)
{
	Mycollection* ptrList;
	ptrList = new Mycollection;
	if (strcmp(types, "Country") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetCountry()) == 0)
			{
				(*ptrList).Push_back(collection[i]);
			}
		}
	}

	if (strcmp(types, "Pet") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if ((*collection[i]).GetPets()[AnswerKit::IndexPet(name)] == 1)
			{
				(*ptrList).Push_back(collection[i]);
			}
		}
	}

	if (strcmp(types, "Religion") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (strcmp(name, (*collection[i]).GetReligion()) == 0)
			{
				(*ptrList).Push_back(collection[i]);
			}
		}
	}

	return ptrList;
}


template <class form, class Allocator>
Mycollection<form, Allocator>* Mycollection<form, Allocator>::Search(const char* types, int number)
{
	Mycollection* ptrList;
	ptrList = new Mycollection;
	if (strcmp(types, "Old") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetOld())
			{
				(*ptrList).Push_back(collection[i]);
			}
		}

	}


	if (strcmp(types, "Salary") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number < (*collection[i]).GetSalary())
			{
				(*ptrList).Push_back(collection[i]);
			}
		}

	}

	if (strcmp(types, "Happy") == 0)
	{
		for (int i = 0; i < collection_length; i++)
		{
			if (number == (*collection[i]).GetHappy())
			{
				(*ptrList).Push_back(collection[i]);
			}
		}

	}



	return ptrList;
}


template <typename form, class Allocator>
void Mycollection<form, Allocator>::Push_back(form* collection_elem)
{
	if (reserve != 0)
	{
		collection[collection_length] = collection_elem;
		collection_length++;
	}
	else
	{
		form** acollection;
		acollection = new form * [collection_length + collection_length * 0.3 + 1];
		for (int i = 0; i < collection_length; i++)
		{
			acollection[i] = collection[i];
		}
		delete[] collection;

		acollection[additional_length] = collection_elem;
		additional_length = collection_length + collection_length * 0.3 + 1;

		collection_length++;
		collection = acollection;
	}
	reserve = additional_length - collection_length;
}

template <class form, class Allocator>
int  Mycollection<form, Allocator>::OldFrequensy(int old)
{
	double counter;
	float cond;
	counter = 0;
	for (int i = 0; i < collection_length; i++)
	{
		if (old == (*collection[i]).GetOld())
		{
			counter++;
		}
	}
	cond = counter / collection_length;

	cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	return counter;
}


template <class form, class Allocator>
void Mycollection<form, Allocator>::Print()
{
	for (int i = 0; i < collection_length; i++)
	{
		(*collection[i]).Print();
		cout << "\n" << endl;

	}
}


template <class form, class Allocator>
void Mycollection<form, Allocator>::Delete(int index)
{
	delete collection[index];
	collection[index] = NULL;
	collection_length -= 1;
	for (int i = index; i < collection_length; i++)
	{
		collection[i] = collection[i + 1];
	}
}


template <class form, class Allocator>
void Mycollection<form, Allocator>::Push_back()
{
	if (reserve != 0)
	{
		collection[collection_length] = form::Create();
		collection_length++;
	}
	else
	{
		form** acollection;
		acollection = new form * [collection_length + collection_length * 0.3 + 1];
		for (int i = 0; i < collection_length; i++)
		{
			acollection[i] = collection[i];
		}
		delete[] collection;

		acollection[additional_length] = form::Create();
		additional_length = collection_length + collection_length * 0.3 + 1;

		collection_length++;
		collection = acollection;
	}
	reserve = additional_length - collection_length;

}


template <class form, class Allocator>
Mycollection<form, Allocator>::~Mycollection()
{
	{
		for (int i = 0; i < collection_length; i++)
		{
			delete collection[i];
		}
		delete[] collection;
	}
}


template <class form, class Allocator>
Mycollection<form, Allocator>::Mycollection(int size) : collection_length(size),
additional_length(collection_length + collection_length * 0.3 + 1), collection(new form* [additional_length]), reserve(additional_length - collection_length)
{

	for (int i = 0; i < collection_length; i++)
	{
		collection[i] = form::Create();
	}
}


template <class form, class Allocator>
Mycollection<form, Allocator>::Mycollection() : collection_length(0),
additional_length(2), collection(new form* [additional_length]), reserve(additional_length - collection_length) {}









template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
class Wrapped_collection
{
	int size = 0;
	Collection<Form>* Mycollection = new Collection<Form>;
public:

	~Wrapped_collection() { delete Mycollection; }
	Wrapped_collection() {};
	void Push_back();
	void Push_back(Form* collection_elem);
	void Delete(int x);
	void Frequency(const char* types, const char* name);
	void Frequency(const char* types, int x);
	void Print();

	int Size();

	Wrapped_collection* Search(const char* types, const char* name);
	Wrapped_collection* Search(const char* types, int x);


	Wrapped_collection(int asize) :size(asize), Mycollection(new Collection<Form>(size)) { }
private:

	Wrapped_collection(Collection<Form>* Ptr) : Mycollection(Ptr) {};


};


template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
void Wrapped_collection<Collection, Form>::Print()
{
	(*Mycollection).Print();
}


template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
int  Wrapped_collection<Collection, Form>::Size()
{
	return (*Mycollection).Size();
}

template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
void Wrapped_collection<Collection, Form>::Push_back()
{
	(*Mycollection).Push_back();
}

template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
void Wrapped_collection<Collection, Form>::Push_back(Form* collection_elem)
{
	(*Mycollection).Push_back(collection_elem);
}

template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
void Wrapped_collection<Collection, Form>::Delete(int x)
{
	(*Mycollection).Delete(x);
}

template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
void Wrapped_collection<Collection, Form>::Frequency(const char* types, const char* name)
{
	(*Mycollection).Frequency(types, name);
}

template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
void Wrapped_collection<Collection, Form>::Frequency(const char* types, int number)
{
	(*Mycollection).Frequency(types, number);
}

template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
Wrapped_collection<Collection, Form>* Wrapped_collection<Collection, Form>::Search(const char* types, const char* name)
{
	return new Wrapped_collection((*Mycollection).Search(types, name));
}

template <template <class T, class Allocator = allocator<T>> class Collection, class Form>
Wrapped_collection<Collection, Form>* Wrapped_collection<Collection, Form>::Search(const char* types, int x)
{
	return new Wrapped_collection((*Mycollection).Search(types, x));
}




template <class Form>/* list template specialization */
class Wrapped_collection<list, Form>
{
	int size;
	list<Form*>* Mycollection = new list<Form*>;

public:

	Wrapped_collection() {}

	Wrapped_collection(int asize) : size(asize) {

		for (int i = 0; i < size; i++)
		{
			(Mycollection)->push_back(Form::Create());
		}
	}

	~Wrapped_collection() { Mycollection->clear(); delete Mycollection; }
	void Frequency(const char* types, const char* name);
	void Frequency(const char* types, int number);
	void Push_back();
	void Push_back(Form elem);
	void Print();
	void Delete(int x);

	Wrapped_collection<list, Form>* Search(const char* types, const char* name);
	Wrapped_collection<list, Form>* Search(const char* types, int x);



private:

	Wrapped_collection(list<Form*>* Ptr) : Mycollection(Ptr) {}
};



template <class Form>

void Wrapped_collection<list, Form>::Delete(int x)
{
	if (x == ((*Mycollection).size() - 1))
	{
		(*Mycollection).pop_back();
	}
	else if (x == 0)
	{
		(*Mycollection).pop_front();
	}
	else
	{
		list<Form*>::template iterator range_begin = (*Mycollection).begin();
		list<Form*>::template iterator range_end = (*Mycollection).begin();
		advance(range_begin, x);
		advance(range_end, x + 1);
		(*Mycollection).erase(range_begin, range_end);
	}
}

template <class Form>

void Wrapped_collection<list, Form>::Frequency(const char* types, int number)
{
	double counter;
	float cond;
	counter = 0;

	if (strcmp(types, "Old") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetOld())
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}
	if (strcmp(types, "Salary") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number < (**i).GetSalary())
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();

		cout << "Salary less than " << number << endl;
		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

	if (strcmp(types, "Happy") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetHappy())
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}


	if (strcmp(types, "Workexperience") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetWork_experience())
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

	if (strcmp(types, "Workhours") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetWorkOurs())
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

	if (strcmp(types, "Workdays") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetWorkdays())
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}


	if (strcmp(types, "Happycountry") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetHappycountry())
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();

		cout << "absolute frequency is:  " << counter << "  conditional frequency is:  " << cond << endl;

	}

}


template <class Form>

void Wrapped_collection<list, Form>::Frequency(const char* types, const char* name)
{
	double counter = 0;
	float cond;

	if (strcmp(types, "Country") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetCountry()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Pet") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if ((**i).GetPets()[AnswerKit::IndexPet(name)] == 1)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Mainthings") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if ((**i).GetMainthings()[AnswerKit::IndexMainthings(name)] == 1)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Mustache") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetMustache()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Education") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetEducation()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Profession") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetProfession()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Health") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetHealth()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Bodytype") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetBodytype()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Orientation") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetOrientation()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Sex") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetSex()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}


	if (strcmp(types, "Postcode") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetPostcode()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}

	if (strcmp(types, "Religion") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetReligion()) == 0)
			{
				counter++;
			}
		}
		cond = counter / (*Mycollection).size();
		cout << "absolute frequensy is:  " << counter << "  conditional frequensy is:  " << cond << endl;
	}
}


template <class Form>

void Wrapped_collection<list, Form>::Push_back()
{
	(*Mycollection).push_back(Form::Create());
}

template <class Form>
void Wrapped_collection<list, Form>::Push_back(Form elem)
{
	(*Mycollection).push_back(elem);
}

template <class Form>
void Wrapped_collection<list, Form>::Print()
{
	for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
	{
		(**i).Print();
		cout << "\n" << endl;
	}
}

template <class Form>

Wrapped_collection<list, Form>* Wrapped_collection<list, Form>::Search(const char* types, int number)
{
	list<Form*>* newList = new list<Form*>;

	if (strcmp(types, "Old") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetOld())
			{
				(*newList).push_back(*i);
			}
		}
	}


	if (strcmp(types, "Salary") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number < (**i).GetSalary())
			{
				(*newList).push_back(*i);
			}
		}

	}

	if (strcmp(types, "Happy") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (number == (**i).GetHappy())
			{
				(*newList).push_back(*i);
			}
		}

	}
	return new Wrapped_collection(newList);
}

template <class Form>

Wrapped_collection<list, Form>* Wrapped_collection<list, Form>::Search(const char* types, const char* name)
{

	list<Form*>* newList = new list<Form*>;

	if (strcmp(types, "Country") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetCountry()) == 0)
			{
				(*newList).push_back(*i);
			}
		}
	}
	if (strcmp(types, "Pet") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if ((**i).GetPets()[AnswerKit::IndexPet(name)] == 1)
			{
				(*newList).push_back(*i);
			}
		}
	}

	if (strcmp(types, "Religion") == 0)
	{
		for (auto i = (*Mycollection).begin(); i != (*Mycollection).end(); i++)
		{
			if (strcmp(name, (**i).GetReligion()) == 0)
			{
				(*newList).push_back(*i);
			}
		}
	}
	return new Wrapped_collection(newList);
}

int main()
{
	srand(time(NULL));



	Wrapped_collection<Mycollection, Form> myList(500);
	Wrapped_collection<Mycollection, Form>* ptrList;

	ptrList = myList.Search("Salary", 30000);

	(*ptrList).Print();
	myList.Frequency("Religion", "Buddhism");


	return 0;
}


