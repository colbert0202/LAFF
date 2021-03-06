//
//  PDDateUtils.h
//  ParseDemo
//
//  Created by zh on 23.04.14.
//  Copyright (c) 2014 Sergii Shevchenko. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FFDateUtils : NSObject

+ (NSDateFormatter *)screeningDateFormatter;
+ (NSDate *)screeningDateWithDateString:(NSString *)dateString andTimeString:(NSString *)timeString;
//+ (NSDateFormatter *)rawTweetDateFormatter;
+ (NSDateFormatter *)screeningScheduleDateFormatter;
+ (NSDateFormatter *)screeningCalendarTimeFormatter;
+ (NSTimeZone *)timezone;

@end
