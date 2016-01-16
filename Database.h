#pragma once

#define LAP1	0
#define LAP2	1
#define LAP3	2
#define LAP4	3
#define LAP5	4
#define LAP6	5
#define LAP7	6
#define LAP8	7
#define LAP9	8
#define LAP10	9
#define LAP11	10
#define LAP12	11
#define LAP13	12
#define LAP14	13
#define LAP15	14
#define LAP16	15
#define LAP17	16
#define LAP18	17
#define LAP19	18
#define LAP20	19
#define LAP21	20
#define LAP22	21
#define LAP23	22
#define LAP24	23
#define LAP25	24



using namespace System::Data::OleDb;

	public ref struct RaceLapTimings{

	System::String^  raceStartTime;
	System::String^  jacketNumber;
	//System::DateTime ^ raceStartTime;
	int lapsRun;
	static array<System::String^>^ raceLapTimings = gcnew array<System::String^>(25);

	};


ref class Database

{



public:
    Database(void);
	OleDbConnection^ OpenDatabase(System::String ^ pathToDb);
	void CloseDatabase(OleDbConnection^ conn);
	void GetRaceLapTimings(System::String ^ rollNumber, System::String ^ pathToDb, RaceLapTimings^);
};

