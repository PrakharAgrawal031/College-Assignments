class TestPriority extends Thread {
    public void run() {
        System.out.println("running thread priority is:" + Thread.currentThread().getPriority());
    }

    public static void main(String args[]) {
        TestPriority m1 = new TestPriority();
        TestPriority m2 = new TestPriority();
        m1.setPriority(Thread.MIN_PRIORITY);
        m2.setPriority(Thread.MAX_PRIORITY);
        m1.start();
        m2.start();
    }
}