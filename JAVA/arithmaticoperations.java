
public class arithmaticoperations {

    int addition(int x, int y) {
        return x + y;
    }

    int product(int x, int y) {
        return x * y;
    }

    float quotient(float x, float y) {
        return x / y;
    }

    int reminder(int x, int y) {
        return x % y;
    }

    int sub(int x, int y) {
        return x - y;
    }

    public static void main(String[] args) {

        arithmaticoperations operation = new arithmaticoperations();

        System.out.printf("Addition = %d, Subtraction = %d, Product = %d, Quotient = %f, reminder = %d",
                operation.addition(10, 10), operation.sub(10, 10), operation.product(10, 10),
                operation.quotient(10, 10), operation.reminder(10, 10));

    }
}
