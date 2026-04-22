#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

int main() {
    Fl_Window window(400, 300, "Chapter 2");

    Fl_Button btn(150, 120, 100, 40, "Klik Saya");

    window.end();
    window.show();
    return Fl::run();
}
