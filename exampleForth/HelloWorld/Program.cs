// See https://aka.ms/new-console-template for more information
using System;

class Program {
    static void Main() {
        string? myVariable = Environment.GetEnvironmentVariable("NAME");
        string? myDay = Environment.GetEnvironmentVariable("DAY");

        if (myVariable != null && myDay != null) {
            Console.WriteLine($"El valor de USERNAME es: {myVariable}, y el valor de DAY es: {myDay}");
        } else {
            Console.WriteLine("MY_VARIABLE no está definida.");
        }
    }
}
