public class Arrays
{
    public static void run()
    {
    //     int[] arr = {1,2,3};
    //     //Console.WriteLine(arr.Length);
    //     foreach(int x in arr)
    //     {
    //         Console.WriteLine(x);
    //     }
    //     for(int i = 0;i<3;i++) Console.WriteLine(arr[i]);
    string[] orderIDs = { "B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179" };
    foreach(string order in orderIDs)
        {
            if (order.StartsWith('B'))
            {
                Console.WriteLine(order);
            }
        }
    
    }
}