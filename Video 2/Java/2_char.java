
public class Main {
    public static void main(String[] args) {
        // Wrong (these would cause errors):
        // char ch = "T";      // Double quotes are for strings
        // char name = "Tirth"; // Too many characters for 'char'
        // char name = 'Tirth'; // Still too many characters

        // Right
        char ch = 'A';  // single character

        int ascii = ch; // Get ASCII value of 'A'

        System.out.println(ch);  // Output: A

        ascii = ascii + 32; // Convert to lowercase

        ch = (char) ascii;  // Convert int back to char

        System.out.println(ch);  // Output: a
    }
}
