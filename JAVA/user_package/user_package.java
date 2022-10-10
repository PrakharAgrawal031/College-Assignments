package user_package;

public class user_package {
    public void print(){
        System.out.println("This function is from a user defined package");
    }
    public static void main(String[] args) {
        user_package obj1 = new user_package();
        obj1.print();
    }
}
