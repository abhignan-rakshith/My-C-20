#include <iostream>
#include <ctime>
#include <string>
#include <thread>
#include <chrono>
#include <array>

// ANSI escape codes for colors
const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";

void displayProgressBar(const std::string &message)
{
    std::cout << message;
    for (int i = 0; i < 20; ++i)
    {
        std::cout << CYAN << "▓" << RESET << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << std::endl;
}

void displayCrystalBall()
{
    std::cout << BLUE << R"(
       *    .  *       .             *
                         *
 *   .        *       .       .       *
   .     *
           .     * .    .          .
      .                .
.  *           *               *   .
                   *
     *          .   .                   *
        .                    .
              *       .     *
  *   .                       .
                  .    *    .          *
     .                           .
         *     .          *  .
              .   *
   *     .                  )"
              << RESET << std::endl;
}

std::string getZodiacSign(const std::string &name)
{
    const std::array<std::string, 12> zodiacSigns = {
        "Aries", "Taurus", "Gemini", "Cancer",
        "Leo", "Virgo", "Libra", "Scorpio",
        "Sagittarius", "Capricorn", "Aquarius", "Pisces"};

    // Generate a "random" but consistent zodiac sign based on name
    size_t nameSum = 0;
    for (char c : name)
    {
        nameSum += static_cast<size_t>(c);
    }
    return zodiacSigns[nameSum % zodiacSigns.size()];
}

int main()
{
    std::srand(static_cast<unsigned int>(std::time(0))); // Seed

    const std::array<std::string, 15> predictions{{"a lot of kids running in the backyard!",
                                                   "a lot of empty coffee cups on your work table - you're working hard!",
                                                   "you dancing at a masquerade ball in mysterious company",
                                                   "you discovering a hidden treasure map in an old book",
                                                   "dragons soaring through purple skies over a golden city",
                                                   "you becoming a famous chef with your secret recipe",
                                                   "you inventing a revolutionary AI that only tells dad jokes",
                                                   "you leading an expedition to find a mysterious ancient artifact",
                                                   "you winning a dance competition with a talking penguin",
                                                   "you starting a successful business selling magic carpets",
                                                   "you writing a bestselling book about coding adventures",
                                                   "you traveling through time in a toaster-powered machine",
                                                   "you teaching meditation to a group of stressed-out robots",
                                                   "you discovering a new planet made entirely of chocolate",
                                                   "you becoming the first person to grow zero-gravity pizzas"}};

    const std::array<std::string, 5> fortuneCookies{{"Your bug-fixing abilities will soon reach legendary status!",
                                                     "A mysterious pull request will bring unexpected joy.",
                                                     "The semicolon you forgot will reveal itself soon.",
                                                     "Your code will compile on the first try today!",
                                                     "A loop you write will bring infinite happiness."}};

    std::string name;
    std::cout << MAGENTA << "✨ Welcome to the Mystical Fortune Teller ✨" << RESET << std::endl;
    std::cout << YELLOW << "What's your name, seeker of fortune: " << RESET;
    std::getline(std::cin, name);

    std::string zodiacSign = getZodiacSign(name);

    bool end{false};

    while (!end)
    {
        std::cout << "\n"
                  << CYAN << "🔮 Gazing into the crystal ball..." << RESET << std::endl;
        displayCrystalBall();
        displayProgressBar("Reading the mystical signs...");

        std::cout << GREEN << "\nOh dear " << name << ", born under the sign of " << zodiacSign << "," << RESET << std::endl;

        // Main prediction
        size_t rand_num = static_cast<size_t>(std::rand() % predictions.size());
        std::cout << YELLOW << "In your future, I see " << predictions[rand_num] << RESET << std::endl;

        // Bonus fortune cookie
        size_t cookie_num = static_cast<size_t>(std::rand() % fortuneCookies.size());
        std::cout << MAGENTA << "\n🥠 Your bonus fortune cookie says: " << fortuneCookies[cookie_num] << RESET << std::endl;

        // Lucky numbers
        std::cout << BLUE << "\n🎲 Your lucky numbers for today are: ";
        for (int i = 0; i < 3; ++i)
        {
            std::cout << (std::rand() % 100 + 1) << " ";
        }
        std::cout << RESET << std::endl;

        std::cout << "\n"
                  << YELLOW << "Shall I gaze into the crystal ball again? (Y | N): " << RESET;
        char go_on;
        std::cin >> go_on;
        std::cin.ignore(); // Clear the newline from input buffer

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << GREEN << "\n🌟 The spirits are getting tired. Until we meet again, " << name
              << "! May your code be bug-free and your compile times swift! 🌟" << RESET << std::endl;

    return 0;
}