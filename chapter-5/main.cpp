#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>

int main() {
    Fl_Window window(400, 300, "Chapter 5");

    Fl_Group group(50, 50, 300, 200);
    Fl_Button b1(60, 60, 80, 40, "A");
    Fl_Button b2(160, 60, 80, 40, "B");
    Fl_Button b3(110, 120, 80, 40, "C");
    group.end();

    window.end();
    window.show();
    return Fl::run();
}
