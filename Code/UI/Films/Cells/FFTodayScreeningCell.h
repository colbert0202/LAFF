//
//  FFTodayScreeningCell.h
//  laff
//
//  Created by zh on 2.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Screening.h"

extern NSString * const FFTodayScreeningCellIdentifier;
extern CGFloat const FFTodayScreeningCellHeight;

@interface FFTodayScreeningCell : UITableViewCell

@property (nonatomic, strong) Screening * screening;

@end
