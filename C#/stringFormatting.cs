public class strFormat
{
    public static void Run()
    {
        decimal price = 123.45m;
        int discount = 50;

        Console.WriteLine($"Price: {price:C} (Save {discount:C})");

        decimal measurement = 123456.78912m;
        Console.WriteLine($"Measurement: {measurement:N}");
    
        decimal tax = 0.36785m;
        Console.WriteLine($"Tax rate: {tax:P2}");
    
        string paymentId = "769C";
        string payeeName = "Mr. Stephen Ortega";
        string paymentAmount = "$5,000.00";

        var formattedLine = paymentId.PadRight(6);
        formattedLine += payeeName.PadRight(24);
        formattedLine += paymentAmount.PadLeft(10);

        Console.WriteLine("1234567890123456789012345678901234567890");
        Console.WriteLine(formattedLine);

        string message = "Find what is (inside the parentheses)";

        int openingPosition = message.IndexOf('(');
        int closingPosition = message.IndexOf(')');

        openingPosition += 1;

        int length = closingPosition - openingPosition;

        Console.WriteLine(message.Substring(openingPosition, length));

        message = "(What if) there are (more than) one (set of parentheses)?";

        while (true)
        {
            openingPosition = message.IndexOf('(');
            if (openingPosition == -1) break;

            openingPosition += 1;
        
            closingPosition = message.IndexOf(')');
            length = closingPosition - openingPosition;

            Console.WriteLine(message.Substring(openingPosition, length));

            message = message.Substring(closingPosition + 1);
        }
    }
}