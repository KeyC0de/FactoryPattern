<h1 align="center">
	<a href="https://github.com/KeyC0de/FactoryPattern">Factory Pattern</a>
</h1>
<hr>

  
**<u>Definition:</u>**

Define an interface for creating an object, but let subclasses decide which class to instantiate.

**<u>Description</u>**

The factory function is used to create an object of any type of subclass of a given class.</br>
Instead of creating objects like this:</br>

```
ObjectType* o = new ObjectType{args};
```

we create them like this:

```
ObjectType* o = newObjectType{args};
```

Where newObjectType is the factory function. Yes the factory is nothing more than a function for objects, typically a global function (not a method).


## Design

- Create your class hierarchy.
- The factory function returns one of several possible classes that share a common base class.
- It's best to make the target class hierarchy constructors protected and make the factory function a friend of the class hierarchy such that only the factory has access to these classes and can create objects from them.
- The base class constructor can be public. Just remember to create your objects using the factory object

The related abstract factory design pattern is again a function which is used to create an object of any type of related, or depedent subclasses. In other words it creates an object among a family of similar classes. I've never used this one but for the sake of completion I make a reference to it.

The factory design pattern makes a, sort of, virtual constructor possible as you'll notice in the code

When to use it?</br>

- When we don't want to expose the object's creation logic, or any of the concrete subclasses to the client.
- When all the potential classes are in the same subclass hierarchy, but we don't know ahead of time (at compile time) exactly what specific class we need.


I used Windows 8.1 x86_64, Visual Studio 2017, C++17 to build the project.


# Contribute

Please submit any bugs you find through GitHub repository 'Issues' page with details describing how to replicate the problem. If you liked it or you learned something new give it a star, clone it, laugh at it, contribute to it whatever. I appreciate all of it. Enjoy.


# License

Distributed under the GNU GPL V3 License. See "GNU GPL license.txt" for more information.


# Contact

email: *nik.lazkey@gmail.com*</br>
website: *www.keyc0de.net*
