#include "StdAfx.h"
#include "Database.h"




Database::Database(void)
{

}



void Database::GetRaceLapTimings(System::String ^ rollNumber,System::String ^ pathToDb, RaceLapTimings^ rLT){

	OleDbConnection^ conn;
	conn = OpenDatabase(pathToDb);

	//System::Globalization::NumberFormatInfo^  provider = new NumberFormatInfo( );
//Create an OleDbCommand object and
	

System::String ^ sqlstr = "SELECT * FROM tags_process where roll_number = " + rollNumber;
//pass it the SQL read query and the connection to use
OleDbCommand^ cmd = gcnew OleDbCommand(sqlstr,conn);

//Procure the OleDbDataReader object to browse the recordset 
OleDbDataReader^ rdr = cmd->ExecuteReader();

//Keep reading records in the forward direction
while (rdr->Read())
{
	rLT->jacketNumber = rdr->GetValue(rdr->GetOrdinal("jacket_number"))->ToString();
	rLT->lapsRun =  System::Convert::ToInt32(rdr->GetValue(rdr->GetOrdinal("LAPS")));
	rLT->raceStartTime = rdr->GetValue(rdr->GetOrdinal("stime"))->ToString();
	rLT->raceLapTimings[LAP1] = rdr->GetValue(rdr->GetOrdinal("LAP1"))->ToString();				
	rLT->raceLapTimings[LAP2] = rdr->GetValue(rdr->GetOrdinal("LAP2"))->ToString();	
	rLT->raceLapTimings[LAP3] = rdr->GetValue(rdr->GetOrdinal("LAP3"))->ToString();	
	rLT->raceLapTimings[LAP4] = rdr->GetValue(rdr->GetOrdinal("LAP4"))->ToString();	
	rLT->raceLapTimings[LAP5] = rdr->GetValue(rdr->GetOrdinal("LAP5"))->ToString();	
	rLT->raceLapTimings[LAP6] = rdr->GetValue(rdr->GetOrdinal("LAP6"))->ToString();	
	rLT->raceLapTimings[LAP7] = rdr->GetValue(rdr->GetOrdinal("LAP7"))->ToString();	
	rLT->raceLapTimings[LAP8] = rdr->GetValue(rdr->GetOrdinal("LAP8"))->ToString();	
	rLT->raceLapTimings[LAP9] = rdr->GetValue(rdr->GetOrdinal("LAP9"))->ToString();	
	rLT->raceLapTimings[LAP10] = rdr->GetValue(rdr->GetOrdinal("LAP10"))->ToString();	
	rLT->raceLapTimings[LAP11] = rdr->GetValue(rdr->GetOrdinal("LAP11"))->ToString();	
	rLT->raceLapTimings[LAP12] = rdr->GetValue(rdr->GetOrdinal("LAP12"))->ToString();	
	rLT->raceLapTimings[LAP13] = rdr->GetValue(rdr->GetOrdinal("LAP13"))->ToString();	
	rLT->raceLapTimings[LAP14] = rdr->GetValue(rdr->GetOrdinal("LAP14"))->ToString();	
	rLT->raceLapTimings[LAP15] = rdr->GetValue(rdr->GetOrdinal("LAP15"))->ToString();	
	rLT->raceLapTimings[LAP16] = rdr->GetValue(rdr->GetOrdinal("LAP16"))->ToString();	
	rLT->raceLapTimings[LAP17] = rdr->GetValue(rdr->GetOrdinal("LAP17"))->ToString();	
	rLT->raceLapTimings[LAP18] = rdr->GetValue(rdr->GetOrdinal("LAP18"))->ToString();	
	rLT->raceLapTimings[LAP19] = rdr->GetValue(rdr->GetOrdinal("LAP19"))->ToString();	
	rLT->raceLapTimings[LAP20] = rdr->GetValue(rdr->GetOrdinal("LAP20"))->ToString();	
	rLT->raceLapTimings[LAP21] = rdr->GetValue(rdr->GetOrdinal("LAP21"))->ToString();	
	rLT->raceLapTimings[LAP22] = rdr->GetValue(rdr->GetOrdinal("LAP22"))->ToString();	
	rLT->raceLapTimings[LAP23] = rdr->GetValue(rdr->GetOrdinal("LAP23"))->ToString();	
	rLT->raceLapTimings[LAP24] = rdr->GetValue(rdr->GetOrdinal("LAP24"))->ToString();	
	rLT->raceLapTimings[LAP25] = rdr->GetValue(rdr->GetOrdinal("LAP25"))->ToString();	



	//for(int i = 0; i<25; i++){

	//				 System::Windows::Forms::MessageBox::Show(rLT->raceLapTimings[i]);
	//

	//}

}
                rdr->Close();



	CloseDatabase(conn);

}

OleDbConnection^ Database::OpenDatabase(System::String ^ pathToDb){

	 OleDbConnection^ conn = gcnew OleDbConnection();

	 System::String^ connString;

	 connString = ("Provider=Microsoft.Jet.OLEDB.4.0;" + "Data Source=");
	 connString += pathToDb;
	 connString +=";User id=admin;" + "Password=";


	 conn->ConnectionString = connString;;
	 	conn->Open();
		return conn;
		

}

void Database::CloseDatabase(OleDbConnection^conn){

	conn->Close();
}