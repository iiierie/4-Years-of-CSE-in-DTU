#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char var = 'a';
    // try block - for exception code
    try
    {
        // Inside try block
        if (var == 'a' || var =='A')
        {
            throw var;
            // Skip all code after throw
        }
    } // catch block
    catch (int ex)
    {
        // Code executed when exception Catch with float type
        cout << "int Exception catch : Value :" << ex;
    }
    catch (float ex)
    {
        // Code executed when exception Catch with float type
        cout << "Float Exception catch : Value :" << ex;
    }
    catch (double ex)
    {
        // Code executed when exception Catch with float type
        cout << "Double Exception catch : Value :" << ex;
    }
    catch (...)
    {

        cout << "This is Catch All Block.";
    }
    getch();
    return 0;
}