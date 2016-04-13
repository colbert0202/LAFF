//
//  FFTweetCell.h
//  laff
//
//  Created by zh on 29.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFTweetCellIdentifier;

@interface FFTweetCell : UITableViewCell

+ (CGFloat)heightWithTweet:(NSDictionary *)tweet width:(CGFloat)width;
- (void)updateWithTweet:(NSDictionary *)tweet;

@end
