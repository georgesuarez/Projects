
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
#include <windows.h>
#include <stdio.h>


using namespace std;

int hi_ft,//height in feet
	hi_in,//height in inches
	we_lb,//weight in pounds
	age,
	light_switch = 0,
	movechoice,
	startaccess = 1;
	
	
string 	first_name,
		last_name,
		gender, 
		bodytype,
		location = "START";

int strength,
	intelligence,
	luck,
	perception,
	patience;	

bool g_bool = true;
bool door_bool = false;	

void helpscreen();

void playerinfo();

void titleflash();

void playerstats();

void atDoor();
void atSTART();
void atAIRVENT();
void atBACKDOOR();

void CHARACTER_LOCATION(string);



int main()
{
	system ("color 0C");
	system ("mode 2000");
	cout << "\t\t\t\t\t\t'------------------------------'\n";
	cout << "\t\t\t\t\t\t|------------------------------|\n";
	cout << "\t\t\t\t\t\t|--PROGRAM BROUGHT TO YOU BY---|\n";
	cout << "\t\t\t\t\t\t|     DAVID CRUZ & UNKNOWN     |\n";
	cout << "\t\t\t\t\t\t|----- A TEXT BASED GAME ------|\n";
	cout << "\t\t\t\t\t\t|------------------------------|\n";
	cout << "\t\t\t\t\t\t|---RATED R: ...............---|\n";
	cout << "\t\t\t\t\t\t|------------------------------|\n";
	cout << "\t\t\t\t\t\t'------------------------------'\n";
	cout << "\n\n\t\t\t\tPlay in Full Screen Mode/Maximized Mode for the Best Experience!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	system("pause");
	system("cls");
	
	//titleflash(); 
	//playerinfo(); 
	//helpscreen();
	//playerstats();
	CHARACTER_LOCATION(location);
	
	cout<<luck;
	
	return 0;	
}

void helpscreen()
{
	cout<<"\tHELLO "<<first_name<<" "<<last_name;
	cout<<"\n\tTHIS IS THE HELP SCREEN:\n";
	cout<<"\t-----------\n\n";
	cout<<"\tALL USER INPUT MUST BE:"
		<<"(LOWERCASE)\n\n";
	//Sleep(2000);	
	cout<<"\tMUST USE LOGIC TO "
		<<"SOLVE PROBLEMS:\n"
		<<"\tIF FIRST INPUT DOES\n"
		<<"\tNOTHING THINK AND TRY\n"
		<<"\tAGAIN.\n\n";
	//Sleep(3000);	
	cout<<"\tMOST IMPORTANT:";
	//Sleep(5000);
	cout<<" \aKEEP CALM!!!\n\n\n\n\n\n\n\n\n\n\n\n";
	
	system("pause");
	system("cls");
	
}

void playerinfo()
{
cout<<"\t\tPLAYER INFO\n\n";

cout<<"\n\tENTER YOUR NAME:\n\t";
	cin>>first_name>>last_name;
	
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
			
			while(g_bool)
			{
				cin>>gender;
				if(gender == "F" || gender == "f")
					{
						gender = "female";
						break;
					}
				else if(gender == "M" || gender == "m")
						{
							gender = "male";
							break;
						}
				else 
					cout<<"\n\t\tINVALID ENTRY TRY AGAIN: ";
			}
			
			cout<<"\n\n\n\n\n\n\n";
			system("pause");
			system("cls");
						
}

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
			cout<<"\t\t\t  @@@@@@@|@@  @@@@@  @@@@@  @@@@@@@@|@  @@@@@@@@@@   @@@|   @@@   @@@@   @@@     \n";
			cout<<"\t\t\t  @@@@   |     @@@@  @@@@|     @@@@        @@@@  |   @@@'   @@@   @@@@   @@@     \n";
			cout<<"\t\t\t  @@@@          @@@  @@@       @@@@        @@@@  '   @@@    @@@   @@@@    |      \n";
			cout<<"\t\t\t  @@@@@@@@@@     @@@@@@        @@@@        @@@@      @@@    @@@    @@@@          \n";
			cout<<"\t\t\t  @@@@@ @@@@     @@@@@@        @@@@        @@@@      @@@    @@@     @@@@@@@@     \n";
			cout<<"\t\t\t  @@@@     |    @@@| @@@       @@@@        @@@@      @@@    @@@          @@@@    \n";
			cout<<"\t\t\t  @@@@         @@@@  @@@@      @@@@        @@@@      @@@    @@@   @@@   @@@@@    \n";
			cout<<"\t\t\t  @|@@@@@@@@  @ @ @  @ @@@  @@@@@@@@@@     @@@@      @@@@@@@@@@   @@@   @@@@@    \n";
			cout<<"\t\t\t  @|@ @@@@@@    @ @  @ @ @  |@@ @@@@@@     @@@@      @@@@@@@@@@   @@@@@@@@@@|    \n";Sleep(100);
			cout<<"\t\t\t  |'   '' |       |       |     |    ||        |          ||    |     |   '      \n";Sleep(500);
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
					system("cls");
					
				}
		}
		
}


void playerstats() // player stats 1 - 10
{
	int total = 25;
	
	

		
		int str,
			IQ,
			luk,
			percep,
			pati;
			
		cout<<"\n\t\t\tPLAYER STATS:\n\n";
		
		cout<<"\t\tYOU ONLY HAVE 25 POINTS TO SPEND \n"
			<<"\t\tSPEND THEM WISELY..\n\n";
			
		cout<<"\t\tMAX IS [ 10 ]..\n";	
		cout<<"\n\t\tSTRENGTH..[ ENTER VALUE ]  ";
			cin>>str;
			while(total > 0 )
			{
				if(str>=0 && str<=10)
				{
					strength = str;
						total = total - str;
						cout<<"\n\t\tTOTAL POINTS LEFT: "<<total;
					cout<<"\n\t\tINTELLIGENCE..[ ENTER VALUE ]  ";
						cin>>IQ;
							
							if(IQ>=0 && IQ<=10)
								{
									intelligence = IQ;
										total = total - IQ;
										cout<<"\n\t\tTOTAL POINTS LEFT: "<<total;
									cout<<"\n\t\tLUCK...[ ENTER VALUE ]  ";
										cin>>luk;
											
											if(luk>= 0 && luk <=10)
												{
													luck = luk;
														total = total - luk;
														cout<<"\n\t\tTOTAL POINTS LEFT: "<<total;
													cout<<"\n\t\tPERCEPTION...[ ENTER VALUE ]  ";
														cin>>percep;
															
															if(percep>=0 && percep<=10)
																{
																	perception = percep;
																		total = total - percep;
																		cout<<"\n\t\tTOTAL POINTS LEFT: "<<total;
																	cout<<"\n\t\tPATIENCE...[ ENTER VALUE ]  ";
																		cin>>patience;;	
																		break;
																}	
												}
								}
						
				}
			
				
									
				break;
			}
	
			
			
}


void atDoor()
{	
	if(door_bool == true)
	{
		exit(1);
	
	}
	int door_option;
		
	system("mode 2000");
	system("color 07");
	
	
						int strength = 6;//temporary
						string 	DOOR_CHOICE,
								KEYPAD_CODE;
								
						KEYPAD_CODE = "solved";	
						
						
			
	
	
	cout<<"\t\t\t  .-----------------------------------------------------------------------------------------------.    \n";
	cout<<"\t\t\t  |*****+#+##+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#++#+#+#&+#+#+##################&&&&|    \n";
	cout<<"\t\t\t  |**** . . . . : : : : : ::::::::::+#&+&#+&#&#&#+#+#+#+#&#&#+#+#+#+#+#+#+#+#+#+###############&&&|    \n";
	cout<<"\t\t\t  |***              : : : : : : : ::::::::::+#+#+#+#+#+##+#+##+#+#+#+#+#+#+#####################&&|    \n";
	cout<<"\t\t\t  |**                       ::::::::+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+############&|    \n";
	cout<<"\t\t\t  |*                   : : : : : : : ::::::+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+##+#+#+#+#+#+###########|    \n";
	cout<<"\t\t\t  |'                          :::::::::::::#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#+#############|    \n";
	cout<<"\t\t\t  |                   .  : : : : : : .________________________.:+:+++++++#+#+#+#+#+#+#+###########|    \n";
	cout<<"\t\t\t  |                     .  . ::::::::|                        |    : : :+#+#+#+#+#+#+#+#+#########|    \n";
	cout<<"\t\t\t  |                        .. :::::::|                        |          : ::+#+#+#+#+#+#+########|    \n";
	cout<<"\t\t\t  |                      .   . ::::::|                        |          :: :+#+#+#+#+##++########|    \n";
	cout<<"\t\t\t  |                        .  ..:::::|                        |       .   . : +#+#+#+#+#+#+#+#+###|    \n";
	cout<<"\t\t\t  |                     ..  . : .:;::|                        |      .   .   ::+#+#+#+#+#+#+#+####|    \n";
	cout<<"\t\t\t  |                       .  .' .::::|                        |     .  . . . :::+#+##+#+#+#+##+#+#|    \n";
	cout<<"\t\t\t  |                        . . .: :::|                        |   .  .  .   : ::#+#+#+#+#+#+##+###|    \n";
	cout<<"\t\t\t  |                           .  : ::|                        |    .  .   .  : ::+#+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                        . . .: :::|                        | ._____.       : ::...::+#+#+#+##+#|    \n";
	cout<<"\t\t\t  |                           .  : ::|                        | |1 2 3|   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                        | |4 5 6|     .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                    o--,| |7 8 9|     .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                        . . .: :::|                        | |# 0 *|     : ::...::+#+#+#+##+###|    \n";
	cout<<"\t\t\t  |                           .  : ::|                        | *-----*   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                        . . .: :::|                        |   .  .  .   : ::...::+#+#+#+##+###|    \n";
	cout<<"\t\t\t  |                           .  : ::|                        |    .  .   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                        . . .: :::|                        |   .  .  .   : ::...::+#+#+#+##+###|    \n";
	cout<<"\t\t\t  |                           .  : ::|                        |    .  .   .  : : ::+#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  |                             : :::|                        |      .  .   .  . .::#+#+#+#+#+#+##|    \n";
	cout<<"\t\t\t  -------------------------------------------------------------------------------------------------   \n\n";
	
	
	cout<<"\t\t\t  Hmmmm... It looks like the door is locked and can only be unlocked with a code..damn... \n\n";
	Sleep(4000);
	cout<<"\t\t\t  What do I do now? \n"
		<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n"
		<<"\t\t\t                   [2] TRY TO BREAK DOOR DOWN. \n"
		<<"\t\t\t                   [3] TRY TO INPUT CODE.      \n"
		<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n"
		<<"\t\t\t                                                  \n";
	cin>>door_option;
		while(door_option >=1 && door_option <= 4 && door_bool == false)
			{
				switch(door_option)
				
				{
					case 1: 
							cout<<"look around room: ";//generate look around function.
							break;
					case 2:
							if(strength >= 6)
									{
										cout<<"\t\t\t..OW!! I ALMOST HAD IT!!..It didnt work..now what?\n"
											<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n"
											<<"\t\t\t                   [x] TRY TO BREAK DOOR DOWN. \n"
											<<"\t\t\t                   [3] TRY TO INPUT CODE.      \n"
											<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n";
										cout<<"\t\t\t                   ";
											cin>>door_option;
											break;
											
									}
								else if(strength < 6)	
									{
										cout<<"\t\t\t ...I CANT!...This door is to strong for me im to weak..\n"
											<<"\t\t\t    if only i worked out more."
											<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n"
											<<"\t\t\t                   [x] TRY TO BREAK DOOR DOWN. \n"
											<<"\t\t\t                   [3] TRY TO INPUT CODE.      \n"
											<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n";
											cin>>door_option;
											break;
										
												
									}
							break;
					case 3:
							if(KEYPAD_CODE == "solved")
									{
										cout<<"I GOT IT!!! ...FINALLY I CAN GET OUT OF HERE..";
										door_bool = true;
										break;
									}
								else
									{
										cout<<"\t\t\tWell that didnt work...duh\n"
											<<"\t\t\t                   [1] LOOK AROUND ROOM AGAIN. \n"
											<<"\t\t\t                   [2] TRY TO BREAK DOOR DOWN. \n"
											<<"\t\t\t                   [x] TRY TO INPUT CODE.      \n"
											<<"\t\t\t                   [4] GO BACK TO CENTER OF ROOM.\n";
											cin>>door_option;
											break;
										}	
							break;
					case 4: 
							location = "START";
							break;		 					
				}
				
				
				break;
			}	
		

}



void CHARACTER_LOCATION(string x)
{
	
	if(x == "START")
	{
		atSTART();
		CHARACTER_LOCATION(location);
	}
	
	else if(x == "DOOR")
	{
		atDoor();
		CHARACTER_LOCATION(location);	
		
	}
	
	else if(x == "AIRVENT")
	{
		
	}
	
	else if(x == "BACKDOOR")
	{
		
	}
	
	
}


void atSTART()
{
	system("mode 1000");
	//int lookaround;
		
	if (light_switch == 0)
		{
			string playerinput;
			cout<<"\n\t\t\t.....uhhh....";
			Sleep(2000);
			cout<<"my headhurts....why is it so dark in here.\n";
			Sleep(3000);
			cout<<"\n\t\t\tWAIT!!.. WHERE AM I!?..What is going on?..i cant remember anything.\n";
			Sleep(1000);
			cout<<"\n\t\t\tI cant see anything.. whats going on??..HEYYY!!..HELLO!?.."
				<<"\n\t\t\tthink "<<first_name<<" what should i do? ";
			 getline(cin,playerinput);
			 if(playerinput == "look around"|| playerinput == "look for light switch")
			 	{
			 					system("cls");
			 		
			 					cout<<"\n\t\t...I think i found the light switch..lets see if it works...(flips switch)..\n";
			 					Sleep(3000);
			 					light_switch = 1;
			 					cout<<"\n\t\tYES! it works now lets see where im at..";
			 					Sleep(2000);
			 				
				 }
				 
				 system("cls");
		}
		
	if (light_switch == 1)
		{	
			if(startaccess == 1)
				{
					cout<<"\n\t\t\t                          (NARRATOR)                                         \n";
					cout<<"\n\t\t\tSOON AFTER TURNING ON THE LIGHTS YOU COME TO REALIZE YOU ARE IN A SMALL DIRTY"
						<<"\n\t\t\tMUSKY ROOM..AT FIRST GLANCE YOU NOTICE A DOOR, AIRVENT, AND ....";
					system("pause");
					system("cls");
					startaccess = startaccess+1;
				}
			cout<<"\n\t\t\tWHAT SHOULD I DO: "
				<<"\n\t\t\t[1] - INVESTIGATE ROOM: "
				<<"\n\t\t\t[2] - INVISTIGATE DOOR: "
				<<"\n\t\t\t[3] - INVISTIGATE AIRVENT: "
				<<"\n\t\t\t[4] - ....";
				cin>>movechoice;
				while(movechoice >=1 && movechoice <= 4)
				{
					switch(movechoice)
					{
						case 1:
								cout<<"lookiing around the room.";
								break;
						case 2:
								location = "DOOR";
								break;
						case 3:
								location = "AIRVENT";
								break;
						case 4:
								break;						
					}
					break;
				}
				
		}	
		
		
			
}

