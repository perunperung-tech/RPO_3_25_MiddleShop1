#include <io.h>
#include <fcntl.h>
#include "Authorization.hpp"
#include "Storage.hpp"

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);

    CreateStorage();
    Start();

    return 0;
}