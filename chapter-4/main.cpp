#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>

Fl_Input *input;
Fl_Box *output;

void onClick(Fl_Widget*, void*) {
    output->label(input->value());
}

int main() {
    Fl_Window window(400, 300, "Chapter 4");

    input = new Fl_Input(120, 80, 160, 30);
    Fl_Button btn(150, 130, 100, 40, "Tampilkan");
    output = new Fl_Box(120, 200, 160, 30, "");

    btn.callback(onClick);

    window.end();
    window.show();
    return Fl::run();
}
