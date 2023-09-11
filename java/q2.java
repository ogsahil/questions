import java.util.*;

class q2 {
    public static void main(String[] args) {
        System.out.println("conditionals: ");
        int rs;
        Scanner obj = new Scanner(System.in);
        System.out.println("enter your salary: ");
        int age = obj.nextInt();
        if (age < 15) {
            System.out.println("you are getting avg package!");

        } else if (age < 8) {
            System.out.println("you are getiing normal package!");

        } else if (age < 5) {
            System.out.println("you are getting low package!");

        } else {
            System.out.println("you are losser asshole!");
        }

    }
}