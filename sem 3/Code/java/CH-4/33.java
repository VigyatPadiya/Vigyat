class localinner {
    void displayMessage() {
        // Local inner class inside a method
        class LocalInnerClass {
            void show() {
                System.out.println("Hello from the Local Inner Class!");
            }
        }

        // Creating an instance of the local inner class and calling its method
        LocalInnerClass localInner = new LocalInnerClass();
        localInner.show();
    }

    public static void main(String[] args) {
        localinner outer = new localinner();
        outer.displayMessage();
    }
}
