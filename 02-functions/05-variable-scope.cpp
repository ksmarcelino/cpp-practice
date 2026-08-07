/*#include <iostream>
using namespace std;

int balance = 5000;


void deposit()
{
    int amount;

    cout << "Enter deposit amount: ";
    cin >> amount;
    balance = balance + amount;

}

void showBalance()
{
    cout << "Current balance: " << balance << endl;
}

int main()
{
    deposit();
    showBalance();

    return 0;
}*/


#include <iostream>
using namespace std;

int playerHealth = 100;
int monsterHealth = 80;

void playerAttack();
void monsterAttack();
void showHealth();

int main()
{
    cout << "\\n\n========== BATTLE START ==========\n\n";

    do
    {
         showHealth();
         playerAttack();

         if (monsterHealth <= 0)
         {
            break;
         }        
         monsterAttack();
         
         if (playerHealth <= 0)
         {
            break;
         }

    } 
    while (monsterHealth > 0 && playerHealth > 0);

    if (playerHealth > 0 && monsterHealth == 0)
    {
        showHealth();
        cout << "\nYou win!" << endl;
    }
    else if (playerHealth == 0 && monsterHealth > 0)
    {
        showHealth();
        cout << "\nYou lose!" << endl;
    }
        
    return 0;
}


void playerAttack()
{
    int damage;
    cout << "\nEnter damage to monster: ";
    cin >> damage;
    monsterHealth = monsterHealth - damage;

    if (monsterHealth < 0)
    {
        monsterHealth = 0;
    }

    cout << "\nYou dealt " << damage << " damage!" << endl;
    
}

void monsterAttack()
{
    int damage;
    cout << "\nEnter monster damage: ";
    cin >> damage;
    playerHealth = playerHealth - damage;
    
    if (playerHealth < 0)
    {
        playerHealth = 0;
    }

    cout << "\nThe monster dealt " << damage << " to you!" << endl;
}

void showHealth()
{   
    cout << "\nPlayer Health: " << playerHealth << endl;
    cout << "\nMonster Health: " << monsterHealth << endl;
}

