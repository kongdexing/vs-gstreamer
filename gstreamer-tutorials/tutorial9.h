#include <string.h>
#include <gst/gst.h>
#include <gst/pbutils/pbutils.h>

/* Structure to contain all our information, so we can pass it around */
typedef struct _CustomData9
{
    GstDiscoverer* discoverer;
    GMainLoop* loop;
} CustomData9;

int tutorial9(int, char* []);
