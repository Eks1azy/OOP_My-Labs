#include "Program.h"

int main() 
{
    std::vector<Example> examples;
    
    examples.push_back(Example(1.0, 2.0, 3.0));
    examples.push_back(Example(2.0, 0.0, -1.0));// виняток з виразоми під коренем 
    examples.push_back(Example(2.0, -1.0, 3.0));// виняток з нулем в знаменнику


    /*
    expressions.push_back(Expression(1.0, 2.0, 3.0));
    expressions.push_back(Expression(1.0, 2.0, 3.0));
    expressions.push_back(Expression(1.0, 2.0, 3.0));
    */
    for (size_t i = 0; i < examples.size(); ++i) {
        try {
            double result = examples[i].Evaluate(); // виклик методу обчислення
            std::cout << "Result " << i + 1 << ": " << result << std::endl;
        }
        catch (const std::exception& error) {
            std::cerr << "Error in example " << i + 1 << ": " << error.what() << std::endl;
        }
    }

    return 0;
}
