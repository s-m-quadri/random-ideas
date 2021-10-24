public class Student { // class variable or instance variable
  int rollno;
  String name;

  // Student() {
  //   rollNo=23;
  //   name="Name";
  // }

  void display() // method defination
  {
    System.out.println("Roll No : " + getroll());
    System.out.println("Name : " + getname());
  }

  // setter methods
  void setroll(int r) {
    rollno = r;
  }

  void setname(String n) {
    name = n;
  }

  // getter method
  int getroll(){
    return rollno;
  }
  String getname(){
    return name;
  }

  public static void main(String args[]) {
    // instantiation of an object
    // class name object name = new constructor();
    // new keyword used to allocate memory to an object and constructor used to
    // initialize an object
    Student ob = new Student();
    ob.display();
    ob.setroll(261010);
    ob.setname("Aboli");
    ob.display();
    Student ob1 = new Student();
    ob1.setroll(261012);
    ob1.setname("Ali");
    ob1.display();
  }
}