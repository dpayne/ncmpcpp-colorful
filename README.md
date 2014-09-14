ncmpcpp
=======

This is a version of ncmpcpp with more colorful visualizers. The original can be found here http://ncmpcpp.rybczak.net/

Currently, the new visualizers are simple modifications to add color to the existing visualizers. The available visualizers are wave, wave_color, wave_ascii_color, spectrum, and spectrum_color.

Your ncmpcpp config should look something like this

```
visualizer_fifo_path = "/tmp/mpd.fifo"
visualizer_output_name = "my_fifo"
visualizer_sync_interval = "30"
visualizer_in_stereo = "yes"
visualizer_type = "wave"
#visualizer_type = "spectrum"

```

Your mpd config should include an output for the visualizer to use.

```
audio_output {
    type                    "fifo"
    name                    "my_fifo"
    path                    "/tmp/mpd.fifo"
    format                  "44100:16:2"
}

```

#### ScreenShots

![Wave Form](https://raw.githubusercontent.com/dpayne/ncmpcpp-colorful/master/imgs/waveform_color.png)
