#include <iostream>
#include <fstream>
#include "../library/proses.h"
int main () {
  Proses proses;
  proses.getData();
  proses.tulis();
  proses.Hitung(proses.totalmatkul, proses.i);
  proses.selesaitulis();
}