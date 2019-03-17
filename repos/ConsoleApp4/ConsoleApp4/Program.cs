using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        Program()
        {

        }

        static void Main()
        {
            int length = Convert.ToInt32(Console.ReadLine());

            for (int i = 0; i < length; i++)
            {
                    System.Console.Write("[*]");
            }
            System.Console.ReadLine();
        }
    }
}
