//
//  FFEventImageTitleCell.h
//  laff
//
//  Created by zh on 30.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Event.h"

extern NSString * const FFEventImageTitleCellIdentifier;
extern CGFloat const FFEventImageTitleCellHeight;

typedef void (^FFEventImageTitleCellFavoriteChanged)(BOOL isFavorite);

@interface FFEventImageTitleCell : UITableViewCell

@property (nonatomic, strong) Event * event;
@property (nonatomic, strong) FFEventImageTitleCellFavoriteChanged onFavoriteChange;

@property (nonatomic, assign) BOOL parallaxEnabled;

- (void)updateWithScrollPercentage:(float)percent;

@property (nonatomic, strong, readonly) UIImage * image;

@end
