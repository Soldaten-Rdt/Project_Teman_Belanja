#include <iostream>
#include "webui.h"

void handle_daftar(webui_event_t* e) {
    std::cout << "Daftar Belanja diklik!" << std::endl;
    webui_run(e->window, "alert('Membuka Daftar Belanja...');");
}

void handle_inventaris(webui_event_t* e) {
    std::cout << "Inventaris diklik!" << std::endl;
}

void handle_keuangan(webui_event_t* e) {
    std::cout << "Hitung Keuangan diklik!" << std::endl;
}

int main() {
    size_t window = webui_new_window();
    
    // ✅ Bind functions
    webui_bind(window, "handle_daftar", handle_daftar);
    webui_bind(window, "handle_inventaris", handle_inventaris);
    webui_bind(window, "handle_keuangan", handle_keuangan);
    
    // ✅ Show dari file HTML
    webui_show(window, "index.html");
    
    webui_wait();
    return 0;
}