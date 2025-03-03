import java.util.Scanner;
import java.text.DecimalFormat;

public class UnitConverter {

    public static void unitConverter() {
        Scanner scanner = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("0.00");

        int choice;
        double value;
        double INRtoUSDfctr = 0.011;
        double INRtoJPYfctr = 1.73;
        double INRtoEURfctr = 0.011;
        double KGtoLBfctr = 2.204;
        double LBtoKGfctr = 0.453;

        System.out.println("Unit Converter");
        System.out.println("1. Currency");
        System.out.println("2. Temperature");
        System.out.println("3. Mass");
        System.out.print("Enter your choice: ");
        choice = scanner.nextInt();

        switch (choice) {
            case 1:
                System.out.println("Currency Converter");
                System.out.println("1. INR to USD");
                System.out.println("2. INR to JPY");
                System.out.println("3. INR to EUR");
                System.out.print("Enter your choice: ");
                choice = scanner.nextInt();

                switch (choice) {
                    case 1:
                        System.out.print("Enter INR value: ");
                        value = scanner.nextDouble();
                        System.out.println(df.format(value) + " INR = " + df.format(value * INRtoUSDfctr) + " USD");
                        break;
                    case 2:
                        System.out.print("Enter INR value: ");
                        value = scanner.nextDouble();
                        System.out.println(df.format(value) + " INR = " + df.format(value * INRtoJPYfctr) + " JPY");
                        break;
                    case 3:
                        System.out.print("Enter INR value: ");
                        value = scanner.nextDouble();
                        System.out.println(df.format(value) + " INR = " + df.format(value * INRtoEURfctr) + " EUR");
                        break;
                    default:
                        System.out.println("Invalid choice!");
                }
                break;
            case 2:
                System.out.println("Temperature Converter");
                System.out.println("1. Celsius to Fahrenheit");
                System.out.println("2. Fahrenheit to Celsius");
                System.out.print("Enter your choice: ");
                choice = scanner.nextInt();

                switch (choice) {
                    case 1:
                        System.out.print("Enter Celsius value: ");
                        value = scanner.nextDouble();
                        System.out.println(df.format(value) + " Celsius = " + df.format((value * 9 / 5) + 32) + " Fahrenheit");
                        break;
                    case 2:
                        System.out.print("Enter Fahrenheit value: ");
                        value = scanner.nextDouble();
                        System.out.println(df.format(value) + " Fahrenheit = " + df.format((value - 32) * 5 / 9) + " Celsius");
                        break;
                    default:
                        System.out.println("Invalid choice!");
                }
                break;
            case 3:
                System.out.println("Mass Converter");
                System.out.println("1. Kilograms to Pounds");
                System.out.println("2. Pounds to Kilograms");
                System.out.print("Enter your choice: ");
                choice = scanner.nextInt();

                switch (choice) {
                    case 1:
                        System.out.print("Enter kilograms value: ");
                        value = scanner.nextDouble();
                        System.out.println(df.format(value) + " kilograms = " + df.format(value * KGtoLBfctr) + " pounds");
                        break;
                    case 2:
                        System.out.print("Enter pounds value: ");
                        value = scanner.nextDouble();
                        System.out.println(df.format(value) + " pounds = " + df.format(value * LBtoKGfctr) + " kilograms");
                        break;
                    default:
                        System.out.println("Invalid choice!");
                }
                break;
            default:
                System.out.println("Invalid choice!");
        }

        unitConverter(); // Recursive call
    }

    public static void main(String[] args) {
        unitConverter();
    }
}
