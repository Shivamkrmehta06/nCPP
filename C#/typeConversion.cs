public class typeC
{
    public static void Run()
    {
        //Most of the numeric data types have a Parse() method, which converts a string into the given data type. In this case, you use the Parse() method to convert two strings into int values, then add them together.
        // string first = "7";
        // string second = "8";
        // int sum = int.Parse(first)+int.Parse(second);
        // Console.WriteLine(sum);

        // string value1 = "5";
        // string value2 = "8";
        // int result = Convert.ToInt32(value1)*Convert.ToInt32(value2);
        // Console.WriteLine(result);

        // int val = (int)1.5m; // casting turncates
        // Console.WriteLine("Explicit TypeCasting: "+val);
        // int val2 = Convert.ToInt32(1.5m); //Converting rounds up
        // Console.WriteLine("Convert TypeCasting: "+val2);
        // string value = "Shiva";
        // int result = 0;

        // if (int.TryParse(value, out result))
        // {
        //     Console.WriteLine($"Measurement: {result}");
        // }
        // else
        // {
        //     Console.WriteLine("Unable to report the measurement.");
        // }

        string[] values = { "12.3", "45", "ABC", "11", "DEF" };
        double total = 0;
        string ans = "";
        foreach(string value in values)
        {
            double num;
            if(double.TryParse(value,out num))
            {
                total +=num;
            }
            else
            {
                ans += value;
            }
        }
        Console.WriteLine($"Total Sum: {total}");
        Console.WriteLine($"Message: {ans}");
    }
}