/*DEFINE AN INTERFACE FOR ANIMALS*/
interface Animal
{
	void makeSound();
	void eat();
}
/*dogs class implementing the animal interface*/
class Dog implements Animal
{
	public void makeSound()
	{
		System.out.println("Woof!");
	}
	public void eat()
	{
		System.out.println("Dog is eating dog food.");
	}
}

class Cat implements Animal
{
	public void makeSound()
	{
		System.out.println("Meowww...");
	}
	public void eat()
	{
		System.out.println("Cat eating Fish.");
	}
}

class InterfaceEx
{
	public static void main(String[] args)
	{
		/*create instance of dog and cat */
		Animal dog = new Dog();
		Animal cat = new Cat();
		
		System.out.println("Dog");
		dog.makeSound();
		dog.eat();
		
		System.out.println("\nCat");
		cat.makeSound();
		cat.eat();
	}
}	