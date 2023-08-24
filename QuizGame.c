// Header Files
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

// Defining functions names, function bodies are written at last.
void showRecord();
void resetScore();
void help();
void editScore(float score, char *name);


int main(){ // The main function, execution starts here.
    
    // Defining some variables used.
    float score; // Stores the final score.
    char choice; // Stores the choices made by the user while playing the game.
    char playername[20]; // Stores the name of the player.
    int count,correct; // Some integer variables to store different counts.

    // Main/Home Section , the Starting menu of the game.
    mainHome: // Goto label for mainHome section.
    
    system("cls"); // Clears teh previous screen and displays the next output on new cleared screen.

    //Designing the Main interface of the game;
    printf("\n\n\n\t\t\t\tTHE $MILLION GAME\n");
    printf("\n\t\t\t-------------------------------------\n");
    printf("\n\t\t\t\t     WELCOME ");
    printf("\n\t\t\t\t        to ");
    printf("\n\t\t\t\t     THE GAME \n");
    printf("\n\t\t\t-------------------------------------");
    printf("\n\t\t\t-------------------------------------");
    printf("\n\t\t\t ...!!! BECOME A MILLIONAIRE !!!...");
    printf("\n\t\t\t-------------------------------------");
    printf("\n\t\t\t-------------------------------------\n");
    printf("\n\t\t\t > Press S to start the game");
    printf("\n\t\t\t > Press V to view the highest score");
    printf("\n\t\t\t > Press R to reset score");
    printf("\n\t\t\t > press H for help");
    printf("\n\t\t\t > press Q to quit\n");
    printf("\n\t\t\t-------------------------------------\n\n\n\n\n");
    
    choice = toupper(getch()); // The choice made by the user is converted to Uppercase and stored in the variable "choice" , input is taken using the getch() function. It is a function present in the C libraries. 
    
    switch(choice){ // Switching between the character "choice" entered by the user, to perform differnt operations accordingly.

        case 'V' : showRecord(); // Calling function that shows the highest score till now, which are stored in a file named scores.txt
                   goto mainHome; // After showing the scores, goes back to the Main menu.
        
        case 'H' : help(); // Function that shows the Help tab.
                   getch(); // Inputs the character for further processing.
                   goto mainHome; // Goes back to Main menu.

        case 'R' : resetScore(); // Function that resets the score.
                   getch(); // Inputs the character for further processing.
                   goto mainHome; // Press any character, the game will automaticaly go to the Main menu.

        case 'Q' : exit(1); // Calls quit functions that ends the game and terminates the program. Inbuilt function of C library.

        case 'S' : system("cls"); // Clears the current screen and displays next menu on new screen.
                   
                   printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter Your Name : "); // Asks user to enter name;
                   gets(playername); // Inputs the name of the player in a character array named "playername".

                   system("cls");

                   //Interface before the game
                   printf("\n\n\t\t\t ------------------  Welcome %s To The $Million Game --------------------------",playername);
                   printf("\n\n\n\t\t\t Here are some tips you might wanna know before playing:");
                   printf("\n\t\t\t -------------------------------------------------------------------------\n");
                   printf("\n\t\t\t >> There are 2 rounds in this Quiz Game,\n\t\t\t\tWARMUP ROUND & CHALLANGE ROUND");
                   printf("\n\t\t\t >> In Warmup Round you will be asked a total of 3 questions to test your");
                   printf("\n\t\t\t    general knowledge. You are eligible to play the game if you give atleast 2");
                   printf("\n\t\t\t    right answers, otherwise you can't proceed further to the Challenge Round.");
                   printf("\n\t\t\t >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
                   printf("\n\t\t\t    total of 10 questions. Each right answer will be awarded $100,000!");
                   printf("\n\t\t\t    By this way you can win upto ONE MILLION cash prize!!!!!..........");
                   printf("\n\t\t\t >> You will be given 4 options and you have to press A, B ,C or D for the");
                   printf("\n\t\t\t    right option.");
                   printf("\n\t\t\t >> You will be asked questions continuously, till right answers are given");
                   printf("\n\t\t\t >> If any answer is wrong then, it's Game Over!");
                   printf("\n\t\t\t -------------------------------------------------------------------------");
                   printf("\n\n\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
                   printf("\n\n\t\t\t -------------------------------------------------------------------------");
                   printf("\n\n\t\t\t Press Y to start the game!\n");
                   printf("\t\t\t Press any other key to return to the main menu!\n\n\n\n");

                   if( toupper( getch() ) == 'Y' ){ // If user entered Y, we will continue to the game
                        goto home; // Goto home, which is the start of the game.
                   }
                   else{
                        goto mainHome; // If any other character rather than Y is entered, then program goes to the mainHome interface.
                        system("cls");
                   }

                   home: // Home section, section where game happens

                   system("cls");

                   count=0; // This will count the no . of correct answers from the first WarmUp round.

                   for(int i=1;i<=3;i++){ // Loop to conitnously ask 3 Questions one by one.
                        system("cls");
                        
                        switch(i){ // Here i will represent the number of question, and we will switch between the questions.

                            case 1 : printf("\n\nWhich of the following is a Palindrome number?"); // Asking Q1.
		                             printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234"); // Giving Options to choose from
                                     if( toupper(getch())=='C'){ // If answer correct
                                        printf("\n\n Correct !!!");
                                        count++; // count of correct answers +1;
                                        getch(); // Press any character to move forward
                                        break; // Break the switch statement for i=1;
                                     }
                                     else{
                                        printf("\n\nWrong !! The correct answer is C.23232"); // If answer is wrong
                                        getch();
                                        break;
                                     }
                                    
                            case 2 : printf("\n\nThe country with the highest environmental performance index is..."); // Asking Q2.
		                             printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland"); // Giving Options to choose from
                                     if( toupper(getch())=='C'){ // If answer correct
                                        printf("\n\n Correct !!!");
                                        count++; // count of correct answers +1;
                                        getch(); // Press any character to move forward
                                        break; // Break the switch statement for i=2;
                                     }
                                     else{
                                        printf("\n\nWrong !! The correct answer is C.Switzerland"); // If answer is wrong
                                        getch();
                                        break;
                                     }

                            case 3 : printf("\n\nWhich animal laughs like human being?"); // Asking Q3.
		                             printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee"); // Giving Options to choose from
                                     if( toupper(getch())=='B'){ // If answer correct
                                        printf("\n\n Correct !!!");
                                        count++; // count of correct answers +1;
                                        getch(); // Press any character to move forward
                                        break; // Break the switch statement for i=3;
                                     }
                                     else{
                                        printf("\n\nWrong !! The correct answer is B.Hyena"); // If answer is wrong
                                        getch();
                                        break;
                                     }
                                     
                        }

                   }
                    if(count>=2){ // If count of correct questions >=2 ,eligible for next round, goto test
                        goto test;
                    }
                    else{
                        system("cls");
	                    printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	                    getch();
	                    goto mainHome;
                    }

                   test: // Test section
                   system("cls");
                   printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
                   printf("\n\n\n\n\t!Press any key to Start the Game!");
                   getch();
                   goto game;

                   game: // Game Section, Next round

                    correct=0; // Initialising correct no. of answers = 0

                    for(int i=1;i<=10;i++){ // Looping 10 times to ask 10 questions
                            system("cls");

                            switch(i){ // Switching between number of question from 1 - 10

                                case 1 : printf("\n\nWhat is the National Game of England?");
		                                 printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
                                         if (toupper(getch())=='C'){ // If correct answer
                                            printf("\n\nCorrect!!!");
                                            correct++; // Increase no. of correct questions by 1. 
                                            getch();
                                            break;
                                        }
                                         else{
                                            printf("\n\nWrong!!! The correct answer is C.Cricket");
                                            getch();
                                            goto score; // Goes to score section
                                            break;
                                        }
                                
                                case 2: printf("\n\n\nStudy of Earthquake is called............,");
                                        printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
                                        if (toupper(getch())=='A'){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch();
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is A.Seismology");
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        
                                case 3: printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
                                        printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
                                        if (toupper(getch())=='C'){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch();
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is C.8");
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        
                                case 4: printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
                                        printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
                                        if (toupper(getch())=='A'){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch();
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is A.Faraday");
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        
                                case 5: printf("\n\n\nIn what unit is electric power measured?");
                                        printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
                                        if (toupper(getch())=='B'){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch(); 
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is B.Power");
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        
                                case 6: printf("\n\n\nWhich element is found in Vitamin B12?");
                                        printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
                                        if (toupper(getch())=='B' ){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch();
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is B.Cobalt");
                                            goto score;
                                            getch();
                                            break;
                                        }

                                        
                                case 7: printf("\n\n\nWhat is the National Name of Japan?");
                                        printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
                                        if (toupper(getch())=='D'){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch();
                                            break;
                                            }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is D.Nippon");
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        
                                case 8: printf("\n\n\nHow many times a piece of paper can be folded at the most?");
                                        printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
                                        if (toupper(getch())=='B'){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch(); 
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is B.7");
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        
                                case 9: printf("\n\n\nWhat is the capital of Denmark?");
                                        printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
                                        if (toupper(getch())=='A'){
                                            printf("\n\nCorrect!!!");
                                            correct++; 
                                            getch();
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is A.Copenhagen");
                                            getch();
                                            goto score;
                                            break;
                                        }

                                        
                                case 10:printf("\n\n\nWhich is the longest River in the world?");
                                        printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
                                        if (toupper(getch())=='A'){
                                            printf("\n\nCorrect!!!");
                                            correct++;
                                            getch(); 
                                            break;
                                        }
                                        else{
                                            printf("\n\nWrong!!! The correct answer is A.Nile");
                                            getch();
                                            goto score;
                                            break;
                                        }

                            }
                    }

                    score: // Score Section, Prepares scores and distribute prices

                    system("cls");
                    score = (float) (correct*100000); // $1,00,000.00 for every correct question 
                    if( score > 0.00 && score < 1000000){
                        printf("\n\n\t\t**************** CONGRATULATION *****************");
	                    printf("\n\t You won $%.2f",score);
                        goto go;
                    }
                    else if(score == 1000000.00){ // All answers correct, Millionaire !!!
                        printf("\n\n\n \t\t**************** CONGRATULATION ****************");
                        printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
                        printf("\n\t\t You won $%.2f",score);
                        printf("\t\t Thank You!!");
                    }
                    else{ // Didn't win anything
                        printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
                        printf("\n\t\t Thanks for your participation");
                        printf("\n\t\t TRY AGAIN");
                        goto go;
                    }

                    go: // Go Section
                    
                        printf("\n\n Press Y if you want to play next game"); // Asking for a new game
                        printf("Press any key if you want to go main menu");
                        if( toupper(getch())=='Y'){ // If yes then move to new game
                            goto home;
                        }
                        else{ // Else stores the data to file and go to the mainHome section 
                            editScore(score,playername);
                            goto mainHome;
                        }

    }
}

void showRecord(){
    system("cls");

    char name[20]; // Defining variables to store name of player and highest score
    float score;
    FILE *f; // Defining file pointer
    f=fopen("score.txt","r"); //Opening score.txt file in read mode to read the highest score
    fscanf(f,"%s%f",&name,&score); //Scanning player name and highest score form file
    if(score<1){ // If no high score
        printf("\n\n\t\t*************************************************************");
	    printf("\n\n\t\t\t\t   No Highest Score");
	    printf("\n\n\t\t*************************************************************");
    
    }
    else{
        printf("\n\n\t\t*************************************************************");
	    printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,score);
	    printf("\n\n\t\t*************************************************************");
    }
    fclose(f);
    getch();
}

void resetScore(){
    system("cls");
    FILE *f;
    f=fopen("score.txt","w"); // Opening file in w mode, as it will clear the file and then close it as we are not writing anything to the file.
    fclose(f);
    printf("\n\n\t\tScore Reset!");
}

void help(){ // Help function that shows the Help Interface.
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");

}

void editScore(float score, char playername[20]){ // Function that updates the highest score into the file if a score highest then the previous highest score is scored.

    system("cls");
    float highestScore;
    char name[20];
    FILE *f;
    f=fopen("score.txt","r"); // Opening file to check current highest score
    fscanf(f,"%s%f",&name,&highestScore);
    if(score >= highestScore){ //If current score is greater than the highest score, we update the score by opening the file and writing the score.
        fclose(f);
        f=fopen("score.txt","w");
        fprintf(f,"%s\n%0.2f",playername,score);
        fclose(f);
    }

}

