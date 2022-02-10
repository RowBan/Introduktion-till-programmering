import java.util.Scanner;

public class Story {
    public static void main(String[] args) {
        System.out.println("Besvara de följande frågor..");
        String $firstWord;
        String $secondWord;
        String $thirdWord;
        String $fourthWord;
        String $fifthWord;
        String $sixthWord;
        String $seventhWord;

        Scanner input = new Scanner(System.in);
        System.out.print("Vad heter myran? ");
        $firstWord = input.nextLine();
        System.out.print("Vem bor myran med? ");
        $secondWord = input.nextLine();
        System.out.print("Hur många syskon har myran? ");
        $thirdWord = input.nextLine();
        System.out.print("Var i skogen finns myrstacken? ");
        $fourthWord = input.nextLine();
        System.out.print("Vad bär myran och syskonen in till stacken? ");
        $fifthWord = input.nextLine();
        System.out.print("Bär dom något mer till stacken? ");
        $sixthWord = input.nextLine();
        System.out.print("Varför är myran ledig idag? ");
        $seventhWord = input.nextLine();
    }
}
