import javax.swing.*;

public class Testclass {
    public static void main(String[] args) {
        Course one = new Course();
        one.printInfo();
        one.setName("Set new coursename");
        one.setCode("Set new code");
        one.setPoint("Set new coursepoints");
        one.setDescription("Set new description");
        one.printInfo();

        Course two = new Course();
        String inputName = JOptionPane.showInputDialog("Input coursename");
        two.setName(inputName);
        String inputCode = JOptionPane.showInputDialog("Input coursecode");
        two.setCode(inputCode);
        String inputPoint = JOptionPane.showInputDialog("Input coursepoints");
        two.setPoint(inputPoint);
        String inputDesc = JOptionPane.showInputDialog("Input a desciption of the course");
        two.setDescription(inputDesc);
        two.printInfo();
    }
}