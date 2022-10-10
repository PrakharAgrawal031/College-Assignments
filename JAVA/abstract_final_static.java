
abstract class abstractclassex {
    public abstract void print();
}

class newclass extends abstractclassex {
    public void print() {
        System.out.println("This is a child class of an abstract class.");
    }
}

class outerclass {
    static String mssg = "This is a static class";

    public static class static_class {
        void print() {
            System.out.println(mssg);
        }
    }
}

final class final_class {
    void print() {
        System.out.println("This is a final class");
    }
}

public class abstract_final_static {
    public static void main(String[] args) {
        abstractclassex obj1 = new newclass();
        outerclass.static_class obj2 = new outerclass.static_class();
        final_class obj3 = new final_class();
        obj1.print();
        obj2.print();
        obj3.print();

    }

}
