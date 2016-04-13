//
//  FFPlayingScreeningsCell.h
//  laff
//
//  Created by Sergii Shevchenko on 17.03.15.
//  Copyright (c) 2015 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Screening.h"

extern NSString * const FFPlayingScreeningCellIdentifier;
extern CGFloat const FFPlayingScreeningCellHeight;

@interface FFPlayingScreeningCell : UITableViewCell

- (void)updateWithScreening:(Screening *)screening;

@end
