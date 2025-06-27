/*abstract class*/
abstract class Animal
{
	public abstract void animalSound();
	
	public void sleep()
	{
		System.out.println("Zzzzzzz");
	}
}

class Dog extends Animal
{
	public void animalSound()
	{
		System.out.println("The Dog says : Woof.. Woof..");
	}
}
	
class Abs
{
	public static void main(String[] args)
	{
	Dog myDog = new Dog();
	myDog.animalSound();
	myDog.sleep();
	}
}