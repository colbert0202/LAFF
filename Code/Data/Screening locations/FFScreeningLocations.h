//
//  FFScreeningLocations.h
//  laff
//
//  Created by zh on 20.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFScreeningLocation.h"

@interface FFScreeningLocations : NSObject

+ (instancetype)instance;

- (FFScreeningLocation *)locationWithName:(NSString *)locationName;
- (FFScreeningLocation *)locationWithCode:(NSString *)locationCode;

@end
