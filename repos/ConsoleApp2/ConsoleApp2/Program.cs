using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{


    class Student
    {
        public string name;
        public int id;
        public static int year;


        public Student()
        {
            name = String.Empty;
            id = 0;
            year = 0;
        }

        public void get_name()
        {
            System.Console.WriteLine("name: {0}", name);
        }

        public void get_id()
        {
            System.Console.WriteLine("id: {0}", id);
        }


        static void Main()
        {
            Student s = new Student();
            s.name = "Trump";
            s.id = 1;

            s.get_name();
            // s.get_name();
            s.get_id();
            Student.year = 2012;
            System.Console.WriteLine("Student year: {0}", Student.year);
        }



    }
}
