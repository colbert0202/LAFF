//
//  FFScreeningLocationVC.h
//  laff
//
//  Created by zh on 5.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "FFScreeningLocation.h"

@interface FFScreeningLocationVC : UIViewController <MKMapViewDelegate>

@property (nonatomic, strong) FFScreeningLocation * location;

@end
