import java.util.Random;

public class RandomNumber {
    public static void main(String[] args) {
        int n = 3; // change this to generate datasets of different sizes
        Random rand = new Random();
        for (int i = 0; i < n; i++) {
            System.out.println(rand.nextInt(10000)); // prints a random integer between 0 and 100
        }
    }
}
