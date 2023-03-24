//
// Created by Damian on 24.03.2023.
//

#include "message.h"

/*std::move() jest funkcją biblioteki standardowej C++,
 * która umożliwia przeniesienie zasobów (np. alokowanych pamięci)
 * z jednego obiektu do drugiego. W szczególności, jest to przydatne,
 * gdy chcemy przenieść zasoby z obiektu tymczasowego,
 * który już nie będzie używany, do nowego obiektu.
*/
message::message(int ind, user &nad, user &odb, std::string tresc) : nadawca(nad), odbiorca(odb), indeks(ind), tresc(std::move(tresc)){
}
