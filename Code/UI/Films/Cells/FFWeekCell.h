//
//  FFWeekCell.h
//  laff
//
//  Created by zh on 1.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFWeekCellIdentifier;
extern CGFloat const FFWeekCellHeight;

typedef void (^FFWeekCellDayChanged)(NSDate * date);

@interface FFWeekCell : UITableViewCell <UIScrollViewDelegate>

@property (nonatomic, strong) FFWeekCellDayChanged onDayChange;

@property (nonatomic, assign) CGFloat tableWidth;

- (void)initDates;
- (void)initDatesForMySchedule:(BOOL)useMySchedule;
- (void)selectActualDay;
- (void)selectDate:(NSDate *)date;

@end
