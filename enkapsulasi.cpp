#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNo[10];
public:
    void setSaklarNo(int i, string value)
    {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i)
    {
        return saklarNo[i];
    }
};

int main()
{
    remoteLampu lampuRumah;
    lampuRumah.setSaklarNo(0, "lampu teras rumah");
    lampuRumah.setSaklarNo(1, "lampu ruang tamu");
    lampuRumah.setSaklarNo(2, "lampu kamar tidur");
    lampuRumah.setSaklarNo(3, "lampu dapur");
    cout << lampuRumah.getSaklarNo(0) <<endl;
    cout << lampuRumah.getSaklarNo(1) <<endl;
    cout << lampuRumah.getSaklarNo(2) <<endl;
    cout << lampuRumah.getSaklarNo(3) <<endl;
    return 0;
}