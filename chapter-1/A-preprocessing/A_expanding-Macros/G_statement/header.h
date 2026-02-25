#define prompt "Enter X,Y: "
#define qPrompt "Do you wanna reset? (1.YES, 2.NO): "
#define outputMessage "The values are: %d ||| %d\n"
#define invalidMessage "Invalid Input\n"

// conditional
// #define reset(x, y) \
//     do              \
//     {               \
//         x = 0;      \
//         y = 0;      \
//     } while (0)

// un-conditional
#define reset(x, y) \
    x = 0;          \
    y = 0
