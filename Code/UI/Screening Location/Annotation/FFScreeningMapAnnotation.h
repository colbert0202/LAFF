//
//  FFScreeningMapAnnotation.h
//  laff
//
//  Created by zh on 5.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface FFScreeningMapAnnotation : NSObject <MKAnnotation>

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;

@end
