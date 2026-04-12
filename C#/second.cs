public class Second
{
    public static void main()
    {
        int firstValue = 500;
        int secondValue = 800;
        Console.WriteLine($"First Value: {firstValue}\nSecond Value: {secondValue}");
        int largerValue;
        largerValue = Math.Max(firstValue,secondValue);
        Console.WriteLine(largerValue);
    }
}


