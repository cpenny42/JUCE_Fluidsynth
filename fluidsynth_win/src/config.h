/* src/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to enable ALSA driver */
#undef ALSA_SUPPORT

/* Define to activate sound output to files */
#undef AUFILE_SUPPORT

/* whether or not we are supporting CoreAudio */
#undef COREAUDIO_SUPPORT

/* whether or not we are supporting CoreMIDI */
#undef COREMIDI_SUPPORT

/* whether or not we are supporting DART */
#undef DART_SUPPORT

/* Define if building for Mac OS X Darwin */
#undef DARWIN

/* Define to enable D-Bus support */
#undef DBUS_SUPPORT

/* Define to activate debugging message */
#undef DEBUG

/* Define to enable FPE checks */
#undef FPE_CHECK

/* Define to 1 if you have the <arpa/inet.h> header file. */
#undef HAVE_ARPA_INET_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <errno.h> header file. */
#undef HAVE_ERRNO_H

/* Define to 1 if you have the <fcntl.h> header file. */
#undef HAVE_FCNTL_H

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* whether or not we are supporting ladcca */
#undef HAVE_LADCCA

/* whether or not we are supporting lash */
#undef HAVE_LASH

/* Define to 1 if you have the `dl' library (-ldl). */
#undef HAVE_LIBDL

/* Define to 1 if you have the `MidiShare' library (-lMidiShare). */
#undef HAVE_LIBMIDISHARE

/* Define to 1 if you have the `pthread' library (-lpthread). */
#undef HAVE_LIBPTHREAD

/* Define to 1 if you have the <limits.h> header file. */
#undef HAVE_LIMITS_H

/* Define to 1 if you have the <machine/soundcard.h> header file. */
#undef HAVE_MACHINE_SOUNDCARD_H

/* Define to 1 if you have the <math.h> header file. */
#undef HAVE_MATH_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the <MidiShare.h> header file. */
#undef HAVE_MIDISHARE_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#undef HAVE_NETINET_TCP_H

/* Define to 1 if you have the <pthread.h> header file. */
#undef HAVE_PTHREAD_H

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H

/* Define to 1 if you have the <stdarg.h> header file. */
#undef HAVE_STDARG_H

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdio.h> header file. */
#undef HAVE_STDIO_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/mman.h> header file. */
#undef HAVE_SYS_MMAN_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/soundcard.h> header file. */
#undef HAVE_SYS_SOUNDCARD_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the <windows.h> header file. */
#undef HAVE_WINDOWS_H

/* Define to enable JACK driver */
#undef JACK_SUPPORT

/* Include the LADSPA Fx unit */
#undef LADSPA

/* libsndfile has ogg vorbis support */
#undef LIBSNDFILE_HASVORBIS

/* Define to enable libsndfile support */
#undef LIBSNDFILE_SUPPORT

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Define to enable MidiShare driver */
#undef MIDISHARE_SUPPORT

/* Define if using the MinGW32 environment */
#undef MINGW32

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Define to enable OSS driver */
#undef OSS_SUPPORT

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to enable PortAudio driver */
#undef PORTAUDIO_SUPPORT

/* Define to enable PulseAudio driver */
#undef PULSE_SUPPORT

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define to enable SIGFPE assertions */
#undef TRAP_ON_FPE

/* Version number of package */
#undef VERSION

/* Define to do all DSP in single floating point precision */
#undef WITH_FLOAT

/* Define to profile the DSP code */
#undef WITH_PROFILING

/* Define to use the readline library for line editing */
#undef WITH_READLINE

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif
