// See https://aka.ms/new-console-template for more information
using System;

class Program {
    static void Main() {
        string? myVariable = Environment.GetEnvironmentVariable("NAME");

        if (myVariable != null) {
            Console.WriteLine($"El valor de USERNAME es: {myVariable}");
        } else {
            Console.WriteLine("MY_VARIABLE no está definida.");
        }
    }
}
