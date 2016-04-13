//
//  FFLastTweetCell.h
//  laff
//
//  Created by Sergii Shevchenko on 17.03.15.
//  Copyright (c) 2015 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFLastTweetCellIdentifier;

@interface FFLastTweetCell : UITableViewCell

+ (CGFloat)heightWithTweet:(NSDictionary *)tweet width:(CGFloat)width;
- (void)updateWithTweet:(NSDictionary *)tweet;

@end
