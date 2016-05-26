/*
  ==============================================================================

    Fluidsynth.cpp
    Created: 31 Jan 2016 4:43:50pm
    Author:  Chris Penny

  ==============================================================================
*/

#include "pm_Fluidsynth.h"

Fluidsynth::Fluidsynth()
:
currentSoundfont(-1)
{
    settings = new_fluid_settings ();
    synth 	 = new_fluid_synth    (settings);

    fluid_synth_set_gain      (synth, 10.0);
    fluid_synth_set_polyphony (synth, 256);
}

Fluidsynth::~Fluidsynth()
{
    delete_fluid_synth    (synth);
    delete_fluid_settings (settings);
}

void Fluidsynth::allNotesOff()
{
    fluid_synth_all_notes_off(synth, 1);
}

void Fluidsynth::loadSoundfont(const String& soundfont)
{
    std::cerr << "Loading Soundfont: " << soundfont << endl;

    fluid_synth_all_notes_off(synth, 1);

    if (currentSoundfont != -1) {
        fluid_synth_sfunload(synth, currentSoundfont, 0);
    }

	currentSoundfont = fluid_synth_sfload(synth, soundfont.toRawUTF8(), 1));
}

void Fluidsynth::processNote(int note, int velocity)
{
    std::cerr << "fluidsynth note: " << note << " " << velocity << std::endl;
    
    if (note > 0 && noteNumber < 127) {
        if (velocity == 0) {
            fluid_synth_noteoff (synth, 1, note);
        }
        else {
            fluid_synth_noteon (synth, 1, note, velocity);
        }
    }
}

void Fluidsynth::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{
    fluid_synth_set_sample_rate (synth, sampleRate);
}

void Fluidsynth::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill)
{
    bufferToFill.clearActiveBufferRegion();
    
    fluid_synth_write_float (synth, 
    						 bufferToFill.buffer->getNumSamples(),
    						 bufferToFill.buffer->getWritePointer(0), 0, 1, 
    						 bufferToFill.buffer->getWritePointer(1), 0, 1);
}

void Fluidsynth::releaseResources()
{
	delete_fluid_synth    (synth);
    delete_fluid_settings (settings);
}

