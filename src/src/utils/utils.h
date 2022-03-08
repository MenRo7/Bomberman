#ifndef __UTILS__
#define __UTILS__

namespace utils {

    enum Direction {
        TOP, 
        BOTTOM, 
        LEFT, 
        RIGHT, 
        STAY
    };

    enum BombState {
        INERT,
        EXPLOSING
    };
}

#endif