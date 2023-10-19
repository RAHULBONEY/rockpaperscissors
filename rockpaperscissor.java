import java.util.Random;
import java.util.*; 

class game {
    public static void main(String[] args) {
        System.out.println("Lets play a game of rock paper scissors with the computer\n");
        System.out.println("For ROCK choose 1" );
        System.out.println("For SCISSORS choose 2 " );
        System.out.println("For PAPER choose 3");
        Scanner sc= new Scanner(System.in);    
        System.out.print("Enter your choice ");  
        int choice= sc.nextInt(); 
        
         
          switch(choice){    
        case 1:    
        System.out.println("\nYou chose ROCK " );    
        break;  
        case 2:    
        System.out.println("\nYou chose SCISSORS" );     
        break;
        case 3:    
        System.out.println("\nYou chose PAPER" );     
        break; 
    
        default:  System.out.println("Wrong choice entered" );     
       
} 
        int min = 1; // Minimum value of the range (inclusive)
        int max = 3; // Maximum value of the range (inclusive)
        Random random = new Random();

        int randomNumber = random.nextInt((max - min) + 1) + min;

      //  System.out.println("Computer chooses" + randomNumber);
        
        switch(randomNumber){    
        case 1:    
        System.out.println("\nComputer chose ROCK" );    
        break;  
        case 2:    
        System.out.println("\nComputer chose SCISSORS " );     
        break;
        case 3:    
        System.out.println("\nComputer chose PAPER " );     
        break; 
    
        default:  System.out.println("Wrong choice entered" );     
       
} 
String result = "";
if ( choice ==  randomNumber){
result = "Its a tie";
}
else if (( choice == 1 &&  randomNumber == 2)||
        ( choice == 3 &&  randomNumber == 1)||
        ( choice == 2 &&  randomNumber == 3)){
            result = "You win";
        }
        else if
        (( choice == 2 &&  randomNumber == 1)||
        ( choice == 1 &&  randomNumber == 3)||
        ( choice == 3 &&  randomNumber == 2))
        {   
            result = "Computer wins";
        }
       System.out.println(result ); 
      
    }
}