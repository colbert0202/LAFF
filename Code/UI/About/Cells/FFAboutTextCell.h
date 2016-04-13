//
//  FFAboutTextCell.h
//  laff
//
//  Created by zh on 28.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFAboutTextCellIdentifier;

@interface FFAboutTextCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UITextView *textView;

+ (CGFloat)heightWithAText:(NSAttributedString *)atext width:(CGFloat)width;
+ (CGFloat)heightWithText:(NSString *)text width:(CGFloat)width;
+ (CGFloat)heightWithText:(NSString *)text font:(UIFont *)font width:(CGFloat)width;

@end
