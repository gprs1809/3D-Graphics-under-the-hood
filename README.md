# 3D-Graphics-under-the-hood

This is a repository for what I learnt in the extremely fun and comprehensive course by Gustavo Pezzi (https://pikuma.com/). I highly recommend it to anyone curious like me about Graphics. The codes are very similar to what he covered during the course and I tried to code it along with him during the course. I just made a few changes for it to work on windows and with VS. We don't use any graphics card or Graphics API in the course. Everything is run on CPU using C and SDL, the purpose was to learn 3D Graphics under the hood. Some things that I still need to work on:

1) The images are being read from .obj files and the textures from .png files. To read and decode the .png files, we used https://github.com/elanthis/upng, but that is not working for me and it throws some read access violation errors (though I have made the necessary changes to upng.c for it to work with windows). I am yet to resolve that. Just to ensure I can work with some texture, What I have used for textures for any .obj file is the hardcoded texture in texture.c called REDBRICK_TEXTURE, also provided in the course for a general cube.obj file. 
For future, I would try finding the cause of and resolving the errors with upng and I can also try reading textures from .png files using Python and use that in C or I could try running this on a linux VM, there are issues to work with this on WSL. 

2) Gustavo did some refactoring of codes where he swicthed from several global variables to local ones using 'static' and used certain functions within the .c files to get and set the values for those variables. I am yet to try this. In the current codes in this repository, almost every variable is a global variable declared in the header files. 

3) I am yet to incorporate codes where we render multiple meshes or images from multiple .obj files.

I can't thank Gustavo enough for this course. He was superb and always quick in responding to any questions I asked on the discussion forum. 
