//
//  FFLatestNewsTitleCell.m
//  laff
//
//  Created by Sergii Shevchenko on 17.03.15.
//  Copyright (c) 2015 The Queue Incorporated. All rights reserved.
//

#import "FFLatestNewsTitleCell.h"
#import "FFConstants.h"

#import "UIColor+RGB.h"

NSString * const FFLatestNewsTitleCellIdentifier = @"title";

@implementation FFLatestNewsTitleCell

- (void)awakeFromNib {
	[super awakeFromNib];
	
	self.field.textColor = [UIColor colorFromRGB:FFConstantTintColor];
}

@end
