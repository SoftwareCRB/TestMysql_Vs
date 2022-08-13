#include <iostream>
#include <mysql.h>

using namespace std;

int main()
{
    MYSQL* conexion;

    conexion = mysql_init(0);
    conexion = mysql_real_connect(conexion, "localhost", "testuser", "tstomate", "divisionpolitica", 3306, NULL, 0);

    if (conexion) {
        cout << "conexion exitosa" << endl;
    }
    else {
        cout << "Error en la conexion" << endl;
    }

    system("pause");

    return 0;
}
