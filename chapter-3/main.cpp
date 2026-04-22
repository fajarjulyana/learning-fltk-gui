#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <iostream>

void onClick(Fl_Widget*, void*) {
    std::cout << "Button ditekan!\n";
}

int main() {
    Fl_Window window(400, 300, "Chapter 3");

    Fl_Button btn(150, 120, 100, 40, "Klik");
    btn.callback(onClick);

    window.end();
    window.show();
    return Fl::run();
}
