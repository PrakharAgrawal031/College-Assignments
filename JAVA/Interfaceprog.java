public class Interfaceprog {
    public interface Shape {
        double area();
        double perimeter();
        void showArea();
        void showPerimeter();
    }
    public static class Circle implements Shape {
        private double radius;
    
        public Circle(double radius) {
            this.radius = radius;
        }
    
        @Override
        public double area() {
            return Math.PI * radius * radius;
        }
    
        @Override
        public double perimeter() {
            return 2 * Math.PI * radius;
        }
    
        @Override
        public void showArea() {
            System.out.println("The area of the circle is: " + area());
        }
    
        @Override
        public void showPerimeter() {
            System.out.println("The perimeter of the circle is: " + perimeter());
        }
    }
    
    public static class Rectangle implements Shape {
        private double width;
        private double height;
    
        public Rectangle(double width, double height) {
            this.width = width;
            this.height = height;
        }
    
        @Override
        public double area() {
            return width * height;
        }
    
        @Override
        public double perimeter() {
            return 2 * (width + height);
        }

        @Override
        public void showArea() {
            System.out.println("The area of the rectangle is: " + area());
        }
    
        @Override
        public void showPerimeter() {
            System.out.println("The perimeter of the rectangle is: " + perimeter());
        }
    }

    public static void main(String[] args) {
        //Interfaceprog itf = new Interfaceprog();
        Circle cr = new Circle(2.0);
        Rectangle rt = new Rectangle(10, 20);
        cr.showArea();
        cr.showPerimeter();
        rt.showArea();
        rt.showPerimeter();
    }
        
}

