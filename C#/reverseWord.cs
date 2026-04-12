
// string pangram = "The quick brown fox jumps over the lazy dog";

public class revWord
{
    public static void run(){
        // string pangram = "The quick brown fox jumps over the lazy dog";
        // List<string> words = new List<string>();
        // string word = "";

        // foreach (char ch in pangram)
        // {
        //     if (ch != ' ')
        //     {
        //         word += ch;
        //     }
        //     else if (word.Length > 0)
        //     {
        //         words.Add(word);
        //         word = "";
        //     }
        // }

        // if (word.Length > 0)
        // {
        //     words.Add(word);
        // }

        // for (int i = 0; i < words.Count; i++)
        // {
        //     char[] chars = words[i].ToCharArray();
        //     Array.Reverse(chars);
        //     words[i] = new string(chars);
        // }

        // foreach (string w in words)
        // {
        //     Console.Write(w + " ");
        // }

        string pangram = "The quick brown fox jumps over the lazy dog";

        // Step 1
        string[] message = pangram.Split(' ');

        //Step 2
        string[] newMessage = new string[message.Length];

        // Step 3
        for (int i = 0; i < message.Length; i++)
        {
            char[] letters = message[i].ToCharArray();
            Array.Reverse(letters);
            newMessage[i] = new string(letters);
        }

        //Step 4
        string result = String.Join(" ", newMessage);
        Console.WriteLine(result);
    }
}