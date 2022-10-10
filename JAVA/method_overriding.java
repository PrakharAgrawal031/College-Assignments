class Phone {
    String printer() {
        return "phone";
    }
}

class Smartphone extends Phone {
    String printer() {
        return "smartphone";
    }
}

class method_overriding {
    public static void main(String args[]) {
        Phone P1 = new Phone();
        Smartphone P2 = new Smartphone();
        System.out.println("Object you created is a : " + P1.printer());
        System.out.println("Object you created is a : " + P2.printer());
    }
}
