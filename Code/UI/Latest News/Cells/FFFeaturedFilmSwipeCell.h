//
//  FFFeaturedFilmSwipeCell.h
//  laff
//
//  Created by Sergii Shevchenko on 16.03.15.
//  Copyright (c) 2015 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Event.h"

extern NSString * const FFFeaturedFilmSwipeCellIdentifier;
extern CGFloat const FFFeaturedFilmSwipeCellHeight;

@interface FFFeaturedFilmSwipeCell : UITableViewCell

@property (nonatomic, copy) emptyBlock onSelect;
@property (nonatomic, strong) Event * currentEvent;

- (void)initWithFeaturedEvents:(NSArray *)featuredEvents;
- (void)updateStatuses;

@end
