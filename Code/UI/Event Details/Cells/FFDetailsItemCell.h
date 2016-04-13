//
//  FFDetailsItemCell.h
//  laff
//
//  Created by zh on 5.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFDetailsItemCellIdentifier;

@interface FFDetailsItemCell : UITableViewCell

- (void)updateWithTitle:(NSString *)title description:(NSString *)description;
- (void)updateWithTitle:(NSString *)title attributedDescription:(NSAttributedString *)description;

+ (CGFloat)heightWithText:(NSString *)text width:(CGFloat)width;
+ (CGFloat)heightWithAttributedText:(NSAttributedString *)atext width:(CGFloat)width;

@end
