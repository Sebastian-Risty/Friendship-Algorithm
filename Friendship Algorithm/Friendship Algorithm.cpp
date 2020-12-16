/* Author: Sebastian Risty
 * Date: 9/1/2020
 * File: hw1.cpp
 * Purpose: Algorithm to see if someone could be friends with me.
 */

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    //Q1
    int answerOne;
    cout << "Question 1: " << endl;
    cout << "Do you like chess? 1 - I love chess. 2 - I've played it before. 3 - I hate chess." << endl;
    cin >> answerOne;
    if (answerOne == 1) {
        score += 100;
        cout << "What is your favorite opening? 1 - Latvian Gambit. 2 - French Exchange. 3 - I dont know any." << endl;
        int subAnswerOne;
        cin >> subAnswerOne;
        if (subAnswerOne == 1) {
            score += 100;
        }
        else if (subAnswerOne == 2) {
            score += 50;
        }
        else {
            score -= 200;
        }
    }
    else if (answerOne == 3) {
        score -= 100;
    }
    //Q2
    int answerTwo;
    cout << "Question 2: " << endl;
    cout << "How tall are you? 1 - > 11\'6\". 2 - > 6\'. 3 - < 6\'." << endl;
    cin >> answerTwo;
    if (answerTwo == 1) {
        score += 200;
        cout << "Do you wearing stilts? 1 - Yes. 2 - No. 3 - What?" << endl;
        int subAnswerTwo;
        cin >> subAnswerTwo;
        if (subAnswerTwo == 1) {
            score += 50;
        }
        else if (subAnswerTwo == 2) {
            score += 500;
        }
    }
    else if (answerTwo == 3) {
        score -= 10;
    }
    //Q3
    int answerThree;
    cout << "Question 3: " << endl;
    cout << "What is your favorite cuisine? 1 - Mexican. 2 - Chinese. 3 - Canadian." << endl;
    cin >> answerThree;
    if (answerThree == 1) {
        score += 100;
        cout << "What is your favorite mexican food? 1 - Burrito. 2 - Taco. 3 - Enchillada." << endl;
        int subAnswerThree;
        cin >> subAnswerThree;
        if (subAnswerThree == 1) {
            score += 100;
        }
        else {
            score += 50;
        }
    }
    else if (answerThree == 2) {
        score += 300;
    }
    else {
        score -= 50;
    }
    //Q4
    int answerFour;
    cout << "Question 4: " << endl;
    cout << "Do you know what 144 is in hex? 1 - 0x90. 2 - 0x144. 3 - 0x864." << endl;
    cin >> answerFour;
    if (answerFour == 1) {
        score += 100;
        cout << "Do you know what opcode 0x90 does in asm? 1 - POP. 2 - NOP. 3 - DUP." << endl;
        int subAnswerFour;
        cin >> subAnswerFour;
        if (subAnswerFour == 2)
            score += 250;
    }
    //Q5
    int answerFive;
    cout << "Question 5: " << endl;
    cout << "Do you like dogs? 1 - Yes. 2 - No. 3 - Cats are better." << endl;
    cin >> answerFive;
    if (answerFive == 1)
        score += 100;
    else if (answerFive == 2)
        score -= 50;
    else
        score -= 300;
    //Q6
    int answerSix;
    cout << "Question 6: " << endl;
    cout << "Can you see color? 1 - Yes. 2 - No. 3 - Can YOU see color?." << endl;
    cin >> answerSix;
    if (answerSix == 1)
        score -= 100;
    else if (answerSix == 2)
        score += 100;
    else
        score -= 300;
    //Output
    cout << "You scored: " << score << endl;
    if (score <= 0)
        cout << "Really? Get out." << endl;
    else if (score >= 1500)
        cout << "I think we're friends!" << endl;
    else
        cout << "I don't think this will work out." << endl;
    return 0;
}
