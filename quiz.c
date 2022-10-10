#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score=0;
	char answer;
	char name[30];
	int enroll;
	
	
puts ("--------------------------------------------------------------------------------------------------")	;
puts("       Multiple Choice Question Examination");
puts("            Total Marks = 25*2 = 50");
puts("              No. of Question = 25");
puts("---------------------------------------------------------------------------------------------------\n\n");

printf("Candidate Name: ");
gets(name);
printf("Question no:1");
puts("\n1. Who is known as the father of computer?");
puts(" A. Vint Cerf\n B. Tim Berner Lee\n C. Charles Babbage\n D. Denis Riche");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}	
printf("Question no:2");
gets(name);
puts("\n2. How many keywords in C?");
puts(" A. 0\n B. 32\n C. 48\n D. 255");
printf(" Ans: "); 
scanf("%c",&answer);
if((answer=='B')|| (answer=='b')){
	score=score+2;
}
printf("Question no:3");
gets (name);
puts("\n3. The brain of computer system is?");
puts(" A. ALU\n B. Memory\n C. CPU\n D. Control Unit");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}
printf("Question no:4");
gets(name);
puts("\n4. WWW stands for?");
puts(" A. World Whole Web\n B. Wide World Web\n C. Web World Wide\n D. World Wide Web");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='D')|| (answer=='d')){
	score=score+2;
}
printf("Questionn no:5");
gets(name);
puts("\n5. Who is the father of C language?");
puts(" A. Bjarne stroustrup\n B. Dennis ritchie\n C. James A.gosling\n D. Dr.e.f codd");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='B')|| (answer=='b')){
	score=score+2;
}
printf("Question no:6");
gets(name);
puts("\n6. Whiceh one is not an input device?");
puts(" A. Speaker\n B. keyboard\n C. Mouse\n D. Scanner");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='a')){
	score=score+2;
}
printf("Question no:7");
gets(name);
puts("\n7. Where is RAM located?");
puts(" A. Expansion Board\n B. External Drive\n C. Mother Board\n D. All of above");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}
printf("Question no:8");
gets(name);
puts("\n8. Full form of URL is?");
puts(" A. Uniform Resource Locator\n B. Uniform Resource Link\n C. Uniform Registered Link\n D. Unified Resource Link");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='a')){
	score=score+2;
}
printf("Question no:9");
gets(name);
puts("\n9. In which of the following form data is stored in computer?");
puts(" A. Decimal\n B. Binary\n C. Hexadecimal\n D. Octal");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='B')|| (answer=='b')){
	score=score+2;
}
printf("Question no:10");
gets(name);
puts("\n10. Verification is process of?");
puts(" A. Access\n B. Login\n C. Logout\n D. Authentication");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='D')|| (answer=='d')){
	score=score+2;
}
printf("Question no:11");
gets(name);
puts("\n11. What is LINUX?");
puts(" A. Malware\n B. Operating System\n C. Application Program\n D. Firmware");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='B')|| (answer=='b')){
	score=score+2;
}
printf("Question no:12");
gets(name);
puts("\n12. Whice is most common language used in web desiging?");
puts(" A. C\n B. C++\n C. PHP\n D. HTML");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='D')|| (answer=='d')){
	score=score+2;
}
printf("Question no:13");
gets(name);
puts("\n13. Which among the following is commonly used language in Android applications?");
puts(" A. C\n B. PHP\n C. C++\n D. Java");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='D')|| (answer=='d')){
	score=score+2;
}
printf("Question no:14");
gets(name);
puts("\n14. Where are saved files stored in computers?");
puts(" A. RAM\n B. Hard disk\n C. Cache\n D. Any of above");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='B')|| (answer=='b')){
	score=score+2;
}
printf("Question no:15");
gets(name);
puts("\n15. What is the ASCII value of space character?");
puts(" A. 32\n B. 0\n C. 65\n D. 255");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='a')){
	score=score+2;
}
printf("Question no:16");
gets(name);
puts("\n16. Which of the following function is user defined?");
puts(" A. printf\n B. scanf\n C. main\n D. none");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}
printf("Question no:17");
gets(name);
puts("\n17. How many types of loop in C");
puts(" A. one\n B. two\n C. three\n D. none");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}
printf("Question no:18");
gets(name);
puts("\n18. Void occupy how many bytes in memory?");
puts(" A. 0\n B. 1\n C. 2\n D. 4");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='a')){
	score=score+2;
}
printf("Question no:19");
gets(name);
puts("\n19. What is the default value of local variable?");
puts(" A. 0\n B. 1\n C. garbage\n D. null");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}
printf("Question no:20");
gets(name);
puts("\n20. What is the default value of static variable?");
puts(" A. 0\n B. null\n C. garbage\n D. none");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='a')){
	score=score+2;
}
printf("Question no:21");
gets(name);
puts("\n21. Which of the following will not return a value?");
puts(" A. void\n B. int\n C. null\n D. char");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='a')){
	score=score+2;
}
printf("Question no:22");
gets(name);
puts("\n22. Which of the following is not a valid storage class?");
puts(" A. auto\n B. extern\n C. dynamic\n D. register");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}
printf("Question no:23");
gets(name);
puts("\n23. How many ways to calling of function in C language?");
puts(" A. two\n B. three\n C. one\n D. four");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='c')){
	score=score+2;
}
printf("Question no:24");
gets(name);
puts("\n24. Is it possible to run program withoutmain()?");
puts(" A. Yes\n B. No\n C. error\n D. Cant say?");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='A')|| (answer=='a')){
	score=score+2;
}
printf("Question no:25");
gets(name);
puts("\n25. Which is only function all C programs must contain?");
puts(" A. system()\n B. start()\n C. main()\n D. getch()");
printf(" Ans: ");
scanf("%c",&answer);
if((answer=='C')|| (answer=='c')){
	score=score+2;
}


puts("\n---------------------------------------------------------------");
puts("    ---------------------------------------------\n");
printf( "  %s scored %d out of 50\n",name,score);
puts("\n    ---------------------------------------------------");
puts("------------------------------------------------------------------\n\n");


puts("Enter to see your Grade");
getch(name);
puts(" If number 46-50 Grade=A+\n If number 40-45 Grade=A\n If number 36-40 Grade=B+\n If number 30-35 Grade=B\n If number 26-30 Grade=C+\n If number 20-25 Grade=C\n If number 16-20 Grade=D+\n If number 10-15 Grade=D\n If number 1-9 Fail");

puts("Please enter for answersheet");
getch(name);
puts("1.c  2.b  3.c  4.d  5.b  6.a  7.c   8.a  9.b  10.d  11.b  12.d  13.d  14.b  15.a  16.c  17.c  18.a  19.c  20.a  21.a  22.c  23.a  24.a  25.c");
}


