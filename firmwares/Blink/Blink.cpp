#include "daisy_seed.h"

using namespace daisy;

DaisySeed hardware;


static void AudioCallback (
  daisy::AudioHandle::InputBuffer  in,
  daisy::AudioHandle::OutputBuffer out,
  size_t size) {

  // Pass audio IN thru
  memcpy(out[0], in[0], size * sizeof(float));
  memcpy(out[1], in[1], size * sizeof(float));
}


int main (void) {
  // initializations
  hardware.Configure();
  hardware.Init();

  // Setup audio callback
  hardware.SetAudioSampleRate(SaiHandle::Config::SampleRate::SAI_48KHZ);
  hardware.SetAudioBlockSize(32);
  hardware.StartAudio(AudioCallback);

  // Main loop
  int speed = 0;
  while (true) {
    if (--speed <= 0) speed = 20;
    hardware.SetLed(true);
    System::Delay(20);
    hardware.SetLed(false);
    System::Delay(speed * 20);
  }
}
