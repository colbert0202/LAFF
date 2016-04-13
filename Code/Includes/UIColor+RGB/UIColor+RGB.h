//
//  UIColor+utils.h
//  storink
//
//  Created by zh on 27.05.13.
//  Copyright (c) 2013 zh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (RGB)
+ (UIColor *) colorFromRGBString:(NSString *)hexstr;
+ (UIColor *) colorFromRGB:(NSInteger)rgb;
+ (UIColor *) colorFromRGB:(NSInteger)rgb andAlpha:(float)alpha;
@end
