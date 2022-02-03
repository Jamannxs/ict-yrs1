Manual 
Set up 
 Line 9:  int UnitsTopping[4]={1,1,0,0}
	to setup unit for topping. 
	index 0 is boba.
	index 1 is popping boba.
	index 2 is jelly.
	index 3 is pudding.
Line 12:  int CashInMachine[6]={0,3,3,3,3,3}
	
	***change only index 1-5***
	
	index 1 is bank 100
	index 2 is bank 50
	index 3 is bank 20
	index 4 is coin 10
	index 5 is coin 5
—————————————————————————————————————————————————————————————————
1.choose Menu(input 0-4)
 Menu                                                  M  L  
0:Black tea                                          30 40 
1:Green tea                                          30 40 
2:Thai tea                                           30 40 
3:Passion fruit green tea                            45 55 
4:Taro smoothie tea                                  40 50 

2.choose Flavor(input 0-3)

 Flavor                                
0:Normal                                             +0
1:Milk                                               +5
2:Honey                                              +5
3:Brown sugar                                        +10

3.choose Topping(input 0-3)

 Topping                                
0:Boba                                               +5    (1 units left)
1:Popping Boba                                       +15   (1 units left)
2:Jelly                                              +10   (0 units left)
3:Pudding                                            +10   (0 units left)

	
	>> How many topping do you like(maximum 2) (q to exits): 

	I user don’t want to choose topping user can put 0.

	In case of every topping out of stock the program will show
	
	>> Sorry Topping out of stock
	
	user can’t type anything in this case and program will continue to step 4.

4.ready to pay (‘y’ or ’n’)
	user can input ‘y’ or ’n’ or ‘q’ to go back to menu.
	
5.insert cash
	user can input only positive numbers and 0.
	if money that user input is not enough to pay the program will ask
	
	>>Sorry your payment is not enough, add more?(‘y’ or’n’):

	if user put ‘y’ the program will ask for money again but if ’n’ the program will go back to 	menu.
	
6.show result 
	the program will show
	
	>>Total cash (total cash that user input)
	>>change and banknotes (100,50,20,10,5)
	>>Machine cash (100,50,20,10,5)

	>>Here is your ……………………………tea(up to user input)

7.press any key to continue. . .

	‘q’ will exits the program.
	any key will continue the program.

	
	
	

