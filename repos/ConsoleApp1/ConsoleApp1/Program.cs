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
        // method convert from string to int var.
        public static int ConvertToInt(string s)
        {
            System.Console.WriteLine("Protect please, thanks");

            // define variable 'num' type int for method int.TryParse.
            int num;
            
            // variable 's' string become to variable 'num' int.  
            bool canConvert = int.TryParse(s, out num);
            if (canConvert)
                {
                return num;    
                }
            return -1;
        }


        public static int[] ArgsToArray(string[] args)
        {
            int[] array = new int[args.Length];
            for (int i = 0; i < args.Length; i++)
            {
                // to array[i] with int value from method ConvertToInt(string args[i])
                array[i] = ConvertToInt(args[i]);

                // if array[i] < 0 then array empty and break becouse ConvertTo Int is False.  
                if (array[i] == -1)
                {
                    Console.WriteLine("{0} can not be integer", args[i]);
                    array = null;
                    return array;
                }
            }

            return array;
        }


        public static bool PrintNum(int number1) 
        {
            // variable temp for sqrt value.
            double temp = -1;
            // variable test show prim or not int.
            int test = -1;

            // check int value  
            if (number1 == 1)
            {
                return false;
            }
            else if (number1 == 2)
            {
                return true;
            }
            else
            {
                // get sqrt and round up value
                temp = Math.Ceiling(Math.Sqrt(number1));

                // check conditions for pri value
                for (int j = 2; j <= temp; j++)
                {
                    // for number1 if found value j with rem == 0 then not pri value
                    if (number1 % j == 0)
                    {
                        // stop loop and break
                        test = 0;
                        break;
                    }
                }
                // if variable test = -1 and not changed then int value pri 
                if (test == -1)
                {
                    test = -1;
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }



        static void Main()
        {   // get size string array
            try
            {
                int length = Convert.ToInt32(Console.ReadLine());
                // memory for string array
                string[] args = new string[length];
                // get string and split for string array 
                args = Console.ReadLine().Split(' ');

                // memory for int array
                int[] numbers = new int[length];
                // retrun to numbers the int array from method
                numbers = ArgsToArray(args);

                // check numbers array not null
                if (numbers != null)
                {
                    int[] temp = new int[length];
                    int j = 0;
                    for (int i = 0; i < numbers.Length; i++)
                    {
                        if (PrintNum(numbers[i]))
                        {
                            temp[j] = numbers[i];
                            j++;
                        }
                    }
                    System.Console.WriteLine("{0}", j);
                    foreach (int s in temp)
                    {
                        if (s != 0)
                        {
                            System.Console.Write("{0} ", s);
                        }
                    }
                }
                else
                {
                    System.Console.WriteLine("The method StringToArray(string args) is null");
                }
            }
            catch (System.Exception msg)
            {
                Console.Write(msg);
            }
        }
    }
}
