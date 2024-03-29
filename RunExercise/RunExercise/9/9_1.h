// A class of publications and its offspring

#pragma once

#include "..\stdafx.h"

class Publication
{
public:
	void getData();
	void putData() const;

protected:
	char p_title[LENGTH];
	float p_price;	
};

class Book :public Publication
{
public:
	void getData();
	void putData() const;
private:
	int m_countPage; // count of page

};

class Type : public Book
{
public:
	void getData();
	void putData() const;
private:
	float m_recordTime;	// recording time in minutes
};

