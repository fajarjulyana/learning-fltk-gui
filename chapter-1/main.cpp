#include <FL/Fl.H>
#include <FL/Fl_Window.H>

int main() {
    Fl_Window window(400, 300, "Chapter 1");
    window.show();
    return Fl::run();
}