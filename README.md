HumanReadableColor
==================

Calculates the closest color name with the help of hsl and rgv values of the color.


1. Import HumanReadableColor header file

```Objective-C
#import "HumanReadableColor.h"
```

2. Import HumanReadableColor header file

```Objective-C
NSColor *color = [NSColor colorWithCalibratedRed:0.5f green:0.5f blue:0.5f alpha:1.0f];
HumanReadableColor *hrc = [[HumanReadableColor alloc] initWithColor: color];

NSString *colorname = [hrc getColorName];
```

3. That's it! You can use the NSString where ever you want.
