# CPP-Practice-1

C++ practice - week 2 -

• All questions must be answered in C++ language.
• All questions must be answered according to the instructions detailed in each question.
• Write a Main file for everything, and the functions for each class in a separate file in CPP.
• Any input that the user enters can be assumed to be correct.
• You can choose how you want to perform the exercise - Default CTR or Parameter CTR.
(I preferred Default because then you can practice writing functions in CPP files more).
• The program must be written as an interactive code that allows the user to progress through the stages and choose what to do at each stage according to their wishes (an optional template is offered in Main).


1. Write a Main program that will allow the user to perform the following steps, according to the order -
1.1 - Entering the name of the race (one word), the location of the race (one word), and the number of participants in the race.
1.2 - Entering data for all drivers in the race.
1.3 - Printing all the data of the drivers participating in the race.
1.4 - Removal of a driver from the list of participants in the race according to the selection of his number in the lineup.
1.5 - Starting a race and running it. The order of arrival of the competitors and the winner will be printed and determined according to their race strength.

2. Write the Driver class, which will contain –
2.1 - Driver's name (one word).
2.2 - How many years has he been driving?
2.3- His age.
2.4- What type of car does he have (Audi, BMW, Mercedes) - (defined in ENUM in advance).
2.5 - Racing power ( [vehicle type * years he drives ] * [how many years he drives - his age] )

3. Write the Driver class methods –
3.1 - Initialization: a method that initializes all the data so that it can be worked with.
3.2 - Insertion: A method that allows inserting data after the initialization.
3.3 – A method that prints the entered driver data.

4. Write the Race class which will contain –
4.1 – Name of the race.
4.2 - The place where it takes place.
4.3 - The number of participants and their data (in an array that will be dynamically assigned).

5. Write the Race class methods –
5.1 - Initialization: the function will initialize all the data so that it can be worked with.
5.2 - Input: a method that allows data to be entered freely after the initialization.
5.3 - Removal: a method that allows the removal of a driver from the race after his entry.
5.4 - Race: A method that will calculate the order of arrival of the competitors in the race according to the order of their race strength (highest first) and print the order of arrival at the end of the race.
5.5 - Release: release of all data after the end of the race.
