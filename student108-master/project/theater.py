#Function to print the seating chart
def PrintSeatingChart(SeatingChart, RowNum, ColNum):
    print(" "),
    for i in range(0,ColNum/10):
        print("1 2 3 4 5 6 7 8 9 10"),
    print('\n')
    for i in range(0,ColNum):
        print(i+1),
        for j in range (0,RowNum):
            PlaceHolder=SeatingChart[i][j]
            if(PlaceHolder==0):
                print('#'),
            elif(PlaceHolder==1):
                print('*'),
        print('\n')
#Main Function that runs the program
def RunTheater():
    #Checking to see if there is a file 
    try:
        f=open("theaterInfo.txt","r")
        TempRowNum=f.readline()
        TempColNum=f.readline()
        RowNum=int(TempRowNum)
        ColNum=int(TempColNum)
        SeatingChart=[[0 for i in range(ColNum)]for j in range(RowNum)]
        for i in range(0,RowNum):
            for j in range(0,ColNum):
                TempNum=f.readline()
                InputNum=int(TempNum)
                if (InputNum==0):
                    SeatingChart [i][j]=0
                elif (InputNum==1):
                    SeatingChart [i][j]=1
    except IOError:
        #Getting information if there isn't one
        print("File could not be found. You must enter information to start a new theater.")
        print("Please Enter a non 0 value for Rows and Columns with a max of 50 x 50")
        RowNum=input("Rows: ")
        ColNum=input("Columns: ")
        if((ColNum<=0)|(RowNum<=0)):
            print("You have entered and invalid number setting it to the default of 20x20")
            RowNum=20
            ColNum=20
        f1=open("theaterInfo.txt","w")
        f1.write(str(RowNum))
        f1.write('\n')
        f1.write(str(ColNum))
        f1.write('\n')
        f1.close()
        SeatingChart=[[0 for i in range(ColNum)]for j in range(RowNum)]
        for y in range(0,RowNum):
            for u in range(0,ColNum):
                SeatingChart [y][u]=0
    #starting the main program
    print("Hello there welcome to the theater")
    RunTheater = True
    while RunTheater==True:
        #Menu Run on a loop
        print("Your options are: \n 1. Print the Seating Chart \n 2. Buy Tickets.")
        print(" 3. See the Statistics \n 4. Reset Program \n 5. Exit the Program")
        print("What would you like to do?")
        try:
            Choice= input("Input your choice please ")
        except NameError:
            print("You have enter something invalid please try again.")
        if Choice == 1:
            print("You have chosen to see the seating chart.")
            PrintSeatingChart(SeatingChart,RowNum,ColNum)
        elif Choice == 2:
            print("You have chosen to buy tickets.")
            BuyTickets(SeatingChart,RowNum,ColNum)
        elif Choice == 3:
            print("You have chosen to see the statistics.")
            PrintTheaterStats(SeatingChart, RowNum,ColNum)
        elif Choice== 4:
            print("You have chosen to reset the program.")
            #Found this code on the internet
            import os 
            os.remove("theaterInfo.txt")
            RunTheater=False
        elif Choice==5:
            print("You have chose to exit the program. Goodbye.")
            f=open("theaterInfo.txt","w")
            f.write(str(RowNum))
            f.write('\n')
            f.write(str(ColNum))
            f.write('\n')
            for i in range(0,RowNum):
                for j in range(0, ColNum):
                    TempNum=SeatingChart [i][j]
                    if(TempNum==0):
                        f.write(str(0))
                        f.write('\n')
                    else:
                        f.write(str(1))
                        f.write('\n')
            RunTheater=False
#Function to Buy some tickets
def BuyTickets(SeatingChart,RowNum,ColNum):
    CheckingForValidInput=False
    while CheckingForValidInput== False:
        try:
            TicketNum=input("How many tickets would you like to buy? (Has to be greater than 0) ")
        except ValueError:
            print("You have entered an invalid input. Please try again.")
        if TicketNum<=0:
             print("You have entered invalid input. Please try again.")
        else:
            CheckingForValidInput= True
    print("The open seats are marked with #.")
    PrintSeatingChart(SeatingChart,RowNum,ColNum)
    i=TicketNum
    while i!=0:
        print("What seat would you like?")
        try:
            RowChoice=input("Row: ")
            ColChoice=input("Column: ")
        except NameError:
            print("You have entered something invalid please try again.")
        try:
            TempNum=SeatingChart[RowChoice-1][ColChoice-1]
        except IndexError:
            print("You have entered something invalid please try again.")
        if(TempNum==1):
            print("I am sorry you have chosen a seat that is taken. Please try again.")
        elif(TempNum==0):
            print("You have chosen the seat ",RowChoice," ",ColChoice)
            SeatingChart[RowChoice][ColChoice]=1
            i-=1
#Function to see the theater stats
def PrintTheaterStats(SeatingChart, RowNum,ColNum):
    NumberOfSeats=RowNum*ColNum
    TicketNum=0
    for i in range(0,RowNum):
        for j in range(0,ColNum):
            if(SeatingChart[i][j]==1):
                TicketNum +=1
    print("Number of Rows: "),
    print(RowNum)
    print("Number of Columns: "),
    print(ColNum)
    print("Number of Tickets Sold: "),
    print(TicketNum)
    print("Number of Seats Available: "),
    print(NumberOfSeats-TicketNum)
    print("According to google the average ticket price is $9.11 so the total revenue is: $"),
    print(TicketNum*9.11)
RunTheater()


