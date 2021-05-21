import java.util.Random;
import java.util.Scanner;

public class Rock_scissors_paper_game {

		public static void main(String[] args) {
	        int computer = 0;
	        int user = 0;

		    game_start();
		    user = user_ans();
		    computer = com_ans();
	        arithmetic(user,computer);
	    }

	    private static void arithmetic(int user, int computer) {
	        System.out.println("´ë°á VS!");
	        if (user == computer){
	            System.out.println("\nºñ±è");
	        }
	        else if (user == 1 && computer == 2 || user == 3 && computer == 1 || user == 2 && computer == 3){
	            System.out.println("\n user win1");
	            uwin();
	        }
	        else if (user > computer || user == 1 && computer == 3){
	            System.out.println("\n com win1");
	            cwin();
	        }
	    }

	    private static void cwin() {
	        int users = 0;
	        int computers = 0;
	        System.out.println("\n Computer's turn to attack");
	        users = user_ans();
	        computers = com_ans();
	        arithmeticde(users,computers);
	    }

	    private static void arithmeticde(int users, int computers) {
	        if (users == computers){
	            System.out.println("***Com win***");
	        }
	        else if (users == 1 && computers == 2 || users == 3 && computers == 1 || users == 2 && computers == 3){
	            System.out.println("user attack turn");
	            uwin();
	        }
	        else if (users > computers || users == 1 && computers == 3){
	            System.out.println("com turn");
	            cwin();
	        }
	    }

	    private static void uwin(){
	        int userd = 0;
	        int computerd = 0;
	        System.out.println("\n User's turn to attack");
	        userd = user_ans();
	        computerd = com_ans();
	        arithmeticd(userd,computerd);
	    }

	    private static void arithmeticd(int userd, int computerd) {
	        if (userd == computerd){
	            System.out.println("***User win***");
	        }
	        else if (userd == 1 && computerd == 2 || userd == 3 && computerd == 1 || userd == 2 && computerd == 3){
	            System.out.println("user attack turn");
	            uwin();
	        }
	        else if (userd > computerd || userd == 1 && computerd == 3){
	            System.out.println("com turn");
	            cwin();
	        }
	    }

	    private static int com_ans() {
	        int ands;

	        Random rand = new Random();
	        ands = rand.nextInt(3)+1;

	        if (ands == 1){
	            System.out.println("1 (¹¬)");
	        }
	        else if (ands == 2){
	            System.out.println("2 (Âî)");
	        }
	        else{
	            System.out.println("3 (ºü)");
	        }

	        return ands;
	    }

	    private static int user_ans() {
	        int ans;
	        System.out.println("¹¬ = 1, Âî = 2 , ºü = 3 Áß ÀÔ·ÂÇÏ½Ã¿À.");
	        Scanner scan = new Scanner(System.in);
	        ans = scan.nextInt();
	        return ans;
	    }

	    private static void game_start() {
	        System.out.println("*************************************************");
	        System.out.println("******** Rock paper scissors games **************");
	        System.out.println("*************************************************");
	    }
	}
