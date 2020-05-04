#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

#include <gio/gio.h>

#include "bbexample.h"

void app_activate (GApplication *application,
                   gpointer      user_data)
{
  g_print("Application is activate\n");
}

int main(int argc, char *argv[])
{
  printf("Hello Yocto World...\n");

  LibHelloWorld();

  GApplication *app;
  app = g_application_new("com.github.alvaropg.bbexample", G_APPLICATION_FLAGS_NONE);
  g_signal_connect(app, "activate", G_CALLBACK(app_activate), NULL);
  return g_application_run(app, argc, argv);
}





