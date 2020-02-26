#pragma once
#include <gst/gst.h>

/* Structure to contain all our information, so we can pass it to callbacks */
typedef struct _CustomData
{
    GstElement* pipeline;
    GstElement* source;
    GstElement* convert;
    GstElement* resample;
    GstElement* sink;
} CustomData;

/* Handler for the pad-added signal */
static void pad_added_handler(GstElement* src, GstPad* pad,
    CustomData* data);

int tutoria3(int, char* []);

