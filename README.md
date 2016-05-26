# JUCE_Fluidsynth
A simple JUCE class to demonstrate using the Fluidsynth library with JUCE.

GLib is a dependency of fluidsynth.

For OS X, iOS, Linux, and Android, the source code of GLIB is included in the project, so this code should work right out of the box.

For Windows, you need to link the [GTK++ Runtime](https://sourceforge.net/projects/gtk-win/) for this to work.

I've successfully tested it on OS X (10.8 and above, including El Capitan), Debian, Ubuntu 14.04, iOS (7 and above), Android Marshmallow, Windows 7, Windows 8.1, and Windows 10. Let me know if you have any issues with it.

It's also been used successfully for the Tufts University class Music Apps on the iPad.

Fluidsynth and Glib are licensed under the LGPL. Since there are a few modifications to each here, this has also been released under the LGPL license.