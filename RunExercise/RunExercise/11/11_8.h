#pragma once

#include <io.h>  
#include <cstdlib>
#include <ctime> 

#include "../stdafx.h"

constexpr int FURLONG_LENGTH = 5; // Furlong length
constexpr int MAX_HORSES = 7;

class Track;
class Comtrack;

// Horse
class Horse
{

public:
	Horse(const int number, const Track *ptrTrack) : p_HORSE_NUMBER(number),
		p_ptrTrack(ptrTrack),
		p_distanceRun(0.0) 
		
	{
	}

	~Horse(){ }
	
	void displayHorse(const float elapsed_time) const;

protected:
	const Track* p_ptrTrack; 
	const int	 p_HORSE_NUMBER;

	// Time from the start of the race to the crossing of the finish line (in seconds)
	float p_finishTime;  
	// The length (in furlongs) of the part of the distance covered at the moment
	float p_distanceRun;
	
};

// A running horse
class Comhorse : public Horse 
{
public:
	Comhorse(const int number, const Comtrack *ptrTrack) : Horse(number, NULL), 
		m_ptrTrack(ptrTrack) 
		{ }

	void displayHorse(const float elapsed_time) const;

private:
	const Comtrack* m_ptrTrack; 
};

// Racing track
class Track
{

public:

	Track(float lengthTrack, int numberOfHorse);
	~Track();                

	void displayTrack() const;        
	void run();             

	float getTrackLength() const; 

protected:
	Horse *p_ptrArray[MAX_HORSES];

	int p_totalHorses;         // The total number of horses participating in the race
	int p_horseCount;          // The counter of horses processed at the current time
	                         
	const float p_TRACK_LENGTH;	// Track legnth(in furlongs)
	float p_elapsedTime;		// Time elapsed since the start of the race (in seconds)
};

// Horse racing track
class Comtrack : public Track
{
public:
	Comtrack(float lengthTrack, int numberOfHorse);
	~Comtrack();   

	void run();                  

	friend void Comhorse::displayHorse(float) const;

private:
	Comhorse *m_hArray[MAX_HORSES]; 
	int m_horseCount;
};

