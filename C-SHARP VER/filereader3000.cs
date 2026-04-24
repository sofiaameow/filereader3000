using System;
using System.IO;

class Program
{
    static void main()
    {
        console.Write("Enter a filename: ");
        string filename = console.ReadLine();


        Console.Write("Enter a filename: ");
        string filename = Console.ReadLine();

        Console.WriteLine("User chose the word: " + word);

        ReadFile(filename, word);

        Console.ReadKey();
    }

    static void ReadFile(string filename, string word)
    {
        if (!File.Exists(filename))
        {
            Console.WriteLine("But the program wasn't able to open the file.");
            return;
        }

        foreach (string fileWord in File.ReadAllText(filename).Split((char[])null, StringSplitOptions.RemoveEmptyEntries))
        {
            if (fileWord == word)
            {
                Console.WriteLine("Which was found inside of file :)");
                return;
            }
        }

        Console.WriteLine("Which was not found in file :(");
    }
}
