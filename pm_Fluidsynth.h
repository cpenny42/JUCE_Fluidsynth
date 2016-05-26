/*
  ==============================================================================

    Fluidsynth.h
    Created: 31 Jan 2016 4:43:50pm
    Author:  Chris Penny

  ==============================================================================
*/

#ifndef JUCE_FLUIDSYNTH_H_INCLUDED
#define JUCE_FLUIDSYNTH_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

#if JUCE_WINDOWS
	#include "fluidsynth/include/fluidsynth.h"
#elif JUCE_MAC
	#include "fluidsynth_mac/fluidsynth/fluidsynth/include/fluidsynth.h"
#endif

class Fluidsynth: public AudioSource
{
    
public:
    
     Fluidsynth ();
    ~Fluidsynth ();
    
    void loadSoundfont (const String& soundfont);
    
    void processNote (int noteNumber, int velocity) override;
        
    void prepareToPlay     (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)     override;
    void releaseResources  () 											    override;
        
    void allNotesOff ();
            
private:
    
    fluid_settings_t *settings;
    fluid_synth_t *synth;

    int currentSoundfont;
};

#endif  // JUCE_FLUIDSYNTH_H_INCLUDED
