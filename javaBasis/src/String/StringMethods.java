package String;

public class StringMethods {
    public static void main(String[] args) {
        String str = "Sans";
        System.out.println(str.length());
        System.out.println("At 1 index" + str.charAt(1));
        System.out.println("SubString : " + str.substring(0, 2));
        System.out.println(str.toUpperCase());
        System.out.println(str.toLowerCase());
        String str2 = "The Great Love in the Sky";
        System.out.println(str2.contains(str));
        System.out.print(str2.trim());
        String[] words = str2.split(" ");
        for(String word: words){
            System.out.println(word);
        }
    }
}
