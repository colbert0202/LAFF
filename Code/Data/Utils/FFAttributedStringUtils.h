//
//  FFAttributedStringUtils.h
//  laff
//
//  Created by zh on 15.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FFAttributedStringUtils : NSObject

+ (NSAttributedString *)attributedStringWithTextParams:(NSDictionary *)textParams andHTML:(NSString *)HTML;

@end
