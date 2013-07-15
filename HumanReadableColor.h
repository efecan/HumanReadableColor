//
//  HumanReadableColor.h
//  Calculates the closest color name with the help of hsl and rgv values of the color.
//
//  Created by Efecan Erdur on 7/12/13.
//  Copyright (c) 2013 Efecan Erdur. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HumanReadableColor : UIColor

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSArray *colorNames;

- (id)initWithColor:(UIColor *)color;
-(NSString *)getColorName;

@end
