#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>

Fl_Input *input;
Fl_Box *output;

void process(Fl_Widget*, void*) {
    std::string text = input->value();
    std::string result = "Halo, " + text;
    output->label(result.c_str());
}

int main() {
    Fl_Window window(400, 300, "Mini App");

    input = new Fl_Input(120, 80, 160, 30, "Nama:");
    Fl_Button btn(150, 130, 100, 40, "Proses");
    output = new Fl_Box(120, 200, 200, 30, "");

    btn.callback(process);

    window.end();
    window.show();
    return Fl::run();
}
