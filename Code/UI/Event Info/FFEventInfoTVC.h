//
//  FFEventInfoTVC.h
//  laff
//
//  Created by zh on 30.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Event.h"
#import "Screening.h"

extern NSString * const FFEventInfoTVCIdentifier;

@interface FFEventInfoTVC : UITableViewController

@property (nonatomic, strong) Event * event;
@property (nonatomic, strong) Screening * screening;

@end
