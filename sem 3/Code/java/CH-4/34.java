class nest {
    public interface NestedInterface {
        void showMessage(String message);
    }
}

class ImplementingClass implements nest.NestedInterface {
    public void showMessage(String message) {
        System.out.println("Message: " + message);
    }

    public static void main(String[] args) {
        nest.NestedInterface instance = new ImplementingClass();
        instance.showMessage("Hello from the Nested Interface!");
    }
}
