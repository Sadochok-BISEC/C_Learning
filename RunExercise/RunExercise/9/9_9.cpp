#include "9_9.h"

using namespace NineNine;

int main9_9()
{
	Executive excutive;
	Manager manager;
	Scientist scientist;
	Laborer laborer;

	// Gets info
	std::cout << "Input info about a senior manager\n"; 
	excutive.getData();

	std::cout << "Input info about the manage\n";
	manager.getData();

	std::cout << "Input info about the scientist\n";
	scientist.getData();

	std::cout << "Input info about the laborer\n";
	laborer.getData();

	// Puts info
	std::cout << "Info about a senior manager\n"; 
	excutive.putData();

	std::cout << "Output info about the manager\n";
	manager.putData();

	std::cout << "Output info about the scientist\n";
	scientist.putData();

	std::cout << "Output info about the laborer\n";
	laborer.putData();
	
	std::cout << std::endl;

	return 0;
}


namespace NineNine
{
	void Student::getData()
	{
		std::cout<<"Input title of the school: ";
		std::cin >> m_nameSchool;

		std::cout << "Input degree of the education: \n";
		std::cin >> m_degree;
	}
	void Student::putData() const
	{
		std::cout << "Educational institution: "<<m_nameSchool;
		std::cout << "The lvl of education recieved: " << m_degree;
	}

	void Employee::getData()
	{
		std::cout << "Enter name: ";
		std::cin.get(m_name, LENGTH);

		std::cout << "Enter number: ";
		std::cin >> m_number;
		std::cout << "\n";
	}
	void Employee::putData() const
	{
		std::cout << "Name: " << m_name << "\n";
		std::cout << "Number: " << m_number << "\n";
	}

	void Manager::getData()
	{
		Employee::getData();

		std::cout << "Enter title of manager: ";
		std::cin.get(m_title, LENGTH);

		std::cout << "Enter dues at the golf club: ";
		std::cin >> m_dues;
		std::cout << "\n";

		Student::getData();
	}
	void Manager::putData() const
	{
		Employee::putData();

		std::cout << "Title of mananer: " << m_title << "\n";
		std::cout << "Dues: " << m_dues << "\n";

		Student::putData();
	}

	void Executive::getData()
	{
		Manager::getData();

		std::cout << "Input amount of the annual premium: ";
		std::cin >> m_yearlyBonus;

		std::cout << "Input number of shares: ";
		std::cin >> m_shares;
	}
	void Executive::putData() const
	{
		Manager::putData();

		std::cout << "Amount of the annual premium: "
			<< m_yearlyBonus<<"\n";
		std::cout << "Number of shares: "
			<< m_shares << "\n";;
	}

	void Scientist::getData()
	{
		Employee::getData();

		std::cout << "Enter count of publications: ";
		std::cin >> m_publications;
		std::cout << "\n";

		Student::getData();
	}
	void Scientist::putData() const
	{
		Employee::putData();

		std::cout << "Count of publications: " << m_publications << "\n";

		Student::putData();
	}
}