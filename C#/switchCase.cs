/* 
Welcome to the Contoso PetFriends app. Your main menu options are:

1. List all of our current pet information
2. Add a new animal friend
3. Ensure animal ages are complete
4. Ensure nicknames are complete
5. Edit an animal's age
6. Edit personality description
7. Display all cats with a feature
8. Display all dogs with a feature

Enter your selection number (or type Exit to exit the program):
 */

public class Menu
{
    public static void Run()
    {
        string? userInput;
        bool loopCtrl = true;
        do
        {
            Console.WriteLine("1. List all of our current pet information");
            Console.WriteLine("2. Add a new animal friend");
            Console.WriteLine("3. Ensure animal ages are complete");
            Console.WriteLine("4. Ensure nicknames are complete");
            Console.WriteLine("5. Edit an animal's age");
            Console.WriteLine("6. Edit personality description");
            Console.WriteLine("7. Display all cats with a feature");
            Console.WriteLine("8. Display all dogs with a feature");
            Console.WriteLine("\n\nEnter the Input:");
            userInput = Console.ReadLine();
            if (userInput == "exit")
            {
                loopCtrl = false;
            }
        }while(loopCtrl);
        switch (userInput)
{
        case "1":
        // List all of our current pet information
            Console.WriteLine("This feature is coming soon - please check back later.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        case "2":
            // Add a new animal friend
            Console.WriteLine("This feature is coming soon - please check back later.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        case "3":
            // Ensure animal ages are complete
            Console.WriteLine("Challenge Project - please check back soon to see progress.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        case "4":
            // Ensure nicknames are complete
            Console.WriteLine("Challenge Project - please check back soon to see progress.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        case "5":
            // Edit an animal's age
            Console.WriteLine("UNDER CONSTRUCTION - please check back next month.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        case "6":
            // Edit personality description
            Console.WriteLine("UNDER CONSTRUCTION - please check back next month.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        case "7":
            // Display all cats with a feature
            Console.WriteLine("UNDER CONSTRUCTION - please check back next month.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        case "8":
        // Display all dogs with a feature
            Console.WriteLine("UNDER CONSTRUCTION - please check back next month.");
            Console.WriteLine("Press Enter to continue...");
            Console.ReadLine();
            break;

        default:
            Console.WriteLine("Invalid option. Please try again.");
            break;
        }
    }
    
}