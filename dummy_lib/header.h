#ifndef CMAKEX_HEADER2_H
#define CMAKEX_HEADER_H

template<typename T>
void function(void (*callback)(T)) {
    callback(5);
}

void yay(int i) {
    function<int>(yay);
}

#endif
