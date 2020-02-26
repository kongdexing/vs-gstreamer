#include <gst/gst.h>

/* Structure to contain all our information, so we can pass it around */
typedef struct _CustomData4
{
    GstElement* playbin;          /* Our one and only element */
    gboolean playing;             /* Are we in the PLAYING state? */
    gboolean terminate;           /* Should we terminate execution? */
    gboolean seek_enabled;        /* Is seeking enabled for this media? */
    gboolean seek_done;           /* Have we performed the seek already? */
    gint64 duration;              /* How long does this media last, in nanoseconds */
} CustomData4;

/* Forward definition of the message processing function */
static void handle_message(CustomData4* data, GstMessage* msg);

int tutoria4(int, char* []);