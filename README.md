HumanReadableColor
==================

Calculates the closest color name with the help of hsl and rgv values of the color. CIE94 formula is used for the calculation matrix (http://en.wikipedia.org/wiki/Color_difference#CIE94)


Usage
------------- 
1. Import HumanReadableColor header file

```objective-c
#import "HumanReadableColor.h"
```

2. Initialize HumanReadableColor with a standard NSColor object.

```objective-c
NSColor *color = [NSColor colorWithCalibratedRed:0.5f green:0.5f blue:0.5f alpha:1.0f];
HumanReadableColor *hrc = [[HumanReadableColor alloc] initWithColor: color];

NSString *colorName = [hrc getColorName];
```

3. That's it! You can use the NSString wherever you want.


Credits
------------- 
My name is Efecan Erdur, my friends call me Efe. You can follow me [@efecan](http://twitter.com/efecan).


Licence
------------- 
You can do whatever you want with this little code. It'd be nice if you just reference me.