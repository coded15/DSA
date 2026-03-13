#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int result(string oper, int firstOperand, int secondOperand)
    {
        if (oper == "+")
        {
            return firstOperand + secondOperand;
        }
        if (oper == "-")
        {
            return firstOperand - secondOperand;
        }
        if (oper == "*")
        {
            return firstOperand * secondOperand;
        }
        if (oper == "/")
        {
            return firstOperand / secondOperand;
        }
        return 0;
    }
    int evalRPN(vector<string> &tokens)
    {
        stack<int> reversePolishNotation;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int first = reversePolishNotation.top();
                reversePolishNotation.pop();
                reversePolishNotation.top() = result(tokens[i], first, reversePolishNotation.top());
                cout << reversePolishNotation.top() << endl;
            }
            else
                reversePolishNotation.push(atoi(tokens[i].c_str()));
        }
        return reversePolishNotation.top();
    }
};

int main()
{
    int n;
    cin >> n;
    vector<string> input;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        input.push_back(x);
    }
    Solution calculateReversePolishResult;
    return calculateReversePolishResult.evalRPN(input);
}

/** First attempt
 *
 * This wont work because, it's not necessary that after every two numbers will be an operator
class Solution {
public:
    int result(string oper, int firstOperand, int secondOperand)
    {
        if(oper == "+")
        {
            return firstOperand + secondOperand;
        }
        if(oper == "-")
        {
            return firstOperand - secondOperand;
        }
        if(oper == "*")
        {
            return firstOperand * secondOperand;
        }
        if(oper == "/")
        {
            return firstOperand / secondOperand;
        }
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        int finalResult = atoi(tokens[0].c_str());
        for(int i = 1; i < tokens.size() - 1; i++)
        {
            int firstOperand = finalResult;
            int secondOperand = atoi(tokens[i].c_str());
            finalResult = result(tokens[++i], firstOperand, secondOperand);
        }
        return finalResult;
    }
};

*/
