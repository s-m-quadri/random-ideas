/*
Title for index : WAP TO IMPLEMENT CLASS,OBJECT AND CONSTRUCTOR OVERLLOADING . 

Create a class called Employee that includes three instance variables -a first name (type String), a last name( type String) and a monthly salary (double). Implement constructor overloading and initialize variables. Provide a set and get method for each instance variable. If the monthly salary is not positive, do not set its value.Write a test application named EmployeeTest that demonstrate class Employee’s capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10% raise and display each Employee’s salary again. 

 

Journal write up  :  

class definiion and syntax 

object definition and object insattiation 

constructor and types of constructor 

constructor overloading 

Date of Conduction 

  A1 ,A2 : 23 NOV 21 

  A3 : 24 NOV 21  
*/
 

class PR2_Reference 

{     

      String fName, lName; 

      double mSal; 

    //setter methods 

       void setMsalary(double s) {   

                                              if(s >=0) 

                                                  mSal=s; 

                   } 

        void setFname(String s){ 

                         fName=s; 

          } 

            void setLname(String s){ 

                         lName=s; 

          } 

         //getter methods 

          double getMsal() { return mSal;} 

         String getFname(){ return fName;} 

         String getLname() { return lName;} 

          //Constructor overloading 

          //name should be same as class name ,no return type,access specifiers can be used 

          //This is No Argument constructor 

          PR2_Reference() 

              { 

                     mSal=12000.0; 

                     fName="Ra"; 

                     lName="Ma"; 

              } 

     //This is Argument or Parameterised constructor 

 

          PR2_Reference(double m1, String fName, String lName) 

            { 

                       mSal=m1; 

                     this. fName=fName;       //to refer current class instance variable. 

                      this.lName=lName; 

            } 

     //Method to calculate yearly salary 

           double getYearlySal() 

             { 

                   return mSal*12; 

            } 

    //Method to increment salary 

       double getIncrementedSalary() 

           {    

                   mSal+=mSal*0.1; 

                  return mSal; 

           }        

         

} 

class EmployeeTest  

    { 

           public static void main(String ar[]) 

             { 

                     //Creating an object 

                 PR2_Reference e1=new PR2_Reference(); 

                  //use getter method 

                 System.out.println("Employee First Name is "+ e1.getFname()); 

                 System.out.println("Employee Last Name is "+ e1.getLname()); 

                 System.out.println("Employee monthly salary  is "+ e1.getMsal()); 

                //use setter method to change firstname of e1 object 

                 e1.setFname("Reena"); 

                  System.out.println("Employee First Name is "+ e1.getFname()); 

                 //get yearly salary 

                   System.out.println("Employee Yearly salary  is "+ e1.getYearlySal()); 

                // get incremented monthly salary 

  System.out.println("Employee incremented monthly salary   is "+ e1.getIncrementedSalary()); 

     //task : create emp2 object with parameterised consructor and invoke all required methods 

 

    } 

   } 
