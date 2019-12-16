cp mainpage.c ~/q/code/arduino/sketchbook/libraries/snot/.
cp snot.h ~/q/code/arduino/sketchbook/libraries/snot/.
cp snot.c ~/q/code/arduino/sketchbook/libraries/snot/.
rsync -av  --delete-during ~/q/code/arduino/sketchbook/* ~/q/edu/www/edu/doc/arduino/sketchbook/
 
cp mainpage.c ~/q/code/arduino/sketchbook/libraries/krnl/.
cp krnl.h ~/q/code/arduino/sketchbook/libraries/krnl/.
cp krnl.c ~/q/code/arduino/sketchbook/libraries/krnl/.
rsync -av  --delete-during ~/q/code/arduino/sketchbook/* ~/q/edu/www/edu/doc/arduino/sketchbook/
doxygen
rsync -av  --delete-during krnl-doxygen ~/q/edu/www/edu/doc/arduino/krnl/

  
 
