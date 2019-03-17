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

        public static int ConvertToInt(string s)
        {
            System.Console.WriteLine("Protect please, thanks");
            int num = -1;

            bool canConvert = int.TryParse(s, out num);
            if (canConvert == false)
            {
                System.Console.WriteLine("Could not converted to number: {0}", s);
            }
            return num;
        }


        public static int[] ArgsToArray(string[] args)
        {
            int[] array = new int[args.Length];
            for (int i = 0; i < args.Length; i++)
            {
                // Console.WriteLine(args[i]);
                array[i] = ConvertToInt(args[i]);
            }
            return array;
        }


        static void Main()
        {
            int length = Convert.ToInt32(Console.ReadLine());

            string[] args = new string[length];

            args = Console.ReadLine().Split(' ');

            int[] numbers = new int[length];

            numbers = ArgsToArray(args);

            foreach (int i in numbers)
            {
                System.Console.Write(i);
                System.Console.Write(i);

            }
            System.Console.ReadLine();
        }
    }
}
