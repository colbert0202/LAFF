//
//  FFEventDetailsCell.m
//  laff
//
//  Created by zh on 30.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import "FFEventDetailsCell.h"
#import "FFConstants.h"
#import "UIColor+RGB.h"

NSString * const FFEventDetailsCellIdentifier = @"Event Details";
CGFloat const FFEventDetailsCellHeight = 80.f;
CGFloat const FFEventDetailsCellHeightNoText = 44.f;

@implementation FFEventDetailsCell

- (void)awakeFromNib {
	self.cellTitle.textColor = [UIColor colorFromRGB:FFConstantTintColor];
}

@end
