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
        System.out.print("Invid vad ligger myrstacken? ");
        $fourthWord = input.nextLine();
        System.out.print("Vad bär myran och syskonen in till stacken? ");
        $fifthWord = input.nextLine();
        System.out.print("Bär dom något mer till stacken? ");
        $sixthWord = input.nextLine();
        System.out.print("Myran är ledig på grund av en helgdag, vilken? ");
        $seventhWord = input.nextLine();

        System.out.println("Det var en gång en liten, liten myra som bodde med sin "
                + $secondWord + " och sina " + $thirdWord + " syskon i en myrstack, vid en stor "
                + $fourthWord + " i skogen. Den lilla myran hette " + $firstWord + ". För det mesta brukade "
                + $firstWord + " och hans syskon arbeta med att bära in " + $fifthWord + " och " + $sixthWord
                + " till stacken, men idag var det " + $seventhWord + " så därför var " + $firstWord + " ledig.");
    }
}
