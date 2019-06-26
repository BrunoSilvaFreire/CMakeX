#ifndef CMAKEX_HEADER2_H
#define CMAKEX_HEADER2_H

template<typename T>
void function(void (*callback)(T)) {
    callback(5);
}

void yay(bool i) {
    function<bool>(yay);
}

#endif
