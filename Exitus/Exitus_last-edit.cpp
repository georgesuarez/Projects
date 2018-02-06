#include <iostream>
#include <stlib.h>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include<string>

using namespace std;
//////////////////////////////////////////////////////////////////////////
//////////////     DECLARED MEMBER FUNCTIONS       //////////////////////
////////////////////////////////////////////////////////////////////////

void intro();
void titleflash();
void playerinfo(string& , int& ,int& ,int& , int& , string& , string&);
void playerstats(int& , int&, int&, int&, int&);
void CHARACTER_LOCATION(int& , int& , int&, int&, int&, int&, int&, string a[]);
void character_choices(int& ,int& ,int& ,int& ,int& ,int& ,int& , string a[]);
int atStart(int& ,int& ,int& ,int& ,int& ,int& ,int& , string a[]);
void atDoor(int& ,int& ,int& ,int& ,int& ,int& ,int& , string a[]);
void atBed(int& ,int& ,int& ,int& ,int& ,int& ,int& , string a[]);
	void NEVER_UNDER_THE_BED();
void INVESTIGATE_ROOM(int& ,int& ,int& ,int& ,int& ,int& ,int& , string a[]);
void END();
void DEAD();

int door_counter = 0;

int main()
{
	system("mode 3000");
	system("color 0C");
	int hi_ft,
		hi_in,
		we_lb,
		age,
		lightswitch =0,
		location = 0,
		start_cnt = 0,
		code = 0;

	int strength=0,
		intelligence=0,
		luck=0,
		cnt=0,
		total = 15;
	
	string 	name,
			gender, 
			bodytype;
	string inventory[4] = {""};
	
	intro();
	//titleflash();
	playerinfo(name , age, hi_ft , hi_in, we_lb, gender, bodytype);	
	
	
	playerstats(total, cnt,strength, intelligence, luck);
	

	CHARACTER_LOCATION(location, lightswitch, start_cnt, code, strength,intelligence,luck, inventory);
	
	
	
	
	return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////           INTRO                       ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void intro()
{
	cout<<"\t\t\t -------------------------------------------------------------\n";
	cout<<"\t\t\t |                                                           |\n"
		<<"\t\t\t |                EXITUS RPG ESCAPE GAME...                  |\n"
		<<"\t\t\t |                  ----PROGRAMMERS----                      |\n"
		<<"\t\t\t |                      DAVID CRUZ...                        |\n"
		<<"\t\t\t |                      SHADY .....                          |\n"
		<<"\t\t\t |                      CAROLINA LUNA                        |\n"
		<<"\t\t\t |                                                           |\n"
		<<"\t\t\t |___________________________________________________________|\n";
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		
		system("pause");
		system("cls");
		
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////             TITLE                   ///////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void titleflash()
	{
		cout<<"\t\t\t\t\t\t\t\tWELCOME TO: \n\n";
		Sleep(2000);
		cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     \n";Sleep(300);
		cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@  @@@@@@@@@@   @@@|   @@@   @@@@   @@@     \n";Sleep(300);
		cout<<"\t\t\t  @@@@   |     @@@@  @@@@|     @@@@        @@@@  |   @@@'   @@@   @@@@   @@@     \n";Sleep(300);
		cout<<"\t\t\t  @@@@          @@@  @@@       @@@@        @@@@  '   @@@    @@@   @@@@    |      \n";Sleep(300);
		cout<<"\t\t\t  @@@@@@@@@@     @@@@@@        @@@@        @@@@      @@@    @@@    @@@@          \n";Sleep(300);
		cout<<"\t\t\t  @@@@@@@@@@     @@@@@@        @@@@        @@@@      @@@    @@@     @@@@@@@@     \n";Sleep(300);
		cout<<"\t\t\t  @@@@     |    @@@| @@@       @@@@        @@@@      @@@    @@@          @@@@    \n";Sleep(300);
		cout<<"\t\t\t  @@@@         @@@@  @@@@      @@@@        @@@@      @@@    @@@   @@@   @@@@@    \n";Sleep(300);
		cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     @@@@      @@@@@@@@@@   @@@  @@@@@@    \n";Sleep(300);
		cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     @@@@      @@@@@@@@@@   @@@@@@@@@@|    \n";Sleep(300);
		cout<<"\t\t\t  | ' |       |       |     |    ||        |          ||    |     |   '     |    \n";Sleep(300);
		cout<<"\t\t\t  |   |   '   '       '     |    '         |     '    |'          |         '    \n";Sleep(250);
		cout<<"\t\t\t  | | '   '     '     |     '       '        '   |        '           |     '    \n";Sleep(250);   
			
	for(int i = 1; i<7; i++)
		{
			system("cls");
			cout<<"\n\n";
			cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     \n";
			cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@  @@@@@@@@@@   @@@|   @@@   @@@@   @@@     \n";
			cout<<"\t\t\t  @@@@         @@@@  @@@@      @@@@        @@@@  |   @@@    @@@   @@@@   @@@     \n";
			cout<<"\t\t\t  @@@@          @@@  @@@       @@@@        @@@@      @@@    @@@   @@@@    |      \n";
			cout<<"\t\t\t  @@@@@@@@@@     @@@@@@        @@@@        @@@@      @@@    @@@    @@@@          \n";
			cout<<"\t\t\t  @@@@@@@@@@     @@@@@@        @@@@        @@@@      @@@    @@@     @@@@@@@@     \n";
			cout<<"\t\t\t  @@@@     |    @@@| @@@       @@@@        @@@@      @@@    @@@          @@@@    \n";
			cout<<"\t\t\t  @@@@         @@@@  @@@@      @@@@        @@@@      @@@    @@@   @@@   @@@@@    \n";
			cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     @@@@      @@@@@@@@@@   @@@   @@@@@    \n";
			cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  |@@@@@@@@@     @@@@      @@@@@@@@@@   @@@@@@@@@@|    \n";Sleep(100);
			cout<<"\t\t\t  |   '' |       |       |     |    ||        |          ||    |     |   '     | \n";Sleep(500);
			cout<<"\t\t\t  |   |   '   '       '     |    '         |     '    |'          |         '    \n";Sleep(250);
			cout<<"\t\t\t  | | '   '     '     |     '       '        '   |        '           |     '    \n";Sleep(250);
			cout<<"\t\t\t                                  LOADING...                                     \n";Sleep(350);
			cout<<"\t\t\t  | '    '         |      '       |  ' |   '    '            ' |           '     \n";Sleep(250);
				
				if(i == 6)
				{
					system("cls");
					int StartChoice;
					cout<<"\n\n";
					cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     \n";
					cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@  @@@@@@@@@@   @@@|   @@@   @@@@   @@@     \n";
					cout<<"\t\t\t  @@@@   |     @@@@  @@@@|     @@@@        @@@@  |   @@@'   @@@   @@@@   @@@     \n";
					cout<<"\t\t\t  @@@@          @@@  @@@       @@@@        @@@@  '   @@@    @@@   @@@@    |      \n";
					cout<<"\t\t\t  @@@@@@@@@@     @@@@@@        @@@@        @@@@      @@@    @@@    @@@@          \n";
					cout<<"\t\t\t  @@@@@@@@@@     @@@@@@        @@@@        @@@@      @@@    @@@     @@@@@@@@     \n";
					cout<<"\t\t\t  @@@@     |    @@@| @@@       @@@@        @@@@      @@@    @@@          @@@@    \n";
					cout<<"\t\t\t  @@@@         @@@@  @@@@      @@@@        @@@@      @@@    @@@   @@@   @@@@@    \n";
					cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     @@@@      @@@@@@@@@@   @@@  @@@@@@    \n";
					cout<<"\t\t\t  @@@@@@@@@@  @@@@@  @@@@@  @@@@@@@@@@     @@@@      @@@@@@@@@@   @@@@@@@@@@|    \n";
					cout<<"\t\t\t  | ' |       |       |     |    ||        |          ||    |     |   '     |    \n";
					cout<<"\t\t\t  |   |   '   '       '     |    '         |     '    |'          |         '    \n";
					cout<<"\t\t\t  | | '   '     '     |     '       '        '   |        '           |     '    \n";
					cout<<"\t\t\t                             [1] NEW GAME..                                      \n";
					cout<<"\t\t\t                             [2] LOAD GAME..                                     \n";
					cout<<"\t\t\t                             [3] ...........                                     \n";
					cout<<"\t\t\t                             [4] YOU WANNA QUIT?.. ";
					cin>>StartChoice;
						while(StartChoice > 0 && StartChoice <= 4)
							{
								
								switch(StartChoice)
									{
										case 1:		
												break;
										case 2: 
												cout<<"\t\t\t"<<setw(39)<<"COULD NOT LOAD GAME..";
												cin>>StartChoice;
												break;
													
										case 3:
												cout<<"\t\t\t"<<setw(39)<<"......................";
												cin>>StartChoice;
												break;
													
										case 4:	
												string answer;
												cout<<"\t\t\t"<<setw(39)<<"YOU WANNA QUIT?..";
												cin>>answer;
													if(answer == "yes")
														{
															exit(0);
														}
												
																					
									}
								
								break;
							}
					cout<<"\n\n\n\n\n\n\n\n\n\n";
					system("pause");
					
				}
		}
		
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////         PLAYER INFO         //////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void playerinfo(string& name, int& age, int& hi_ft, int& hi_in, int& we_lb, string& gender, string& bodytype)
{
	system("cls");
	
	
	
	cout<<"\t\tPLAYER INFO\n\n";
	bool done = true;
	while(done)
	{
	
		
		cout<<"\n\tENTER YOUR NAME: ";
			ws(cin);
			getline(cin, name);
		
		cout<<"\n\tENTER YOUR AGE: ";
				cin>>age;
					if(age < 18)
					{
						cout<<"\n\t\tBRO YOUR TO YOUNG FOR THIS GAME:";
						cout<<"\n\t\tCOMENSE SELf SHUTDOWN: ";
							Sleep(1000);
							cout<<"\n\t\t 1..";
							Sleep(1000);
							cout<<"2..";
							Sleep(1000);
							cout<<"3!\n\n\n\n\n\n\n\n\n\n";
							
						exit(0);
						
					}
		
		cout<<"\n\tENTER HEIGHT IN FEET AND INCHES: ";
				cin>>hi_ft>>hi_in;
					if(hi_ft > 6)
					{
						string hi_ans;
							cout<<"\n\t\tSO YOUR: "<<hi_ft<<"'"<<hi_in<<": ";
								cin>>hi_ans;
									if(hi_ans == "yes")
										cout<<"\t\tVERY WELL...LETS CONTINUE..";
										Sleep(500);
										cout<<"liar..\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										system("pause");
										system("cls");
										cout<<"\n\t\tOK SO WHERE WERE WE...";
										Sleep(2500);
										cout<<"OH YES!:\n\n";
										Sleep(1000);
										
					}
					
	cout<<"\n\tENTER YOUR WEIGHT: ";
			cin>>we_lb;
			
	cout<<"\n\tENTER BODY TYPE";
			int body_choice;
			cout<<"\n\t[1] - SLIM"
				<<"\n\t[2] - ATHLETIC"
				<<"\n\t[3] - AVERAGE"
				<<"\n\t[4] - MUSCULAR"
				<<"\n\t[5] - BRO I JUST NEED TO CUT!\n";
				cout<<"\t";
				cin>>body_choice;
				while(body_choice > 0 && body_choice <= 5)
					{
						switch(body_choice)
							{
								case 1:
										bodytype = "SLIM";
										break;
								case 2:
										bodytype = "ATHLETIC";
										break;
								case 3:
										bodytype = "AVERAGE";
										break;
								case 4:
										bodytype = "MUSCULAR";
										break;
								case 5:
										bodytype = "IN DENIAL";
										break;								
									
							}
						break;		
					}
						
		cout<<"\n\tEnter gender: [F] or [M] ";
				bool g_bool = true;
				while(g_bool)
				{
					cin>>gender;
					if(gender == "F" || gender == "f")
						{
							gender = "female";
							g_bool = false;
							done = false;
							break;
						}
					else if(gender == "M" || gender == "m")
							{
								gender = "male";
								g_bool = false;
								done = false;
								break;
							}
					else 
						cout<<"\n\t\tINVALID ENTRY TRY AGAIN: ";
						break;
					break;	
				}
		}
				
				cout<<"\n\n\n\n\n\n\n";
				system("cls");
			
						
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////       PLAYER-STATS      ////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void playerstats(int& total, int& cnt, int& str, int& IQ, int& luk ) // player stats 1 - 10
{
	
	if(cnt == 0)
		{
				
			cout<<"\n\t\t\t\t---------------------------------------------------"
				<<"\n\t\t\t\t|             PLAYER STATS                        |"
				<<"\n\t\t\t\t---------------------------------------------------";
			cout<<"\n\t\t\tYOU HAVE 15 POINTS TO SPEND AND THREE CATEGORIES:"
				<<"\n\t\t\tMAX VALUE FOR EVERY CATEGORY IS [10]"
				<<"\n\t\t\tSPEND THEM WISELY...\n\n";
		}
	bool total_bool = true;
	
	while(total_bool)
	{
		if(total == 0)
			{
				total_bool = false;
				break;
			}
		if(cnt==0)
			{
				cout<<"\n\t\t\tSTRENGTH [ENTER VALUE]: ";
				cin>>str;
				if(str>=0 && str<=10)
					{
						str = str;
						total = total - str;
						cout<<"\n\t\t\tTOTAL POINTS LEFT: "<<total;
						cnt++;
						playerstats(total, cnt, str,IQ,luk);
						break;
					}
				else
					{
						system("cls");
						cout<<"\n\t\t\tINVALID ENTRY TRY AGAIN:\n";
						playerstats(total, cnt, str,IQ,luk);
						//system("cls");
						break;
						}	
				break;		
			}
			
		if(cnt == 1)
			{
				cout<<"\n\t\t\tINTELLIGENCE [ENTER VALUE]: ";
				cin>>IQ;
				if(IQ>=0 && IQ<=10)
					{
						IQ = IQ;
						total = total - IQ;
						cout<<"\n\t\t\tTOTAL POINTS LEFT: "<<total;
						cnt++;
						playerstats(total, cnt, str,IQ,luk);
						break;
					}
				else
					{
						system("cls");
						cout<<"\n\t\t\tINVALID ENTRY TRY AGAIN:\n";
						playerstats(total, cnt, str,IQ,luk);
						break;
						}
				break;			
			}	
			
		if(cnt == 2)
			{
				cout<<"\n\t\t\tLUCK [ENTER VALUE]: ";
				cin>>luk;
				if(luk>total)
					{
						system("cls");
						cout<<"\n\t\t\tINVALID ENTRY TRY AGAIN:";
							playerstats(total, cnt, str,IQ,luk);
						break;
					}
				if(luk>=0 && luk<=10)
					{
						luk = luk;
						total_bool = false;
						break;
					}
				else
					{
						system("cls");
						cout<<"\n\t\t\tINVALID ENTRY TRY AGAIN:";
							playerstats(total, cnt, str,IQ,luk);
					}		
				break;
			}
	}
	system("cls");
			
}






//////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////       CHARACTER - LOCATION       /////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

void CHARACTER_LOCATION(int& location,int& lightswitch,int& start_cnt,int& code,int& strength, int& intelligence, int& luck,string inventory[])
{
	
	if(location == 0)
	{
		atStart(location,lightswitch, start_cnt, code, strength, intelligence, luck, inventory);
	}
	
	 if(location == 1)
	{
		atDoor(location,lightswitch, start_cnt, code, strength, intelligence, luck, inventory);
		
	}
	if(location = 2)
	{
		atBed(location, lightswitch,start_cnt, code, strength, intelligence, luck, inventory);
	}
}
	
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////        CHARACTER CHOICE         //////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void character_choices(int& location,int& lightswitch,int& start_cnt,int& code,int& strength, int& intelligence, int& luck,string a[])
{
	if(location == 0)
		{
			system("cls");
	cout<<"\n\t\t  ------------------------------------------------------------------------------------------------------------------------------------------------------------------ ";
	cout<<"\n\t\t  |    STRENGTH:"<<strength <<"   INTELLIGENCE :"<<intelligence<<"   LUCK:"<<luck<<"    INVENTORY:"<<a[0]<<", "<<a[1]<<"   CODE:"<<code<<"   LOCATION:"<<location<<"|";
	cout<<"\n\t\t  ------------------------------------------------------------------------------------------------------------------------------------------------------------------ ";
			int character_choice;
			cout<<"\n\t\t\t\t-------------------------------"
				<<"\n\t\t\t\t|       CENTER OF ROOM        |"
				<<"\n\t\t\t\t-------------------------------";
			cout<<"\n\t\t\t[1] - INVISTAGATE ROOM: "
				<<"\n\t\t\t[2] - INVISTAGATE DOOR: "
				<<"\n\t\t\t[3] - INVESTIGATE BED: "
				<<"\n\t\t\t[4] - CHECK INVENTORY...";
				ws(cin);
			cin>>character_choice;
			while(character_choice > 0 && character_choice<=4)
			{
			
				switch(character_choice)
					{
						case 1:
								INVESTIGATE_ROOM(location, lightswitch,start_cnt, code, strength, intelligence, luck, a);
								break;
						case 2: 
								location = 1;
								CHARACTER_LOCATION(location, lightswitch,start_cnt, code, strength, intelligence, luck, a);
							break;
						case 3:
								location = 2;
								CHARACTER_LOCATION(location, lightswitch,start_cnt, code, strength, intelligence, luck, a);
								break;
						case 4:
								location = 3;
								CHARACTER_LOCATION(location, lightswitch,start_cnt, code, strength, intelligence, luck, a);
								break;
											
					}
				break;
			}
		
		}
		
	
}
	
	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////         AT - START          ////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int atStart(int& location,int& lightswitch,int& cnt,int& code,int& strength, int& intelligence, int& luck,string inventory[])
{
	Sleep(1000);
	system("cls");
	string input;
	if(lightswitch == 0 && cnt == 0)
		{
			
			cout<<"\n\t\t\tUhhhh....(head throbs).....man my head hurts...\n";
			cout<<"\t\t\twho turned of the lights?........\n";
			cout<<"\t\t\tWAIT!? Where am I!?....HELLO!!!...\n";
			cout<<"\t\t\tWhat is going on?.................\n";
			cout<<"\t\t\twhat should i do?........\n";	
			ws(cin);
			getline(cin,input);
				if(input == "look around" || input == "look for light switch")
					{
						lightswitch = 1;
						cnt=1;
						cnt = cnt;
						cout<<"\n\t\t\tI think I found a light swtich lets turn it on...";
						Sleep(1000);
						atStart(location,lightswitch, cnt, code, strength, intelligence, luck, inventory);
					}
					else 
						{
							cnt=1;
							cnt = cnt;
							cout<<"\n\t\t\tTHAT DID NOTHING: ";
							atStart(location,lightswitch, cnt, code, strength, intelligence, luck, inventory);
						}
		}	
		
	else if (lightswitch == 0 && cnt==1)
		{
			string input;
			getline(cin,input);
				if(input == "look around" || input == "look for light switch")
					{
						lightswitch = 1;				
						cout<<"\n\t\t\ti think i found a light swtich lets turn it on...";
						Sleep(2000);
						atStart(location,lightswitch, cnt, code, strength, intelligence, luck, inventory);
					}
					else 
						{
							
							cout<<"\n\t\t\tTHAT DID NOTHING: ";
							atStart(location,lightswitch, cnt, code, strength, intelligence, luck, inventory);
						}
			}	
			
	else if(lightswitch == 1 && cnt == 1)
	{
		system("cls");
		cout<<"\n\t\t\t-----------------------------------------------------------------";
		cout<<"\n\t\t\t|                         (NARRATOR)                            |";
		cout<<"\n\t\t\t-----------------------------------------------------------------";
		cout<<"\n\t\t\tAFTER TURNING ONTHE LIGHTSWITCH YOU TURN AROUND TO SEE A SMALL ";
		cout<<"\n\t\t\tDIRTY AND AMONOUS ROOM...YOU TAKE A FEW SECONDS TO LOOK AROUND ";
		cout<<"\n\t\t\tWITH HOPES OF FINDING A WAY OUT OR ANY CLUES AS TO WHERE YOU ARE ";
		cout<<"\n\t\t\tBUT ALL YOU SEE IF A SMALL BED IN THE MIDDLE OF THE ROOM AND ONE ";
		cout<<"\n\t\t\tLARGE DOOR LOCKED BY WHAT SEEMS TO BE A SECURTIY CODE KEYPAD.\n\n\n\n";
		cnt=2;
		
		Sleep(1000);
		system("pause");
		lightswitch = 1;
		atStart(location,lightswitch, cnt, code, strength, intelligence, luck, inventory);					

	}
	else if(lightswitch == 1 && cnt==2)
	{
		system("cls");
		character_choices(location, lightswitch,cnt, code, strength, intelligence, luck, inventory);
	}
	
			
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////         AT DOOR              //////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void atDoor(int& location,int& lightswitch,int& cnt,int& code,int& str, int& intelligence, int& luck,string a[])
{	
	
	system("cls");
	system("color 0C");
	
	
			
	
	bool door_bool = true;	
			
	cout<<"\n\t\t------------------------------------------------------------------------------------------------------------------------------------------------------------- ";
	cout<<"\n\t\t|    STRENGTH:"<<str <<"   INTELLIGENCE :"<<intelligence<<"   LUCK:"<<luck<<"    INVENTORY:"<<a[0]<<", "<<a[1]<<"   CODE:"<<code<<"   LOCATION:"<<location<<"|";
	cout<<"\n\t\t------------------------------------------------------------------------------------------------------------------------------------------------------------- \n\n";
	cout<<"\t\t\t 		.-----------------------------------------------------------------------------------------------.    \n";
	cout<<"\t\t\t 		|*****+#+##+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#++#+#+#&+#+#+##################&&&&|    \n";
	cout<<"\t\t\t 		|**** . . . . : : : : : ::::::::::+#&+&#+&#&#&#+#+#+#+#&#&#+#+#+#+#+#+#+#+#+#+###############&&&|    \n";
	cout<<"\t\t\t  		|***              : : : : : : : ::::::::::+#+#+#+#+#+##+#+##+#+#+#+#+#+#+#####################&&|    \n";
	cout<<"\t\t\t  		|**                       ::::::::+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+############&|    \n";
	cout<<"\t\t\t  		|*                   : : : : : : : ::::::+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+##+#+#+#+#+#+###########|    \n";
	cout<<"\t\t\t  		|'                          :::::::::::::#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#############|    \n";
	cout<<"\t\t\t  		|                   .  : : : : : : .________________________.:+:+++++++#+#+#+#+#+#+#+###########|    \n";
	cout<<"\t\t\t  		|                     .  . ::::::::|                        |    : : :+#+#+#+#+#+#+#+#+#########|    \n";
	cout<<"\t\t\t  		|                        .. :::::::|                        |          : ::+#+#+#+#+#+#+########|    \n";
	cout<<"\t\t\t  		|                      .   . ::::::|                        |          :: :+#+#+#+#+##++########|    \n";
	cout<<"\t\t\t  		|                        .  ..:::::|                        |       .   . : +#+#+#+#+#+#+#+#+###|    \n";
	cout<<"\t\t\t  		|                     ..  . : .:;::|                        |      .   .   ::+#+#+#+#+#+#+#+####|    \n";
	cout<<"\t\t\t  		|                       .  .' .::::|                        |     .  . . . :::+#+##+#+#+#+##+#+#|    \n";
	cout<<"\t\t\t  		|                        . . .: :::|                        |   .  .  .   : ::#+#+#+#+#+#+##+###|    \n";
	cout<<"\t\t\t  		|                           .  : ::|                        |    .  .   .  : ::+#+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                        . . .: :::|                        | ._____.       : ::...::+#+#+#+##+#|    \n";
	cout<<"\t\t\t  		|                           .  : ::|                        | |1 2 3|   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                        | |4 5 6|     .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                    o--,| |7 8 9|     .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                        . . .: :::|                        | |# 0 *|     : ::...::+#+#+#+##+###|    \n";
	cout<<"\t\t\t  		|                           .  : ::|                        | *-----*   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                        . . .: :::|                        |   .  .  .   : ::...::+#+#+#+##+###|    \n";
	cout<<"\t\t\t  		|                           .  : ::|                        |    .  .   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                        . . .: :::|                        |   .  .  .   : ::...::+#+#+#+##+###|    \n";
	cout<<"\t\t\t  		|                           .  : ::|                        |    .  .   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		|                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  		-------------------------------------------------------------------------------------------------   \n\n";
	
	if(door_counter==0)
	{
	
	cout<<"\t\t\t  Hmmmm... It looks like the door is locked and can only be unlocked with a code..damn... \n\n";
	door_counter=1;
	}
	Sleep(2000);
	if(a[0] != "CROWBAR")
		{
			int door_option;
			cout<<"\t\t\t  What do I do now? \n";
			cout<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n";
			cout<<"\t\t\t                   [2] TRY TO BREAK DOOR DOWN. \n";
			cout<<"\t\t\t                   [3] TRY TO INPUT CODE.      \n";
			cout<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n";
			cout<<"\t\t\t                                                  ";
			cin>>door_option;
				while(door_option >=1 && door_option <= 4 && door_bool == true)
					{
						switch(door_option)
						
						{
							case 1: 
									INVESTIGATE_ROOM(location, lightswitch,cnt, code, str, intelligence, luck, a);
									break;
							case 2:
								
										if(str >= 6)
											{
												cout<<"\t\t\t..OW!! I ALMOST HAD IT!!..It didnt work..now what?\n";
												cout<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n";
												cout<<"\t\t\t                   [x] TRY TO BREAK DOOR DOWN. \n";
												cout<<"\t\t\t                   [3] TRY TO INPUT CODE.      \n";
												cout<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n";
												cout<<"\t\t\t                                                 ";
													cin>>door_option;
													
											}
										else if(str < 6)	
											{
												cout<<"\t\t\t ...I CANT!...This door is to strong for me im to weak..\n";
												cout<<"\t\t\t    if only i worked out more.";
												cout<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n";
												cout<<"\t\t\t                   [x] TRY TO BREAK DOOR DOWN. \n";
												cout<<"\t\t\t                   [3] TRY TO INPUT CODE.      \n";
												cout<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.  ";
													cin>>door_option;
														
											}
									break;
							case 3:
									if(code == 1)
											{
												cout<<"I GOT IT!!! ...FINALLY I CAN GET OUT OF HERE..";
												door_bool = false;
												END();
												break;
											}
										else
											{
												cout<<"\t\t\tWell that didnt work...duh\n";
												cout<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n";
												cout<<"\t\t\t                   [2] TRY TO BREAK DOOR DOWN. \n";
												cout<<"\t\t\t                   [x] TRY TO INPUT CODE.      \n";
												cout<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.";
													cin>>door_option;
												}	
									break;
							case 4: 
									location = 0;
									CHARACTER_LOCATION(location, lightswitch,cnt, code, str, intelligence, luck, a);
									break;		 					
						}
					}
		}

	if(a[0] == "CROWBAR")
		{
			int door_option;
			cout<<"\t\t\t  What do I do now? \n";
			cout<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n";
			cout<<"\t\t\t                   [2] TRY TO BREAK DOOR DOWN. \n";
			cout<<"\t\t\t                   [3] TRY TO INPUT CODE.      \n";
			cout<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n";
			cout<<"\t\t\t                   [5] USE CROWBAR                ";
			cin>>door_option;
				while(door_option >=1 && door_option <= 5 && door_bool == true)
					{
						switch(door_option)
						
						{
							case 1: 
									INVESTIGATE_ROOM(location, lightswitch,cnt, code, str, intelligence, luck, a);;///////////////////////activate investigate_room
									break;
							case 2:
									if(str >= 6)
											{
												cout<<"\t\t\t..OW!! I ALMOST HAD IT!!..It didnt work..now what?\n";
												Sleep(3000);
													atDoor(location, lightswitch,cnt, code, str, intelligence, luck, a);
													break;
													
											}
										else if(str < 6)	
											{
												cout<<"\t\t\t ...I CANT!...This door is to strong for me im to weak..\n";
												cout<<"\t\t\t    if only i worked out more.";
													Sleep(3000);
													atDoor(location, lightswitch,cnt, code, str, intelligence, luck, a);
													break;
														
											}
									break;
							case 3:
									if(code == 1)
											{
												cout<<"I GOT IT!!! ...FINALLY I CAN GET OUT OF HERE..";
												door_bool=false;
												END();
												break;
											}
										else
											{
												cout<<"\t\t\tWell that didnt work...duh\n";
												cout<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n";
												cout<<"\t\t\t                   [2] TRY TO BREAK DOOR DOWN. \n";
												cout<<"\t\t\t                   [x] TRY TO INPUT CODE.      \n";
												cout<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n";
													cin>>door_option;
												}
												break;	
									break;
							case 4: 
									location = 0;
									CHARACTER_LOCATION(location, lightswitch,cnt, code, str, intelligence, luck, a);
									break;		
									
							case 5:
									if(str > 7)
										{
											cout<<"\n\t\t\tLETS SEE IF THIS WORKS......";
											cout<<"\n\t\t\t(LOUD CRACK)...AHHH!!YES!! ";
											cout<<"\n\t\t\tit worked! im finally free.\n\n\n\n\n\n\n\n";
											system("pause");
											door_bool=false;	
											END();////////////////////////activate when end fucntion is in 
											break;
										}	
									else{
											cout<<"\n\t\t\tIT WONT BUDGE:";
											Sleep(2000);
											system("cls");
											atDoor(location, lightswitch,cnt, code, str, intelligence, luck, a);
										}
								break;			 					
						}
		}
			

}
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////        INVESTIGATE BED  FUNCTION           ///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void atBed(int& location,int& lightswitch,int& cnt,int& code,int& str, int& intelligence, int& luck,string a[])
{
	
	system("color 08");
	cout<<"\n\t\t  ------------------------------------------------------------------------------------------------------------------------------------------------------------- ";
	cout<<"\n\t\t  |    STRENGTH:"<<str <<"   INTELLIGENCE :"<<intelligence<<"   LUCK:"<<luck<<"    INVENTORY:"<<a[0]<<", "<<a[1]<<"   CODE:"<<code<<"   LOCATION:"<<location<<"|";
	cout<<"\n\t\t  ------------------------------------------------------------------------------------------------------------------------------------------------------------- ";
	cout<<"\n\t\t,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,.,.,...,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,~:,::,::,:::::::::::::::::~:~=+=:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,:,,.................,.,,,,,,,,,:,,,,,:,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,..,,,,,,,,,,,,,,,,,,,,,,,,,,,..,,,,:~==,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,...,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,..,:=+=,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,:~++,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,:~==,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,:~++,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,..,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,~=+:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:~==,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,..,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:~~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,..:.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.::~~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,:.,,,,,,,,,.,..:~,:,,,,,,,,,,,,,,,,,,,,,,,.::~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,:.,,,,,,,..,,,,.........:=,,,,,,,,,,,,,,,,.,:~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,.:,.,,,,,...,,,,,,,,,,,,,,.,.+.,,,,,,,,,,,,.::~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,.,,.,,,,,.,,,,,,,,,,,,,,,,,,,,=,,,,,,,,,,,,.,:~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,..,.,,,,,.,,,,,,,,,,,,,,,,,,,,.:,,,,,,,,,,,.::~.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,:.,,,,,.,.,,,,,,,,,,,,,,,,,,,.~,,,,,,,,,,.::~.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,:,..,~:,..,,,,,,,,,,,,,,,,,,,.~,,,,,,,,,,.:::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,..,:=+:,..,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,.:,,,,,,.,,.,~,.,,,,,,,,,,,,,,,:,,,,,,,,,,.::~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,...,:~~=+?~,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,.:,.,,,,,,,,,,,,,...,:.,,,,,,,,~,,,,,,,,,,.:::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,...,:::~+?=.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,.,,.,,,,,.:,,,,,,,,,.,..,:~:.,,,,,,,,,,,,,,,:~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,..,,,,,,,,,,,,,,,,,,,,,,,,,,,,..,:=I=.,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,..,.,,,,,.:,,,,,,,,.,,,,,,,,,.,,,::.,,,.,,,:::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,..~?,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,:,,,,,,,,,,:,,,,..,:~:,:::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,...,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,?~,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,:.,,,,,.,,,,,,,,,,:,,,,,,,,,,:,,,,,,,,,,,:::,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.......,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.=+,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,.,,,,,,,.,.,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,::::,,,,,,,,,,,,,,,,,,,,,,,,,,..............,::,..,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,+,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,:::~,,,,,,,,,,,,,,,,,,,,,,,..............,.,..,,,,:,..:,,,,,,,,,,,,,,,,,,,,,,,,.~,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,..,.,,,,,.:,,,,,,,,.,,,,,,,,,,.:,,,,,,,,,,,:::,,,,,,,,,,,,,,,,.....,,,,,,.....,,,.,,~~:~~,.,:~:~~:,,~~~~~:,,,:,.,,,,,,,,,.:,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,.,,.,,,,,.:,,,,,,,,.,,,,,,,,,,.:,,,,,,,,,,,:::,,,,,,,,,......,,,,,,...,:::::...:~~~:=:,,:~~~~=,,:~==~~:.,,:~~~::.,,~,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,.:.,,,,,.:,,,,,,,,.,,,,,,,,,,.:,,,,,,,,,,,:::....................,,,,...,::,~~:,,,~~~~~~:,,~==~=::,,,:::::,,.,:::,,...,..:,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,.:.,,,,,.,,,,,,,,,,:,,,,,,,,,.:,,,,,,,,,.,::,..,,........,..,......,,..,.....::~:~:,,,::=~~~~:,,:~~~~~:,,,:::,,,...,,,..,:,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,.,.,,,,,,,,,,,,,,,,:,,,,,,,,,.:,,,,.,....,::~,,...,,,,,....,,,..,,....,,,,,,,....,~~::::,.,:,~:::~,,,:~~:,:,,......,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,....,,,,,,.,,,..,,,:,..,,,,,.,:....,,,,,,,:::,,,,,,..,,,,,:,...,,,,:,,....:,,,,:,,.,,,,,:::,,.,,:=~~~~~:,,.........,,,,.,.,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,.,.,,,..,.,.,,,,,:,.,.,,,,,,,:,,:,:~,.,,,::.,..,,,,,,....:,,,,,....,,,,,,,....,,,,:,,.,,,~::~:~,~::~::..............,:::~,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,.,,....,...,,,.,,.,,,,,,,,:,:,:,,~::,:.:,.:,,,,....:::,,,..,,,,,,,,...,,,,,::,...,::~::=:~:::,::::..,......,.,,,:::,:~:,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,.,.,,,...,....,.,..,.,..,,,,,,,,,,,,:,::.:,.::::,::,::,.,.,:::,::..,,,:~::,.,.::::~:::::,::~,,,,,,,,,.....,.::~:::,...::,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,...::,...:.........,.....,.,,:,,,,:,,:,~.:..::::::,:.,,:::::,,..,,:,,,~~.,,:~::::~:,::::,:,,:,,,,,......,.~~~:,,..,,..,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,:,.....,,,..:.........,....,,...:,..,,,,~:~.::,,::~~~~~:~,:::,,,.,::,,:~,,,,~~~=~~:~::::,,,.,,.,.........+~:,.,..,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,~:,,,,,,,,....,,,,.,.........:......,,.,,,.,,,,~~:.:,,:,::::~:~~::,,,~~:~~~:,,,:~:~~~~~~::::,:,,............=~::,,..,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t:,,,,,,,,,,,,~.,,....:::...........:.........,,,,,,::~:~,,:~~~~::==:::::::~~~~,,,,~~:~~~::~::~,,:,,,,.........~:::,,..,,::,,,,,,,,,,.:~,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,:...:...............,..........,...,,..::.::::::::,,.,,,,...,.,:~~~~~~~~:::::::,,,,........+:~,,,...,,,...,..,.::.,,,.:,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,:,.,,,,,,,................,..........,..........,::,,,,,,,,.......,~~~~~~::::::,,,,,.,,,....~+~~~,,..:,.,,,,,,,,,,......,,..,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t:,,:,.,,,,,,,,,,,~:.,,::,..~,.................,..........:::,,.,...........,::~::,,,,,,,,........,+~=::,...,,,,,,,,::,,,,,,~,,,,,...,~,,,,::,.,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,~,,,,,,,,,,,,,,,,,,,,,:,.,.,,,..............,..........:::...............,,:,,,,,...........,=~~:,,,..,,,,,,,,,,,,,,,,~,,,,,,,,,,.,:,,,,,,,,,::,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,.,:,,,,,,,,,,,:...,,,,.,,::,.,,,...........,..........:::...............,,,............,=:::,,...,:,,,,,,,,,,,,,,,,,,,,,,,:,,,,,.,,,,,,,,,,.,,,,,,::,,,,,,,,,\n"
		<<"\t\t,,,,,,.,,,,:,,,,,,...,,,,,,,.,:::,...:,.......,..........:::..........................,~=::,,...,,,,,,,,,,:,,,,,.:.,,,,,,,,,,,,,,,:.,,,,,,,.,,,,,,,,,,,,,,,:~,,.\n"
		<<"\t\t,,,,,::.,,:,,.,,,,...,,,,,,,,,,,,:::..,,,.....,..........:::.......................::::,,,...,,,,,,,,,,,,,,,,.:~,,,,,,,,,,,,,,,,,,,.~,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t:,,,,,,,,,,,,~,,,,...,,,,,::.,,,,,,.,:::.,,,,.,..........:::...................:~::,,,...,~,,,:.,,,,,,,,,,,:,,,,,,,.~,,,,,,,,,,,,,.,:.,,,,,,,,:,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,.~,...:,,,,,,,,,,,,,,,,,,:::.,,,..........:::..............,~~::,,,...,,,,,,,,.,:.,,,,,,:,,,,,,,,,,,,,,,,,:,,,,,,,,.,~,,,,,,,,,,,,,,:,,,,,,,,,.,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,....,,,,,,,,,,,,,,,,,,,.,,::..,,:,,....,::...........:~~::,....,,,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,.::,,,,,,,,,,,,,,,,,,,::,,.,,,\n"
		<<"\t\t,,,,,,,,,,.:,,,,,,,,..,,,,,,,,,,,,,,,,,,:,,,.,,::,.,,,,,..::......,~~:::,....,,,,,,,,,,,,,,,,,,,:,,,,,,::,,,,,,,,,,,,,,,,,,.,,,,,,,.,,,,,,,,,,,,,,,,,,,,,~,,,,:,\n"
		<<"\t\t,,,,,,,~,,,,,,,,,,,,,.,,,,,,,,,,,,,,:,,,,,,,,,,.,:::,.,,,.,,...,~~::,,,...,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,.,,,,,,,,,,.,~,,,,,,,,,,,,,,,~,,,,,,,,\n"
		<<"\t\t,,:,,,,,,,,,,,,,,,,.,.,,,,:,,,.::,,,,,,,,,,,,,,,,,.,,::,....:::::,,,..,,,,,,,,,,,,,~.,,,,,:.,,,,,,,,,,,,,,,,,,,::,,,,,,.,,,,,,,,,..,,,,,,,,,:,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t.,,,,,,,,,,,,,,,,,,.,.,,,,,~,:,,,,,,,,,,,,,,,,,,,,,,,,..::,:=,....,,,,,,,,,,,,,,,,,.,,,~,,,,,,,,,,,,,,,,,,,,,,,,,,,,~.,,,,,,,,,,,..,,,,,,,,,,,,,::,,,,,,,,,,,,,,\n"
		<<"\t\t,,.,,,,,,,,,,,,,,,,...::,,,,,,,,~,,,,,,,,,,,,,,,,,,,.:,,:~:::..,,,,,,,,,,,,,,,,,,,,:,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,.,,,,,:,,,,,,,,...,,,,,,,,,,,,:,,,,::,,,,,,,,,\n"
		<<"\t\t,,,,,.,,,,,,,,,,,.:,.,,,,,,,,,,,,.,:,,,,,,,,,,,,,:.,,,,,:~::..,,,:,,,,,,,,,,,,,,:,,,,,,,,,,,,,::.,,,,,,,,,,,,,,.,,,,,,,,,,,,:,,,,..,,,,,,,,,,.:,,,,,,,,,,,::,,,,\n"
		<<"\t\t,,,,,,,.,,,,,:,,,,,,.,.,,,,,,,,,,,,,,:,,,,,,,:,,,,,,,,,,.:,:.,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,.,.,,,,,,,,,,,,,,,,,,,,,,,,,,,:\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,.:.,,,,,,,,,,,,,,,,.::.,,,,,,,,,,,,,,....,,,,,,,,,,~,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,.,,,,,,,,,,,,,,,,,,,,,,,,,,.:,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,.~,,,,,.,,,,,,,,.,.,,,,,,,,,,,,,,,,,.,:,,,,,,,,,,,,,,....,,,,,,,,,:,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~.,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t::,,,,,,,,,,,.,,,,,,.,.,,,,,,,,,,,:,,,,,,,,,,:,,,,,,,,,,,....,,,,,.:,,,,,,,,,:,.,,,,,,,,,,,,,,,,,,,,.,,,,,.,,:,,,,,,,,,,,,,,,,,,,,,,,~.,,,,,,~,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,,...,,,,,,:,,,,,,,,,,,,,,,,,~,,,,,,,,.....,,.,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,.,,,,,,,,,,,,.,,~.,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,::.,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,,...,.:,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,....,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,.,..,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,.~,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,.,:,,...,,,,,,,,,,,,,,,,,,,,,,,,,,,.,~.,:.,..,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:~\n"
		<<"\t\t,,,,,,,,,,,,,.:,,,,,,....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,..,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,.:,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,\n"
		<<"\t\t,,,,,,,,,.:.,,,,,,,,,...,.,.,,,,,,,,,,,,,,,,,,:,,,,,,,,,,.,,.,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,.:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,,,,,,,,,,,:,,,\n"
		<<"\t\t,,,,,,::,,,,,,,,,,,,,,..,,...,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,\n"
		<<"\t\t,,::,,,,,,,,,,,,,,,,,,,,....,,,.,,,,,,,,:.,,,,,,,,,,,,,,,.,,,,,,,,.:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.:,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,,,,,..,,,,,,,.,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.:,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~,.,,,,,~.,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,.,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~,:,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.:,,,,,,.,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,.,,,..~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,\n"
		<<"\t\t,~,,,,,,,,,,,,,,,,,,,,,,,,::.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,:,,,,,\n"
		<<"\t\t,,,:,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.:,,,,,,,,,,,,,::\n"
		<<"\t\t,,,,:,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,::,.,,,,,,,,,,,,,,,,,,,,.:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,~,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,:~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,:,,,~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,..:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,:.,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,.,,,,.,,...,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,\n"
		<<"\t\t:,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,..,.,,,,,,,,,,,,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,.:,,,,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,~,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,...,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,~,,,,,,,,,,,,,,\n"
		<<"\t\t,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,....,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,,,\n";
			
					string answer ;
					
					int character_choice;
						cout<<"\n\t\t\t[1] - SLEEP ON BED";
						cout<<"\n\t\t\t[2] - LOOK UNDER BED";
						cout<<"\n\t\t\t[3] - FLIP MATTRESS";
						cout<<"\n\t\t\t[4] - GO BACK TO CENTER OF ROOM  ";
						ws(cin);
						ws(cin);
							cin>>character_choice;
							while(character_choice > 0 && character_choice<=4)
								{
									switch(character_choice)
										{
											case 1:
													system("cls");
													Sleep(6000);
													atBed(location, lightswitch,cnt, code, str, intelligence, luck, a);
													break;
											case 2:	
													system("cls");
													NEVER_UNDER_THE_BED();
													break;
											case 3:
														if(code == 1)
															cout<<"\n\t\t\tI already did this";
															
														if(code==0)
															{
																cin>>answer;
																cout<<"\n\t\t\tLets see whats under this mattress....(lifting noises or something...)";
																Sleep(3000);
																cout<<"\n\t\t\t..huh.. there are a bunch of numbers scratched onto the bed frame..";
																cout<<"\n\t\t\tMaybe its a code...";
																Sleep(3000);
																cout<<"\n\n\t\t\t\t[WOULD YOU LIKE TO TRY AND DECHIPER THE CODE] ";
																ws(cin);
																cin>>answer;
																	if(answer=="yes")
																		{
																			if(intelligence >7)
																				{
																					system("cls");
																					cout<<"\n\t\t\t..I think i got it...hmmm 4532..I wonder what these numbers are for...";
																					system("pause");
																					code = 1;
																					atBed(location, lightswitch,cnt, code, str, intelligence, luck, a);
																				}
																				else
																					{
																						cout<<"\n\t\t\tUhh...this is to hard i give up..";
																						Sleep(3000);
																						system("cls");
																						atBed(location, lightswitch, cnt, code, str, intelligence, luck,a);
																					}
																		}
																}	
														break;
													
											case 4:
													location = 0;
													CHARACTER_LOCATION(location, lightswitch,cnt, code, str, intelligence, luck, a);
													break;							
										}
									break;
								}
}	
		
							



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////           INVISTIGATE ROOM FUNCTION          //////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void INVESTIGATE_ROOM(int& location,int& lightswitch,int& start_cnt,int& code,int& strength, int& intelligence, int& luck,string inventory[])
{
	
	string answer;
	do
	{
		system("cls");
		srand(time(0));
		int find = 1+rand()% 4;
		switch(find)
			{
				case 1: 
						if(inventory[0] == "CROWBAR")
							cout<<"\n\t\t\tFOUND NOTHING:";
						while(inventory[0] != "CROWBAR")
							{
								cout<<"\n\t\t\t...YOU FOUND A CROWBAR!:";
								cout<<"\n\t\t\tITEM WAS PUT IN INVENTORY: ";
								inventory[0] = "CROWBAR";
							}
							break;
				case 2:
						if(inventory[1] == "NOTE")
							cout<<"\n\t\t\tFOUND NOTHING:";
						while(inventory[1] != "NOTE")
							{
								cout<<"\n\t\t\tYOU FOUND A NOTE WRITTEN IN BLOOD";
								cout<<"\n\t\t\tNOTE WAS PUT IN INVENTORY:  ";
								inventory[1] = "NOTE";
								break;
							}	
							break;
				case 3:
						cout<<"\n\t\t\tFOUND NOTHING:";
						break;
				case 4:
						cout<<"\n\t\t\tFOUND NOTHING:";
						break;					
												
							
			}
			
			
			cout<<"\n\t\t\t WOULD YOU LIKE TO SEARCH AGAIN?:";
			cin>>answer;	
	}while(answer == "yes");
		
			
	 if(answer == "no")
			{
				
				system("cls");
				CHARACTER_LOCATION(location, lightswitch,start_cnt, code, strength, intelligence, luck, inventory);
				
			}	
		
	
	
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////         UNDER THE BED FUNCTION        /////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NEVER_UNDER_THE_BED()
{

	system("mode 2000");
	system("color 0C");

Sleep(3000);
	cout<<"\a\n\n\t\t????++++++++++++??????+++=====~~,..................,:,.................,,,::::::::,,,,,,::::,,,...................................,:~==+?????+++++++++==~~~~~~~~\n"
		<<"\t\t==+???+++++++++++????+++===~~~,,..................,:,..................,,::::::::,::::,::::,,......................................,,:~=+++??+++++++++==~~~~~~~~\n"
		<<"\t\t==+III++++==+++????+++===~:,.....................,:,..................,,::::~:::::::::,,,............................................,.,:~=+??++++=++++=~~~~~~~~\n"
		<<"\t\t=+?III+++===+++????++=~::,....,.................,:,................,,,,::::::::::::::,,.......................,..........................,:~=+++++===++=~~~~~~~=\n"
		<<"\t\t==+III++====++???I?+=:,,,..,,..................,:,................,,,,,::::::::::::::,,.....................,,..............................,~=+++====+==~~~~~~=\n"
		<<"\t\t==+?II?+====+++???i=:...,,,,...................,,................,,,,,,,,::::,:::::::,........,,,..........,:..........................,.,,..,:=++=======~~~~~~~\n"
		<<"\t\t==+????++=++++++++~:..,,,,,....................,................,::,::::::::,,,,,,,,,.......,:::,,.........,,............................,:::::~+++==+++=~~~:~~~\n"
		<<"\t\t====++++++++++===~:,,,::,....................::.............,,,:::::::::::,,...,..........,,:::,...........,,........................,,,,,:~~====++++++==~~~~~::\n"
		<<"\t\t+======++=======~:....................................,.....,:::::::,,::,,.............,,,:,,.............,,..............................,,~========+===~~~~~:~\n"
		<<"\t\t+=~===+++=====~~:....................................,,....,:::::,,,,,,.....,,,,.....,,,,,...............,,,................................,:~======+++==~~~~~~\n"
		<<"\t\t+=~===+++===~~~:...............................,.....:,....,::::,,,,,,....,,:::,.....,.................,,,,,.................................,:~~~===+++===~~~~~\n"
		<<"\t\t+=~~=++++++=~:,...............................,,....,:,....::::,,,,,,.....,,:,,.......................,,,,,,..................................,,~=++++++===~~~~~\n"
		<<"\t\t+=====++++==~:,.....................................,:,...:::::,,,,,,....,,,,,..,,,,,................,:::::,..................................,,:==+++++====~~~~\n"
		<<"\t\t++====+++=~~,,......................................,:...::::::,,,,,....,,,,,,,,,,,,................,:,::::,,...................................,:~=++++====~~~~\n"
		<<"\t\t+++===+=~:,,........................................,,.,,::::::,,,,.,,,,,,,,,,,,,,,................,,::::::::,....................................,:~=++====~~~~\n"
		<<"\t\t=++====:,..........................................,,::::::::::,,,,:::,,,,,,,,,,,,................,,::::::::::,..,,..................................,~====~~===\n"
		<<"\t\t~==~~:,...,,.,...................................,,:::::::::::,,,,:::::::::::,,,,,,,,,,,,,,,.....,,,,,,,,:::::,,.,,.............................,,,...,:~~~====+\n"
		<<"\t\t~~=~:,,,:::,...................................,:::,,,:,,,,,......,,::~~~::::,.,,,,::::::::,,,,..,,,,,,,::,,,,:,..,,.............................,:::,,,,~~==++?\n"
		<<"\t\t~~~~~:~~~~~:,................................,:::,,..................,,::::::,,::::~~:::::,,,,,,,,,,,,,,,,,,,,::,,::.............................,:~~~~::~~=++??\n"
		<<"\t\t~~~~~~~===~:................................,,::,,.....................,,::::::::::~~:::,,,..................,,:::::,............................,:~==~~~~~=+???\n"
		<<"\t\t~~~===~===~:,...............................,::,..........................,.,:::,::::,,,......................,:::::...................,,,.......,:===~~=====++=\n"
		<<"\t\t~~===~~~~:,.................................,::,............................,::,.,,,,,........................,,,:::..................,,:~::,......::~~~====~~~~\n"
		<<"\t\t~===~~~~~::,,.,...,,::,.....................,:,.............................,::,..,,,...........................,:::...................,:~~~:,,,,,,::~~~~~=~~:::\n"
		<<"\t\t~~~~=~~~~~~~=~~:,,,~~:,.....................,,..............................,,:,................................,,:,,....................,:~~~~~==~~~=~~~~~~~:~:\n"
		<<"\t\t~~============~::,,,,,,...............................,:++??==,.............,,,,...............:=???+~,.........,,,,,.....................,::~~============~~~~~\n"
		<<"\t\t~~==++=======~~:,.,,,,,,,,,,................,........,=I7I?~?I7~...........,:::::,............III=:?I7+:........,,,,..............,,,,....,,:~~~========+==~~~~~\n"
		<<"\t\t~~==+++========~::::::~~~~:,................,........~+I7I,.:I7+..........,:::~~~:,..........,oII..~I7?=:.......,:,...............,,:::,,,,,:~~=======+++==~~~~~\n"
		<<"\t\t~====++=========~~~~~~=~~:,,................,,........:+7???II?:..........,:~~~~~~:..........,=III??oI=,........,,,,...............,::~~::::~~~=======+++==~~~~~\n"
		<<"\t\t~~===++===~~~~~~===~~~~~::,,................,..........,:~===~,..........,,:~~~~~~:...........,:~===~:..........,:,,...............,:::::~~=~~~~~~~====++==~~~~~\n"
		<<"\t\t~====+====~~~=======~~~~~:,.................,,,.........................,.:~~~~~~~:............................,,,,,..............,,,::,,:~=====~~~====++==~~~~=\n"
		<<"\t\t=====================~~~:,...................,::,...................,,,,,,:~~~~~~~:,....,,,...................,,:::,...........,,,,......:~~===========++==~::~~\n"
		<<"\t\t+===============~====~:,.....................,:~:,.................,::,,,,:~~~~~~~~,..,,,,,,.................,,:::,,..........,,:::::::,::~===========+++==~:~~~\n"
		<<"\t\t=========~=====~=====~:,...,,::,..............,,:::,...............:::,,,,:~~~~~~~::..,::::,................,,::::,,..........,:::~~~::~~=====~====~=======~::::\n"
		<<"\t\t=========~~~~~~~~~~~~~~::::~~~::..............,,,,:::::::::,......,,..,,:,:~~~~~~~:,..,:::~:::,,.....,,,:::::~~~~::,..........:::~~~~~~~~~~~~~~~~~~~~======~~:::\n"
		<<"\t\t=========~~~~~~~~~~~~~~~~~~~~~~:.................,:::::::,,.......,,...,,::~~~~~~~::,.,,,:::::,,,,,,:::::::~~~~~~::...........:~~~~~~~~~~~~~~~~~~~~~~======~~::~\n"
		<<"\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:................,::~:::,,,.............,,,:~~~~~~~:,.,,,,.,,,,...,,,,:~~~~~~~~:::,,...........:~~~~~~~~~~~~~~~~~~~~~~~=~~~~~~~~~\n"
		<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:................,::::,...................,::~~~~~::,.,,,.........,,,,,:::::::,,,,,...........,:~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		<<"\t\t~~~~~~~~~~::~~~~~~~~~~~~~~~=~~~:................:~:::,..................,,::~~~~::,,,,,,,........,,::::::::::,,,.............,:~~=~~~~~~~~~~~~~~~~:~~~~~~~=~~~~~\n"
		<<"\t\t~~~==~~~~~~~~~~~~~~~~~~~~~~~~~~~,...............,:~~:...................,,::::~::::,,,,,,........,,,::::::,,,,....,,.........:~~~~~~~~~~~~~~~~~~~~~~~~~~===~~~~~\n"
		<<"\t\t~~===~~~~~~~~~~~~~~~~~~~~~~~~~~~:.........,.......,~:...................,,:::~~::::,,,,,,,........,,:::::::,,....,,,........,~~~~~~~~~~~~~~~~~~~~~~~~~~~===~~:~~\n"
		<<"\t\t=====~~~~~~~~~~==~~~~~~~~~~~~~==~.........,,......,::.............,:....,,::~~~~~~:,,,,,,,,,......,,,,,,:,:,,,,,,,..........:==~~~~~~~~~~~~~~=~~~~~~~~~~====~:::\n"
		<<"\t\t~~~==~~~~~~~~~~~~~~~~~=~===~~~=+=..........,......,::...........,~~~:...,,:~~~~~~::,,,,,,,,,......,,,,,::,,,,,,,,...........:++=~~====~~~~~~~~~~~~~~~~~~===~~:::\n"
		<<"\t\t~~~==~~~~~~~~~~~=========~~~~==+=,.................:,...........,~~~~,...,:~~~~~~~:,,,,:::,,,,,.....,,....,,,,,.............~++=~~~~=========~~~~~~~~~~~===~~:::\n"
		<<"\t\t~~~==~~~~~~~~============~~~~~===,.................,:............~~~~:...,:~~~~~~~::,,,:~~:,.,,,............................~+==~~~~~============~~~~~~~===~~~::\n"
		<<"\t\t~~~~~~~~~~~=============~~~~~~===~..................,,............,~~~,..,~~~~~~~~::::::~~,...,,...........................:===~~~~~~~============~~~~~~~~~~~~~~\n"
		<<"\t\t~~~~~~~~~~~~~===~~~~~~~~~~~~~~~==~,..................,..............~~:,.,~~~~~~~~:::::~~,.......,,,,,.....................:==~~~~~~~~~~~~~~~====~~~~~~~~~~~~~=~\n"
		<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~:..~?+:.............................:~:::~~~~~~~~::::::,.......,,,:,.................~++..,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==\n"
		<<"\t\t~~~~~::~~~::~~~~~~~~~~~~~~~~~~~~~:..,=?=,.............................::::~~~~~~~~~:,:,.........,,,:::,,,...,,,,,.....++~..,~~~~~~~~~~~~~~~~~~~~~~::~:~:~~~~~~~=\n"
		<<"\t\t~~~~~:~~~~~:~~~~~~~~~~~~~~~~~~~~==:...,:........................,...,.,:::~~~~~~~~~:,,......,,.....,,,:::,,,,,,,......,,...~==~~~~~~~~~~~~~~~~~~~~~~~~~:~~~~~=~~\n"
		<<"\t\t=~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~===:..............,,...........,:,..,,,.,,:~~~~~~~~,,.......,,......,,,::,,,,,,.....,....,~==~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=~~\n"
		<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~==++==~~~:.........,,,,........,::,.,::...,::~~~~::,,.......,,......,,,::,,,.......:======+==~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
		<<"\t\t~~~~===~~~~~~~~~~~~~~~~~~~~~~~~~==+++++++=..........:,,,.......,,,,..,....,:::::::,,....,....,,.......,,,,........,=++++++++=~~~~~~~~~~~~~~~~~~~~~~~~~===~~~~~~~\n"
		<<"\t\t~~~====~~~~~~~~~~~~~~~~~~::::~~~==++++++++~...........,,,...................,,,,,,,...................,,,........,=+++++++++==~~:::::~~~~~~~~~~~~~~~~~~===~~~~~~\n"
		<<"\t\t~=====~~~~~~~~~~~~~~~~~~~::::~~=+++++++++++~.......................~:,~~,.,,.........,~+~,~~....................,~++?++++++++==~~::::~~~~~~~~~~~~~~~~~~=====~~~~\n"
		<<"\t\t======~~:::~~~~~~~~~~~~:::::~~==+++++++??++=:......................::,~+=,=?I7I=???=:,=+,,:,....................,~=+???+++++++=~~~:::::~~~~~~~~~~~::::~~======~=\n"
		<<"\t\t====~~~:::::~~~~~~~~~~:::~~~~~=+++++++++++==:.........................,~:.:+?++:~==,.,~,.........................::==++++++++++=~~~~~::~~~~~~~~~~~::::~~~=======\n"
		<<"\t\t=~~~~~~~:::::~~~~~~~~~~~~~~~~==+++++==~::,.......................................,....,.......,,....................,:~~==+++++=~~~~~~~~~~~~~~~~~~::::~~~~~~==~~\n"
		<<"\t\t~~~~~~~:::~~~~~~~~~~~~~~~~~~~~~~~:,,..................,,.......,..............................,,.........................,,:~~~~~~~~~~~~~~~~~~~~~~~:::~~~~~~~~==\n"
		<<"\t\t===~~~~~~:~~~~~~~~~~~~~::::,,...........................,......,,.......,............,.......,,,.................................,,::::~~~~~~~~~~~~~:~~~~~~~~~==\n"
		<<"\t\t====~~~~~~~~~:~::::,,..........................................,::......,............,......,:,.........................................,,,::::~~~~~~~~~~~==~~==\n"
		<<"\t\t~~~~~~~::::,,,..................................................:,..........................::,................................................,,,::::~~~~~~~~==\n"
		<<"\t\t::,,,,..........................................................,:,........................,:,.,.......................................................,,,,,,,~~\n"
		<<"\t\t................................................................,:,.................,.....,:,..,................................................................\n"
		<<"\t\t..............................................................,,.,,,~+I~...............,,:,,,,,,................................................................\n"
		<<"\t\t..............................................................,,,,,,:+oI~,...........~I=:::,,,,,................................................................\n"
		<<"\t\t...............................................................,,..,,:~=+I+:,,..,,.==777:,,.,,,.................................................................\n"
		<<"\t\t................................................................,...,,,,~I+:=+~:II?77+=~,..,,,..................................................................\n"
		<<"\t\t.................................................................,...,..,::,=~:+I?=7+.,,...,,...................................................................\n"
		<<"\t\t..................................................................,,.......,,..~=:.......,,,,...................................................................\n"
		<<"\t\t.........................................................................................,,,,...................................................................\n"
		<<"\t\t....................................................................,,................,,..,,....................................................................\n\a";
	Sleep(500);
	system("cls");
	DEAD();
		
	}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////        END OF GAME FUNCTION         //////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void END()
{
	system("cls");
	cout<<"\n\t\t\tCONGRATULATIONS YOU ESCAPED....THE FIRST CHAPTER...."
		<<"\n\t\t\t         TO BE CONTINUED.....                       ";
		Sleep(3000);
		exit(0);
		
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////          YOU DIED        ////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
void DEAD()
{
	
						system("mode 3000");
						system("color 0C");				
						cout<<"\n\t\t\t::::::::::::::::::~~~::::::~::~~:::~~~~~~~::~~~~~~~~~~~~:~::::~~::::~~:::,..~?IIIIIII????++I?+~:~~~~~::~::::::~:~~~~~~:::::~~~~~:~~~~:~~~~~~~~::::~~:~~~~~~~~~~~:~~~~~~=~~~~~~::~~~~::~~~~:~~~~~::::~~=~";
						cout<<"\n\t\t\t::::::::,::::~~~~~~~::::~~~:~~:::::::~~~:~:~::::~~~~~~~~~~~~:~::~~~~~,=+?IIIIIIIIIIIIIIII77IIII7I?==~~~~~~~~~::~~~:::~~~~~:,::::::~~~~~~~~~~~~~~~~~~~~:~~~~~~~~~~~::~~~~~~~~~~~~~~~~~~:::~::::::~~~~~~~:";
						cout<<"\n\t\t\t::::~::::::::::::~:::::::::::~~~~~~~~~::~~~~~~:::~~~~~~~~~=~~::~~=~:=?++?IIII?III7IIII??III7IIIIIIII?+=~~=~~~~~~~~~~~~~~~::::~::::~~:~~~~~~~~===~~~~~~~~~~~~~~~~~::::::::~~~~~:,::::~~::::::,:::~~~~~:::";
						cout<<"\n\t\t\t~::::::::::::::::::::::::~:~::~~~~~~:~~~:::::~~:::~~~~~~~~=~==+???+??????I??I???IIIIIIIIIIIIIIII7I?II???=~::~~==~~~~~~:::~~~:::~::::::~~~~~~~~~~~:~~~~~~~~~:::::::::~::~~~~~~~~:,,,:::~~:::::::::::::~::";
						cout<<"\n\t\t\t::~~:::~:~~~:::::::~~~~~:::::::~~~~~~~:::::::~::,,::~~:::~=,~~~:~++???+????II???IIIIIIIIIIIII????IIII??+????+==~~~~=~~~~~~~~~~~~~~~~~::~~~:::~~~~~~~:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t::~~:::~:~~~:::::::~~~~~:::::::~~~~~~~:::::::~::,,::~~:::~=,~~~:~++???+????II???IIIIIIIIIIIII????IIII??+????+==~~~~=~~~~~~~~~~~~~~~~~::~~~:::~~~~~~~:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++.....,:::::,..,::::,.....::,,::,.....,::::::....:::::.......,,:::::::,.......::::::.:,:,::::::...,,:,,::::,......:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t.........................................,::......::.....::......,::.....,::........:,.........,::......::.......::.....:,.....,.....,:......,,,...:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++........:::....,:.....::........,::....,:,........:..........,:,.......,::.....,:.....::...........::.......,::..:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t...........................................::....:.....::..........::....,:,........,...........:,........:,:....::.....:,...........::........,,:.:~~~~~~=~~::~~~~~~~~~~:~~~===========~~~~~==";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++..........::..:......::...........::...,:,........,..........,:,.........::....::.....::....:......::.........::.:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t.............................................:::......,::...........::...,:,........,..........,:,.........,:....::.....::,,,::......::.........::.:~~~~~~~~~~~~=~~::~~~~~~~~~~:~~~===========~~~~~==";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++...........::,......,::...........::...,:,........,..........,:,.........::....::.....::....:......:,.........,:.:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t.............................................,:,.......::...........::...,:,........,...........:,.........:,....::.....::....:......::.........::..:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++...........,:,.......::...........:,....:,........:...........:,.........::....::.....::...........,:.........::..:~~~~~~~~~~~~~~~:~:::~~~::~~~~~~::::::~~~~~~::::::~";
						cout<<"\n\t\t\t.............................................,:,.......,::.........::.....::........:...........:,........::.....::.....:,...........::........,,..IIII?,:~~~~=~~~::::::::~~~~~~~~~~~==~~~::::~~~~~~";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++...........::,........:::.......::......,:,......:,..........,::.......::......::.....::......,:...:,.......::..IIIIII?,:~~~~=~~~::::::::~~~~~~~~~~~==~~~::::~~~~~~";
						cout<<"\n\t\t\t............................................,:::,.........::.....,,.........:::,,::............::::....::.......,::,...,:::...,:,...::::....,:....IIIIIII?,:~~~~=~~~::::::::~~~~~~~~~~~==~~~::::~~~~~~";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++...............................................................................................................IIIIIIIII?,:~~~~=~~~::::::::~~~~~~~~~~~==~~~::::~~~~~~";
						cout<<"\n\t\t\t::::~:::,,,,:::::::::::~:~~~~:=+++???++???II??+???+++????I??I?IIIIII?IIIIIIIII?+I??I?I777777I?~:III7777777II~:=+I?????IIIIIII+==????77I7?~++?I7IIIIII?IIIII?,:~~~~=~~~::::::::~~~~~~~~~~~==~~~::::~~~~~~";
						cout<<"\n\t\t\t~~::::::::~::::::::~::::~::~:?+++++??+????????+++?++????III?I?IIIII???+?IIIIIIII?I7IIIIII77I~~I77I777777777I?+=~:+?IIIIIII??++???II?IIII?:=~+III????I??I?I7II~:~~~~~~~~~~~~~::~~~~~~~~~~:~=~~:::::::~~~~";
						cout<<"\n\t\t\t~~~~~~~~~~~~~:,:::::~:::~~:~+++++++?+???I??+???++?+???????III???I?I??I??III??I7II+I7IIIII7II?,IIIII7I7777777II???+?I777III???????III??I?~:=~~~==??????IIIIII?I+~~~~::~~~~~~~~~~~~~~~=~::,::~=~~:::::~~::";
						cout<<"\n\t\t\t::~~~~~~~~~:~:::::::::::::===+?++++???+?+?=++?++?I????+?IIII??II??++I?IIIIIIIIIIII??II77IIII?~IIII+?II7777777I7I??II77II7IIII?????II???=:,::~=+++====?III????77I~~~~:~~~~~~~~~~~~~~~~~~~~:~~~~~~~~~~~~~~";
						cout<<"\n\t\t\t~~~~~~~~~::::::::~::::,,:~+++++++++??I???++++???I??I????II???I??II????IIII????II?II?I7777IIII=I?I+=+?II77777777IIIIIIIIII??I?????????I+=:,:::~=I?+I=?++???????I7+:~~~~=~~~::::~~~~~~~~~~~~~~======~~~~~~";
						cout<<"\n\t\t\t~~~~~~~~~:::::~~~~~~:::::=++++++++??????++??????????????III?II?II?????II??+++IIIIIIIII7I7IIII++=?:?I~?IIII77777II?????III????I+??++?????+:,,:::~=~?????+++?+?+?II=::~~~~~~~~::::~~~~~~~~~=~~~========~~~";
						cout<<"\n\t\t\t::~~~~~~:~~~~~::::::::::~++++++?++????++=+???+????????III??I?I???I???III????IIIIII777777II??I?+??==~+I?I?77777III?III?I????II???++?+????I??I?:,,:~::::+??I+=?+?I??~=~~::~~~~~~~~~~:~~~===========~~~~~==";
						cout<<"\n\t\t\t:::::~~:~~~~~~~~~~~~::::==+=+++++?+?????+=+++??+??++++???I??+~+?I++I?III?IIII?III77777III?I+++++?:..,,,:.~+?7IIIIIII??????III+++?????+=+I?II??+~,,,:::~~.?~~+=????,~:~~~~~:::~~~:~~~~~~~~~=~~~~====~~:~~";
						cout<<"\n\t\t\t~~::::~~~~~~~~~~~~~~~~~,=+++++??????I???++???????+?+I????????7?==?IIIIII?IIII??III77IIII?I??=:=,.,,.,~:,,,,,,+IIIIII?????III?++????????IIIIII???,,::::,,?+==~~+?++,~~:::~~::::::~~~~~~~~~===~~~~~=~~~~~~";
						cout<<"\n\t\t\t~~~~~~~~:~~~~~~~~~~~~~:~==++++?I+?++??++++??+?++???????I????II????I?IIIIIIIIIIIIIIIII?+?????+.....,,,=~,.....,..~?7I+?????I+?II?+?+?II??II???I??+,::::,,+==~~=~~:,:~:~:::~~~~~~~~~~~~==~~===~:::::~~~~~=";
						cout<<"\n\t\t\t~~~~~:::~~~~~~~~~~~~~~~==+++++??++?????+++==+==++=+?+?????????I?III?IIIIIIIII?IIII???++?++~............,........,,.,++???????+++??????I????I??+??,,,::,=~~~~=~~=~~~~~:::::~~~~~~~::~~~~~~~~~=~~~:::~~~~~";
						cout<<"\n\t\t\t~~~~::~~~~~~~:~~~~~~~~:~~===+????++?+++++++++++=??+==??????+??+???I??IIII???II???????++++:...............,=~,.....,.:+???++??:=+???????????I?????::~:+?I==::+:~~~~~~~~~~~~~~~::::::::::~::::~~~~~~~~~~~~";
						cout<<"\n\t\t\t:::::~::~~~~~~::~~~~~:::====??+?+??++=++?+=+?=~++??+?+??I=++??IIIII?IIIII???????+?++?=+~...................,=II??.,:,+++??+??=I?I??++???+??++??=~=:~+~=~:,+,::~:::::~~~~~:~~~~~~~~~~~~~~~:~~~~~~~~~~~~~~";
						cout<<"\n\t\t\t:::::,:~:~~~~~~~~~~~~:::~==~++++?+I?++??+=+==++?I+??+?===+==IIII?I???IIIII???+++?+++~~.......................,I?I7=+.=????I+II???+++???++++???,:===+I?..:~~~~=~~~:~~~~~~~~~~~~===~~====~~~~~~~:~~:::~:~~";
						cout<<"\n\t\t\t:::::~:::::::~~~~~~~~:::~===+=+++?++?++++++=++++?III++++++???IIII????IIII?I?+==++++?+,........................,~+I?7,?I??III?++I7?I?+?+++?I?I,~+?????...~~===+==~~~~===~~~~~~===~~~~~~~~==~===~~~~===~~~";
						cout<<"\n\t\t\t~:::::::,:::~~~~~~~::::::~====???????+++++??++I???????++??+?+?IIIIIII?II?II?+++++++++.........................:,.,+?=II=~?III?==????=++==I??I,++~?7?....~~~~==,.~===~~~~~~~~~~====~~~~~~=============~~~";
						cout<<"\n\t\t\t~~~~~:,,::~~::::::::::::~~~=++++?+????++=+++++??++??II=+??++?III??????II????+?++++++:............................,,.II????III==~++??+===+===~,III?+~....~=~==~7I=~~~~~~~~~~~~~~~==~~~~~~~~~~==========~~";
						cout<<"\n\t\t\t~~~~~~~~~::::~~~:::::::::~~~==+++????++==++++???++????+???=+?III??II??++I?????+??++~.,...........................,,=I?+=+I?+~=~==+?++++=,....~?I:...:,.~=~==+=II77+~:~~~===~~========~~~~~~~~~~~~~~~~~~~";
						cout<<"\n\t\t\t~~~~~~~~::::::::::::,,,,::~~==+++++??+++++++??????????+???+??III?II?I??++????+?+?~..,...........................,.=??=+?=I+~~~==+=+=~~..::::,=?~....,~=?~~==+~7IIIII?~~~===~~~~~========~~~~::~~~~~~~=~~";
						cout<<"\n\t\t\t~~~~:~~:::~:::~~~:::,,,,:~~~~==+?????+++?++??I??+???++?????????+II???+?+?+?????I+...,....................,.......:??++????=:~~~:~~~~,,:,,,:::.......::=+:~~:~?7IIII7777II+============~~~~::::~~~~~~~===";
						cout<<"\n\t\t\t~~~~:~~~~:::::::::~~,.,,,:~~~:+=+++?++?++~++III?????+???++++??II+=???=+I????IIII:,..........................,..,:??=+?=?+~~==~,~:,~:::,,,:,,.......~?,?+~~~:?7IIIIII77IIIIII?:==~===~~~==~=~~~~~~~~~====";
						cout<<"\n\t\t\t::~~:~~~~~~~~~~~~~~~..,,,::~~~=++++++???+I?+??????+???++++=+??~++++I?+++???IIIII~............................,..I?+??+?+=+++?+=,:::::,,,::......~7=:.,~.:~~~~7IIIIIIIII77777II?=,:~=~====+==++++++++++++";
						cout<<"\n\t\t\t~:~~::~~~~~=~~~~~~~~..,,,:::~~~=+++=+~+??++=++++++++=???~++?=+?=+:==?++?++?++II??+:,...........................+?~?~??~~,IIII~,:::,::,,:~:.......,...=::==~=,?IIIIIIIII7I7II7IIII?~:~=++++++++++++++++++";
						cout<<"\n\t\t\t~~~~~~~~~~~~~~~~~:~~:,,,,.,,:~~=++?+++???++++????===++=++?I?+?+?+=~~~+=++???????????=,........................~~?+~=~~+??I=~:,,,:,,,:,:::~.......+??+=::~====,?III???IIII777IIII7IIIIIIII?+=?+++++==++==";
						cout<<"\n\t\t\t:~~~=~~~~~~~~~~:~:::~,,,,,..,:~~=+++=+++++?+=++=~=~=++++~?++????+=~~~==+?+++?????IIII?+:...................,,??++I~==?+=~:::::::::,:,,:~~:.......=~~+=+=~===~=,=III?IIII?IIII7777IIIIIIII?+++~IIIIIIII??";
						cout<<"\n\t\t\t~~~~~~==~~~~===~~~~=~::,,,,,:,:::=~++I??+==+===++=~=+?~=?+??+??+=~~:~=+??~??:???I?IIIIII?~.,.............,,,I?++~~+::::,:~?I?~=~~:::,,:~~=.:+??+?=+=~?::~~=~==~~IIIIIII?????IIIIIIIIIIIII++?+??III??????";
						cout<<"\n\t\t\t~~~~~~~~====~====~~~~~::,,,,,,,,::~~+++++++++==+?=:~+~==~++++=++=~~~~=++=?I+?+::?IIIIIIIII+?:..........,,.=I?+==:~===+,..=I77I?+=~::,:~~~+~~=+++??+=+~:~~~~~==::~?+?III?+????????III??III??????IIIII??++";
						cout<<"\n\t\t\t~~~~:~~~~~~~~~~~~~~~~~,:,,,,,,,,,:::~=:=++?==+?+?~+?+==+++?+==+~~=~~~===+?===~IIIIII+I7777II+,..........:II??+=~:~=+I~.,.~7IIIII?+~=:::~===~~~+++?=+~~~~~~~~~~~~:,:~~???I???????+??IIIIII????I+?I?II??+=";
						cout<<"\n\t\t\t=~~==~==~~~======~~~~~~.:,,,,,,:,,::~+==++=+=++?+:??????+??+++=~~~~~:~=+??+??????+?I=?I777II:........~+??+?II?++=+?I??,:?I77III???+=====~==+?I+=I??+~~~~=~~~~~~~~~..,~+??????II?I??IIII+++I?II??I?III?++";
						cout<<"\n\t\t\t~==~~~~==~~~=~~~~=~~~==~~,,:,,,,,::::=:~++==?+++~7=++??????I??+~~~~~:~=++++=+=+==+=~?I??II??+~,,,,:~+I??+?III????IIIII?II7II,,++?????????=+??IIIII?+=,=~==~=~~~~~~~,.,~=??I???III???III???IIII+?IIIII??+";
						cout<<"\n\t\t\t~~~==~~~~===~~~~==~~~~==,:,,,::,,:,::+~==~+++++=~=+=????????I?=~~~~:~~~=++?++=::=,,=?IIIIIIIII?+=+?I+++++?IIIII?IIIII?IIIIII?~??????????IIIIII??II==?:::,.:~:~~~~~~~~.,:~+I?????II?+??I?I?III?+?IIIIIIII";
						cout<<"\n\t\t\t~=~~~=+++=~============~:~,,:,,:,:::~+++~~++====~=+=++++?++I??+~,::::~::~++=~:,=II???III77777I???++=?++???I?II?I+II?II?IIIIIIIIII???????IIIIIII++?+II?~?I?+:,~~~:,====,.:~+??I?III???I?III?I?+I??IIIIIII";
						cout<<"\n\t\t\t~~~~~===+?+==+++++=======,::,::,:~~~=+=+==++=~~~==+=~:::~~~::::::,:::,:::::::~ 7II?IIIII7777IIII???+?IIIIIIII??+??I?I?III777IIIIIIIIIIIIIIIIII???+I7I=~=7=,,~~~..:===~.,:~+????IIIII?IIII??I?+???????III";
						cout<<"\n\t\t\t====~~::~++++=+++++=~====,~:,,::::~===++?~:~+~===~==,:,,:~::~~~~:.,:::,,,,::.=77????IIIIIIIIII???+??III7I777III???III?IIIIII7IIIIIIIIII?III7I?+=~+II?~?I?:,,,~,,.,~~~~,:==+??IIII?II??I????+?+????????II";
						cout<<"\n\t\t\t==~~~====+++==++++++++====,~::,::,~~~===~=+++=====:,,:~==+?I????+?+=+~~::,,,,:,::=?III??III????I???II7I77777777IIIIIIIIIIIIIIIIIIIIIIIII?IIIII==+I???~II++=:::,,..~~~,~=++?II?I?IIIIII??I????+??????????";
						cout<<"\n\t\t\t+===~====+++=~~====+===~=~:.:::::,::~~=~~====+==~~:::~~~+IIIII++=~~~=??II+=::,,,::::=7II??+:+I??????+?IIIIIIIIIII7777IIIIII??II??IIIIIIIII???++++??7~:+,~=..,:....:~=,+???IIIIIIIIIIII??I???++++????????";
						cout<<"\n\t\t\t~~===~====~==+++=========+,::::::,:::~~~~~===~~~~:~~:~~+?IIII?++:,::::~~~+=,:~:::::::=7777I:..........,:,,::::=+?I???III7IIIIIII?IIIIIIII?I?+=???I7I~7?+:,.......,,::+III???II??I?II??III?I++===++++++?+";
						cout<<"\n\t\t\t========~~====+======+++=+=,~,:::,:::::~:::~:~::::::::+?I????+~:.,,,,,~::,:,,~::~~:::,?77 7:........,.,:~~~~~~~===,.,~II77777IIIIII??7II?I?+=++?+:=+?7??+,....,...:~?IIII?IIII??II?III???I?++===~~==+===";
						cout<<"\n\t\t\t=========+====++++++====~=~~.:,::,,,::,:::,,:~:::::::~=++?+?+=,.,,:,:,~:,,,::,::::,,:,,:7+...............~~~~~~~=~...,,,7IIIIIII+??II7III?+++??=II7I+:::,,,,?I??,,~+I7I????II??I+?IIII?II??+?+++====~+++";
						cout<<"\n\t\t\t====++========:::~==++====~~:,,,,,,,,,::~~~~::::::,,,~=~=++~~::,,::,,:~:~::::~,:::,,,::=+...............:=~~~~:,........,II?+?????=?III??++?+?I?=:++??+:::,+I777II+?IIII+?I?I+?II+???I????I??????=++=~~~";
						cout<<"\n\t\t\t==========++++======+=~~~:::::,,:,,,,,,:~::::,:,~~::,~~==~:~:~~:::,:~::~=::,,,,:~:,:,,:=,............,.,~=~~~,..........~?II?+???=++=???++?+=?==,~~=?I++,:.=7777?~??III?III7????I+???I+???I??????++++=~~";
						cout<<"\n\t\t\t=====+++++===~====~~~:::,,,,::,,,:,,,,,,:,::~~~:::~~:~~:~~:::::~::,,,............,,,::::~.........,,,,,.,~=:,:,,,.......:+IIII?IIIII?I==??+~?????~=~~~::~++?:,+=,?I?III???III???II??++????I??++++???+===";
						cout<<"\n\t\t\t=+++++========~::~~~::,,,,,,,,,...::,,,,,,::~~~::~::~::~~~:::~:~:~,.,...............:::,.?~,.....:,,..,,,,,,,,,,,,,,,,,:,=7I+?++?IIIII==??=~==?+~~=~++,+II7IIII:=??++?II??+??+I?II???IIII77?+=====++++++";
						cout<<"\n\t\t\t==========~~~~::::::::,,,::,,......,~,,,,,::~~::~=~~:::~::~~~:~~=~,,..................,:,::?=...:~~~:::,.........::::::,==??+++=++++??+I++=~~~=~~====,~==+?I~I??I??III??I=II+????????IIII7I+~~~~==++++++";
						cout<<"\n\t\t\t=++++=+++~~~::::~~:::,,,,:,,,,......,:::,,,::~~:~=:~~~~===~~~~====~:..................,,,::,?...==~~:=,...........,,==+++++++???+?===+++=?II:~,=====+,?77?:,+I7IIIIIII??I?II?I??+I??IIII7II=~:::~~~~==++";
						cout<<"\n\t\t\t++++++==:~::::~~:::,,,,,,,,,,,.,.....,.,::::,,,~~~~:~::~=~~===~~===,...................,.,,,I,...,:~=:............,:+?+??+++????I??++=~~+,77+~~==~~:.==+??II7?IIIIIII?III?II?+~~=I??IIII77+~:,::::::~~==";
						cout<<"\n\t\t\t++++=~~::~~:~:~~~~,,,,,,,,,,,,......,,...,:::::::::::,~=~~====~~~=,,..................,.,,:,,I.....,..............,,+??I??????III+?+~?:=+=~==~=+??~,~=~=~:,,+I77777IIIIII???????I???I77777~=,.,,::::::::";
						cout<<"\n\t\t\t++++~:~~~~~~~~~~:::,,,,,,,,,,,..........,,..::::::,,:===:==:==~~~~,,..................,,,=::,:I~:......,.,........,::???????+??I?++==~+=+?~:~~+?II:~?I?=:+III777777777???+++?I?+?III77777I==~....,,,::::";
						cout<<"\n\t\t\t+===:~:::::~~:::::,,,,,,,,,,,,,............,,,,:~:,,:::~,::~=+=~~,,................,.....+,:::~~,I+:,................:.,=777II77I+==++:,.....++=??.~==??II?=:I?II777777II??IIIIIIIII7III7++==~,,......,,";
						cout<<"\n\t\t\t+=:::::~:~~:~:~~:::,,,,,,,,,,,,,.............,..,~~~:,:,:,~===~~=,................,.,,,.,~::::~~::::=I?=~,,.........~+==::~=?777I?==+:?++~::~:,:==?7+:~=~?I7=?++II77I77II+II??II?I?IIIII?+=+=+=~:,::,...";
						cout<<"\n\t\t\t+=~~~:~:~~~~::~~~::,,,,,,,,,,,,,.............,....,:~=:~::::~~~~=,.................,,...,:~~:,::,:,::::::+7I,...:=+?+~===~,,:,=?I+==~~??~:~~::::?,?I?+,,.,::~??+?IIII?IIIII???+?IIIIIIII====+=+??+~~:,,,";
						cout<<"\n\t\t\t=~~~~~~~~~~~::,:~~:,,,,,,,,,,,,,..................,,.,:~=~,:,::~=........................,=~::::~:,,.,:~=::+I?.:?+=====~~:::,:,,=+===,++~~~~~~:::=??IIII,??+=++++?II+I+??III?????IIIIII?+==~???++??+~::,";
						cout<<"\n\t\t\t=~~~~:::::,,,,,,,,,,,,,,,,,,,,,,,....................,...~==~:~=+..,.....................,=~:::~~:,,,,,::~===~=+===~~~::::::~=::::==,,,:=+=++~:,:++++??7+?++=+==+?I?II???I??+?IIIIIIIII=++==~=+=?II??+~~";
						cout<<"\n\t\t\t=~~~::~~~~~:~~~~~:::,,,,,,,,,,,,,,......................,...~~=:~~,......,~+?~,.,,.......:=~:::~~:,,,~::::~:~~~~=~=~,,::::,,,:~=:,~=:.,,,,++=~,:?+=::~==+I7I+++++IIIII??II??+?IIIIIIII=~==++=:~:~+++++~~";
						cout<<"\n\t\t\t=~~~~:~~~:::~~~~~~~::,.,,,,,,,,,,,.......................,...,+~==.......,.,??++~:,,,....,==~:~~~:,:,:=~:~::,~~:::~,,,,,,,,,,::~~==++?=+=?~,~~~=+7I?=:?I+~:::=?IIIII7IIIII????IIIIII+?:+=++++=~:~:+++=++";
						cout<<"\n\t\t\t=~~~~~~:::~~~~:~~~~~:,.,,,,,,,,,,,,...........................:==~:,......:~??+++~~==:,.,,~~::~::,:~:~~~::::::~~:=,.,:::::,,:~~~~:+?=~:~++++:~++==+?I7:=:,,,:=??I777I7II?I????III?II?==+==+++++=:~~=?I??";
						cout<<"\n\t\t\t==~~~~~~~~~~~::~~~~~::,,,,,,,,..,,,,,........................,..~~~~.,,,,:II??++++~=+===~~~~:,,,,....,,,,,..........,:,::::,:~~~:=~.=~:::::::+II?+,,.,~==+???=++?????I????++??II????=:+++==+?+?+?+==~+++";
						cout<<"\n\t\t\t=+===~~~~~~:~~~~:~~~:::,,.,,,,,,,,,,,,,.........................,~~~~:,:,:??II??++=+===+.~~:~~.,,,,,,,.,.,..,:,,...,:,,,,,::~~=++?+:.:==::==.=+~+I77=~~?~=~~~~==+====????+II7?IIII?=,=::=:,,=++++=~=~=+?";
						cout<<"\n\t\t\t+++===~~~~~~:~~~~~~~~~~::,,,,,,,,,,,,,,..........................,::~~~:,+I?II???==+=+=+,~~~~::,,:,,,,,,,,,,~:::::,,:::,,,::~==+=,~:,.,~++++:++==+??~~+??III+~++====++===+?I77777I+==+=====+++?+?+~~~?+?";
						cout<<"\n\t\t\t+=+++++=++=~~~~~~~~~~~~~~::,,,,,,,,,,..,,,,,......................,...~==,::+????+?+==~:=::~:=::,:,:,,:,,:::::::::::::::::~~====~,+~::::..,:~:=~:..,~~=~~~=+=========++=?+I7IIIIII=:=++==+++=+==+=~~:+++";
						cout<<"\n\t\t\t=+==+++======~~~~~~~~~~~:~~:,,,,,,,,,,,,,,,,,,................,,..........,~~~:,,:::~:=~=~=~+~,~,~,,,,::::,:::~~~~~~===~~~~=+=~,.,:++::::.::,:,:~??=~+++=++====~~~~======~+++++??+~=======++++?+++=~~~==";
						cout<<"\n\t\t\t=+++++?+++++++=~~~::::~~~:~~~:,,,,,,,,,,,,,,,..,,............,,................,~~~~~~~~==~~=~:~:,:::.::.:::~=~:..........,:~::,=~~~,+~~:,,,~~,,,:,,===~::~~=~::~~~=+====++=+=+=+:==++=++++==++=+=++:~==";
						cout<<"\n\t\t\t+==+++=+++++++++~~::~~~~~~:::::,,,,,,,,,,,,,.,,,,,,,.........,............,...,,.,,:======++~~::~,~:,::~:~~~=,...............:~~:=++=::=,:,,~=+~~::,,~~~=====~~::::~~=~~=~~===~~=:========+++=+++++++:~~";
						cout<<"\n\t\t\t++=++?++++++++++++=~~~~~~~~~~~~~:,,,,,,,::,,,,,,,,,,,,......,..,.........,,,,,,,,,.....:===?=~=~~~:~~:~:~:.....................:?,????+=.,:.::::~::~II?+~=:~+~:,,:::::::~~:~~:::~=~======~++++++?++++=::";
						cout<<"\n\t\t\t+++++++++++++=???=++~===~~~~=~~~~::,,,,,.,,,,,,,,.,.,.......,......,.,,,,:~~~::,,:,,,,.,..,:=~~~=~~~:,..,.................................,,:.,,~~=+?,~~~+?+~::::,,,,,::::::::::~:==~~=~==+=+???+=++++=~";
						cout<<"\n\t\t\t++++++===++++==+=+++++++++++++=~:~::,,,,,,,,,,,,:.,,,,..............,,,=+?==~~~:,...,,,,,,...................................................,I????+~~~~~~~~~:::::,,,,,,::~::~::~:==~~==:~=++???++??????";
						cout<<"\n\t\t\t+==+=====++=~=+++++++=+++++=++++=~,:::,,,,,,,,,,:+??=:......,......,,,=?:~+?=::,,:,:~::::,:,..................,,:,......,....................~,,+?+~===~~~~~~~::::::,,,:~~:::~::~~====+++::~?????II??+??";
						cout<<"\n\t\t\t=+==++++=+++++++++++++++++++~=+++++=~~~~~::,:~:~+=?+=+=+?=~?I=,,,,,,,:==~~~~=?=~~::::~=+=,,,~,,,,,,,,,,,,,,,,,,,::.......,,.......................,,,~::::~~:::~=~~::,,,:~~:~~:~:~=~=======?I??++====~~~";
						cout<<"\n\t\t\t++==+++++++++===+++=+++++++++++++++++++++=~~~~::~~======?=~~??????II?==?I+??+++??I+=+?+=??+++???++==~:::~~::~~:~~~~:.................,........................::~~~~:::::~::~:~:~~==+???I?++=~::::::,::,";
						cout<<"\n\t\t\t++=~=++++=+++~~~=~+++?+?+++++==++++++=+++++==+=+::==:~~=:~~+++?+??I??~:~???+?I??+?++++?+??++??++??++++??=~~~~~:::+??:.............,,,,............................,:~~~~:~::::::~=??+??+==~~~:::::.,,::,";
						cout<<"\n\t\t\t+++++++==+++++=~=+~+++==++==+~==+++++++==++++~===++=~~::,:~=~~+:=~==?~~~??=+????+I??+==+++++????=?++++++++=~==+?=+++=++:...,...,.:~~:~...,,,,:,,::~~,,.,,,,,.,.....,,...:,,,~:~~+?++==~~~~~:::::::::,,::";
						cout<<"\n\t\t\t+++++==~=+++++++++++?+++++++++=+==+++++++=++=+++++?++++++=,:::::,:::+,,:~~?+====+=?II???+++???++++==+++=+?+++++++==+?++~~~~~~:::,,,,:~~~=:,,:=~=??:,++::=?I++~~:=:,,~:~=+,~~,:=+=====~~~:::~~~~:~:::::::";
						cout<<"\n\t\t\t+++++++++++++++++++++++++??++++++=++===+===+++++++++++++++??==++=~,::,,.,,:+?:+=~+II?+????=+=?+?????==????++?+++??????++++??+==++==+=++=++?++?+~~:====+++??+++==++==+~+??=,,.,~~~~~::::~:::~~~~~::~~~~~~";
						cout<<"\n\t\t\t+++++++++++++++++++++++++++=+++==+++++=++++++=++++++++++====++++++=+=:::,,::+?~:~~??++?I?????++++???+++++++????+++++?????+++=+++++?+=+??++???+?++++?=~=?+??????+=++++~~::~=~:~~:~=~~~~+=~,::~~:::~::::::";
						system("pause");
						exit(0);
}	

