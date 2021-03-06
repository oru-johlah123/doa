#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "List.h"
#include "Person.h"

using namespace std;
/** Class FileManager, simple filemanager class that reads data from a file and puts the person in its correct list. (male or female list) */
class FileManager
{
public:
	List<Person> girlList;
	List<Person> boyList;

	FileManager(void)
	{
	}

	~FileManager(void)
	{
	}

	void ReadFile(string fileName)
	{
		ifstream MyFile;
		Person dummyPerson;
		Person emptyPerson;

		MyFile.open(fileName);

		while(!MyFile.eof())
		{
			MyFile >> dummyPerson;
			if(dummyPerson.getGender().compare("female") == 0)
				girlList.add(dummyPerson);
			else if(dummyPerson.getGender().compare("male") == 0)
				boyList.add(dummyPerson);
			dummyPerson = emptyPerson;
		}

		MyFile.close();
	}
};

