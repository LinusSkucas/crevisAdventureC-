#include "utilites.h"
#include "looks.h"
#include <windows.h>
#include <mmsystem.h>
#include "envping.h"
#include "proxyCard.h"
using namespace std;


// Y COMMAND IS NOT WORKING!



string bag[10];

room lookRoom;
cardReader read;
look checkChan;

int main()
{
	loading();
	//connect();
	cout << "~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~o~" << endl;
	cout << "~SMALL CREVICE ADVENTURE~~~~~~~~~~~~~_________~~~~~~~~~~~~~~~~~" << endl;
	cout << "~VERSION BETA~~~~~~~~~~~~~~~~~~~~~~~/~~~~~~~~~\~~~~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|^^^^^^^^~|~~~~~~~~~~~~~~~~" << endl;
	cout << "~2017~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||        |~\~~~~~~~~~~~~~~" << endl;
	cout << "~C++ VERSION~~~~~~~~~~~~~~~~~~~~~~/~|       |~|~~~~~~~~~~~~~~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "TRANSLATED INTO C++ BY LINUS SKUCAS~o~o~o~o~o~o~o~o~o~o~o~o~o~o" << endl;
	// start game
	print("\n");
	// left or right
	print("blimey! you have fallen into a small crevice! you see that the crevice spits into a left and right passage.");
	char choise = getInput("Type L to go left and R to go right.");
	if (choise == 'L')
	{
		print("you enter the left cave. the walls are slightly damp and there are numerous stalactites on the ceiling.");
		print("there is also a small pool in the middle of the room. the pool feeds to an underground river.");
		print("there is a small boat at the edge of the pool.");
		print("there is also another passage leading off to the left.");
		print("do you get in the boat, swim down the river, or take the passage?");
		choise = getInput("W to walk, B for boat, S to swim");
		if (choise == 'S')
		{
			print("you dive into the water, which is pleasantly warm, and swim into darkness.");
			print("suddenly, you are devoured by a hungry shark!");
			print("GAME OVER!! :(");
			PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
			system("pause");
			return 0;
		}

		else if (choise == 'B')
		{
			print("you walk to the boat and hop in. the boat starts drifting into darkness.");
			print("you come into a large cavern containing many stalacitites.");
			print("there are diamonds here!");
			print("there is also a large dragon here!");
			print("the dragon quickly toasts you to a crisp!");
			print("GAME OVER!! YOU LOSE!! :(");
			PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
			system("pause");
			return 0;
		}

		else if (choise == 'W')
		{
			print("you walk to the passage and start down it.");
			print("you come into a beautiful cavern containing a shimmering waterfall.");
			print("there is a large chasm at the far end of the room.");
			print("there is a rope bridge across the chasm at the far end of the cavern.");
			print("there is a skinny stone bridge leading across the chasm, much closer to you than the rope bridge, which looks pretty unsafe.");
			print("there is a river leading away from the pool under the waterfall, which leads into a dark passage.");
			print("do you take the rope bridge, the stone bridge, or the river tunnel?");
			choise = getInput("put R for the rope bridge, S for the stone, or T for the river tunnel.");
			if (choise == 'R')
			{
				print("you start across the rope bridge. it sways in the slight breeze blowing up from the chasm.");
				print("afler several minutes of careful crawling, you reach the other side of the chasm.");
				print("you see a passage leading up, a passage leading down, and a passage going straight.");
				print("do you take the upper passage, the lower passage, or the middle passage?");
				choise = getInput("U for up, L for low, and M for middle.");
				if (choise == 'U')
				{
					// continue
					system("CLS");
					print("Congrats! You survived level 1!");
					system("pause");
					print("Starting Level 2");
					loading();

					// Level 2
					print("In level 2 you will be able to use the look command.\n After you use the look command then you will be directed to the next Good path.");
					print("To use the look command type Y");
					print("\n\nYou come out above ground. There is a slight wind coming from the west.");
					print("There are 3 paths in front of you. One going to the left one going to the middle and one going to the right.");
					print("The one going to the right leads to a river. The middle one goes back down in the earth.\n The left one goes to a grassy field.");
					choise = getInput("Type L to go left M for the middle and R to go right. You cannot use the look command (Y)");
					if (choise == 'L')
					{
						// Die of ticks
						print("You travel on the left trail into the grassy field.");
						print("You then see a tick crawling up your leg and it bites you.");
						print("You then die :(");
						// play sad sound
						PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
					}
					else if (choise == 'M')
					{
						// suffocate
						print("You travel down into the ground again");
						print("You then suffocate and die :(");
						PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
					}
					else if (choise == 'R')
					{
						// get food and matches for lumberjack
						print("You travel on the left path towards the water");
						print("Suddenly the path splits into 2 paths one going to the water (right) and one going to the woods (left)");
						print("HINT: You want wood from a lumberjack.");
						print("Type L to go left and R to go right");
						choise = lookRoom.space(1, 'L');

						
						//cout << choise << endl;
						if (choise == 'R')
						{
							// die
							print("You travel to the river. On the way you get very thirsty.");
							print("So when you get to the river you take a drink. Saddly the water has cholera you die :(");
							PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
							system("pause");
							return 1;
						}
						// good
						else if (choise == 'L')
						{
							system("CLS");
							print("You venture into the forest. A few miles in the path splits.");
							print("It is sunny outside");
							print("The right one goes to a metal dome, the left one goes into the woods. There is nothing to look at.");
							choise = getInput("R to go right L to go left");
							if (choise == 'R')
							{
								print("You go inside the metal dome. Inside you mealt in the heat because the dome has heated so much. You die :(");
								PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
								system("pause");
								return 0;
							}
							else if (choise == 'L')
							{
								print("A few steps in a storm starts. You run for shelter, after a mile of running you come across a lumberjacks cablin.");
								print("You go inside and find a nice place to sleep. After a few hours the lumberjack comes back.");
								print("He wants food and matches for exchange of you sleeping in his house.");
								if (lookRoom.lookCommand.keyLook(1) == false)
								{
									Sleep(3000);
									print("");
									print("Since you don't have food or matches the lumber jack choppes your head of with his ax. You die :(");
									PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
									system("pause");
									return 0;
								}
								else if (lookRoom.lookCommand.keyLook(1) == true)
								{
									// get things for lumber jack
									print("The lumberjack thanks you for the food");
									print("All there is to look at is random pieces of grass");
									choise = getInput("He recommends to go the metal dome (M) or right (R)");
									if (choise == 'M')
									{
										// die
										print("You over heat in the metal dome and die.");
										PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
										system("pause");
										return 0;
									}
									else if (choise == 'R')
									{
										print("You see a tree in front of you");
										print("This is what it looks like.");
										print("");
										print("       _-_");
										print("    /~~   ~~\"");
										print(" /~~         ~~\"");
										print("{               }");
										print(" \  _-     -_  /");
										print("   ~  \\ //  ~");
										print("_- -   | | _- _");
										print("  _ -  | |   -_");
										print("      // \\\"");
										print("\n\n");

										print("You decide to climb the tree");
										print("It is currently night.");
										Sleep(563);
										print("On your way up you start getting really hungrey.");
										Sleep(306);
										print("You reach a mid point in the tree.\nWhen You look out you see lots of lights in the west.");
										choise = getInput("You can climb [D]own or continure climbing [U]p");
										if (choise == 'U')
										{
											print("You decide to climb up.");
											print("Suddenly, the banch you are standing on brakes!\nYou then die :(");
											PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
										}
										else if (choise == 'D')
										{
											// Live
											print("You climb down the tree.");
											print("You decide because you are really hungrey, you want to go to the lights");
											print("Do you want to [W]alk or [R]un");
											choise = lookRoom.space(2, 'W');
											if (choise == 'R')
											{
												print("You start running.");
												print("Saddly, you get really tired really fast so you lay down and go to sleep.");
												Sleep(1000);
												print("...");
												Sleep(2000);
												print("In the morning you find big rats eating your brain. you die :(");
											}
											else if (choise == 'W')
											{
												print("You decide to walk to the place with lights.");
												print("It takes about 5 hours of walking to get there.");
												Sleep(1000);
												print("You come to a food factory. Saddly a gate with a proximity card reader is there and the gate is locked.");
												print("To make matters worse, the lights are out - meaning there is a power outage.");
												print("You somehow need to power the card reader. Then power the motor.");
												Sleep(3200);
												print("\n\n");
												print("HINT: You can now use the connect command prompt to open it type Z.");
												choise = getInput("Z to open connect prompt and W to walk through gate");
												if (choise == 'Z')
												{
													while (read.lookS1('1') == false)
													{
														connect();
													}
													choise = getInput("Do you want to [S]can your card or s[W]ipe your card");
													if (choise == 'W')
													{
														print("You try to swipe your card. Saddly, it is a proimity card. When you were doing that a guard saw you.\nNow he is dragging you through a meat grinder.\nGame Over!");
													}
													else if (choise == 'S')
													{
														// Auth for 3 min. to start motor.
														print("To be continued...");
													}
												}
												else if (choise == 'W')
												{
													print("You try walking through the gate.");
													print("Saddly an alarm on a battery sounds and a security guard comes out,\ndrags you inside, and puts you through a meat grinder\nGame over :(");
													system("pause");
													return 0;
												}
												else
												{
													print("You need to connect things next time. Stopping game...");
													system("pause");
													return 0;
												}
											}
										}
									}
								}
							}
						}

					}

				}
				else if (choise == 'L')
				{
					// die
					print("You climb down the latter to darkness");
					print("You climb down so low you melt.");
					PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
					system("pause");
					return 0;
				}
				else if (choise == 'M')
				{
					// die
					print("You choose the middle path.");
					print("You die of hunger");
					PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
					system("pause");
					return 0;
				}
			}
			else if (choise == 'S')
			{
				print("you start walking across the stone bridge.");
				print("you see a glow deep in the chasm, lighting the sides of the walls.");
				print("you hear drumbeats deep, deep down in the chasm.");
				print("a shadowy figure appears at the far end of the bridge.");
				print("congradulations! you have found a balrog!!");
				print("the balrog instantly smashes you to pieces with his fire whip! you have died!");
				PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
				system("pause");
				return 0;
			}

			else if (choise == 'T')
			{
				print("you start down the tunnel, which begins to slope up.");
				print("you find that your path is blocked by a large snake with many heads! the snake quickly devours you!");
				PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
				system("pause");
				return 0;
			}


		}

	}
	else if (choise == 'R')
	{
		system("CLS");
		print("you walk into the right passage. it begins to slope downward.");
		print("you see a rope ladder leading down into a dark pit.");
		print("there is also a passage leading to the left.");
		choise = getInput("put C to climb or w to keep walking");
		if (choise == 'C')
		{
			print("You climb down the latter to darkness");
			print("You climb down so low you melt.");
			PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
			system("pause");
			return 0;
		}
		else if (choise == 'w')

			print("You keep walking");
		print("congrats! you found a wizard");
		Sleep(1000);
		print("The wizard wants gold, since you don't have any he kills you.");
		PlaySound(TEXT("tombone.wav"), NULL, SND_FILENAME);
		system("pause");
		return 0;

	}

	system("pause");
	return 0;

}