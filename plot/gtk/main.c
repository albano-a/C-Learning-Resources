#include <gtk/gtk.h>

static int count = 0;
static GtkWidget *label;

static void on_button_clicked(GtkWidget *button, gpointer user_data) {
    count++;
    char buffer[50];
    snprintf(buffer, sizeof(buffer), "Button clicked %d times", count);
    gtk_label_set_text(GTK_LABEL(label), buffer);
}

static void on_activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *box;

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Counter App");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), box);

    label = gtk_label_new("Button clicked 0 times");
    gtk_box_pack_start(GTK_BOX(box), label, TRUE, TRUE, 0);

    button = gtk_button_new_with_label("Click me");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 0);

    gtk_widget_show_all(window);
}

int main(int argc, char **argv) {
    GtkApplication *app;
    int status;

    app = gtk_application_new("com.example.GtkApplication", G_APPLICATION_FLAGS_NONE);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}
