class staticinner {
    private static String outerMessage = "Hello from the Outer Class!";

    // Static Inner Class
    static class InnerClass {
        void displayMessage() {
            // Can access static members of the outer class directly
            System.out.println(outerMessage);
        }
    }

    public static void main(String[] args) {
        // Create an instance of the static inner class
        OuterClass.InnerClass inner = new OuterClass.InnerClass();
        inner.displayMessage(); // Call the method of the inner class
    }
}
