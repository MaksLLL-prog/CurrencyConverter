#include <iostream>
#include <string>
#include <cmath>
#include <limits>


class Hello_Bank {
     public:
     std::string name;
     void print() {
        std::cout << name << std::endl;
     }   
};


int main() {

    Hello_Bank hello_bank;
    hello_bank.name = "           Welcome to our bank!";
    hello_bank.print();

std::cout << "\nChoose your currency: 1.RUB, 2.EUR, 3.UAN, 4.USD" << std::endl;
int operation;
std::cin >> operation;

switch (operation)
{

    case 1:
    std::cout << "What currency do you want to transfer to: 1. EUR, 2. UAN, 3. USD" << std::endl;
    int kursRUB;
    std::cin >> kursRUB;

    switch (kursRUB)
    {
        case 1:
        std::cout << "RUB to EUR exchange rate now: 0.009536€" << std::endl;
        int n;
        std::cout << "Enter the amount of currency: ";
        std::cin >> n;
        std::cout << "How many RUB do you want to convert to EUR: " << n << "₽" << std::endl;

        if (n > 0) {
            float sum = n * 0.009536;
            std::cout << "Total without commission: " << sum << "₽" << std::endl;
            float state_commission = sum / 100 * 85;
            std::cout << "Turn out taking into account the state_commission: " << state_commission << "₽" << std::endl;

        } else if (n < 0) {
            std::cout << "It is impossible to carry out convocation" << std::endl;
        }
        break;

       case 2: 
       std::cout << "RUB to UAN exchange rate now: 0.41179₴" << std::endl;
        int n2;
        std::cout << "Enter the amount of currency: ";
        std::cin >> n2;
        std::cout << "How many RUB do you want to convert to UAN: " << n2 << "₽" << std::endl;

        if (n2 > 0) {
            float sum2 = n2 * 0.41179;
            std::cout << "Total without commission: " << sum2 << "₽" << std::endl;
            float state_commission2 = sum2 / 100 * 85;
            std::cout << "Turn out taking into account the state_commission: " << state_commission2 << "₽" << std::endl;

        } else if (n2 < 0) {
            std::cout << "It is impossible to carry out convocation" << std::endl;
        }
        break;

        case 3:
        std::cout << "RUB to USD exchange rate now: 0,009764$" << std::endl;
        int n3;
        std::cout << "Enter the amount of currency: ";
        std::cin >> n3;
        std::cout << "How many RUB do you want to convert to USD: " << n3 << "₽" << std::endl;

        if (n3 > 0) {
            float sum3 = n3 * 0.009764;
            std::cout << "Total without commission: " << sum3 << "₽" << std::endl;
            float state_commission3 = sum3 / 100 * 85;
            std::cout << "Turn out taking into account the state_commission: " << state_commission3 << "₽" << std::endl;

        } else if (n3 < 0) {
            std::cout << "It is impossible to carry out convocation" << std::endl;
        }
        break; } 

        break;


        case 2:
        std::cout << "What currency do you want to transfer to: 1. RUB, 2. UAN, 3. USD" << std::endl;
        int kursEUR;
        std::cin >> kursEUR;

        switch (kursEUR) {

        case 1:
            std::cout << "EUR to RUB exchange rate now: 104.86₽" << std::endl;
            int n4;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n4;
            std::cout << "How many RUB do you want to convert to EUR: " << n4 << "€" << std::endl;

            if (n4 > 0) {
                float sum4 = n4 * 104.86;
                std::cout << "Total without commission: " << sum4 << "€" << std::endl;
                float state_commission4 = sum4 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission4 << "€" << std::endl;

            } else if (n4 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break;
        
        case 2:
            std::cout << "EUR to UAN exchange rate now: 43.35₴" << std::endl;
            int n5;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n5;
            std::cout << "How many UAN do you want to convert to EUR: " << n5 << "€" << std::endl;

            if (n5 > 0) {
                float sum5 = n5 * 43.35;
                std::cout << "Total without commission: " << sum5 << "€" << std::endl;
                float state_commission5 = sum5 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission5 << "€" << std::endl;
            } else if (n5 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break; 


            case 3:
            std::cout << "EUR to USD exchange rate now: 1.03$" << std::endl;
            int n6;
            std::cout << "Enter the amount of currency: ";
             std::cin >> n6;
            std::cout << "How many UAN do you want to convert to EUR: " << n6 << "€" << std::endl;

            if (n6 > 0) {
                float sum6 = n6 * 1.03;
                std::cout << "Total without commission: " << sum6 << "€" << std::endl;
                float state_commission6 = sum6 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission6 << "€" << std::endl;
            } else if (n6 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break; } break;

            case 3:
            std::cout << "What currency do you want to transfer to: 1. EUR, 2. RUB, 3. USD" << std::endl;
            int kursUAH;
            std::cin >> kursUAH;

            switch (kursUAH) {

            case 1:
            std::cout << "UAN to EUR exchange rate now: 0.023114€" << std::endl;
            int n6;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n6;
            std::cout << "How many UAH do you want to convert to EUR: " << n6 << "₴" << std::endl;

            if (n6 > 0) {
                float sum6 = n6 * 0.023114;
                std::cout << "Total without commission: " << sum6 << "₴" << std::endl;
                float state_commission6 = sum6 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission6 << "₴" << std::endl;

            } else if (n6 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break;

            case 2:
            std::cout << "UAN to RUB exchange rate now: 2.43₽" << std::endl;
            int n7;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n7;
            std::cout << "How many UAH do you want to convert to RUB: " << n7 << "₴" << std::endl;

            if (n7 > 0) {
                float sum7 = n7 * 2.43;
                std::cout << "Total without commission: " << sum7 << "₴" << std::endl;
                float state_commission7 = sum7 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission7 << "₴" << std::endl;

            } else if (n7 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break;

            case 3:
            std::cout << "UAN to USD exchange rate now: 0.023744$" << std::endl;
            int n8;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n8;
            std::cout << "How many UAH do you want to convert to USD: " << n8 << "₴" << std::endl;

            if (n8 > 0) {
                float sum8 = n8 * 0.023744;
                std::cout << "Total without commission: " << sum8 << "₴" << std::endl;
                float state_commission8 = sum8 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission8 << "₴" << std::endl;

            } else if (n8 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            } break; 
            } break;

            case 4:
            std::cout << "What currency do you want to transfer to: 1. EUR, 2. RUB, 3. UAH" << std::endl;
            int kursUSD;
            std::cin >> kursUSD;

            switch (kursUSD) {

            case 1:
            std::cout << "USD to EUR exchange rate now: 0.97345€" << std::endl;
            int n9;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n9;
            std::cout << "How many USD do you want to convert to EUR: " << n9 << "$" << std::endl;

            if (n9> 0) {
                float sum9 = n9 * 0.97345;
                std::cout << "Total without commission: " << sum9 << "$" << std::endl;
                float state_commission9 = sum9 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission9 << "$" << std::endl;

            } else if (n9 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break;

            case 2:
            std::cout << "USD to RUB exchange rate now: 102.415₽" << std::endl;
            int n10;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n10;
            std::cout << "How many USD do you want to convert to RUB: " << n10 << "$" << std::endl;

            if (n10 > 0) {
                float sum10 = n10 * 102.41;
                std::cout << "Total without commission: " << sum10 << "$" << std::endl;
                float state_commission10 = sum10 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission10 << "$" << std::endl;

            } else if (n10 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break;

            case 3:
            std::cout << "USD to UAH exchange rate now: 42.12₴" << std::endl;
            int n11;
            std::cout << "Enter the amount of currency: ";
            std::cin >> n11;
            std::cout << "How many USD do you want to convert to UAH: " << n11 << "$" << std::endl;

            if (n11 > 0) {
                float sum11 = n11 * 42.12;
                std::cout << "Total without commission: " << sum11 << "$" << std::endl;
                float state_commission11 = sum11 / 100 * 85;
                std::cout << "Turn out taking into account the state_commission: " << state_commission11 << "$" << std::endl;

            } else if (n11 < 0) {
                std::cout << "It is impossible to carry out convocation" << std::endl;
            }
            break; }}       

}


