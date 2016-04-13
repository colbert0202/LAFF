//
//  FFFeaturedFilmVCViewController.h
//  laff
//
//  Created by Sergii Shevchenko on 16.03.15.
//  Copyright (c) 2015 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Event.h"

extern NSString * const FFFeaturedFilmVCViewControllerIdentifier;

typedef void (^FFFeaturedFilmVCViewControllerFavoriteChanged)(BOOL isFavorite);

@interface FFFeaturedFilmVCViewController : UIViewController

@property (nonatomic, strong) Event * event;

@property (nonatomic, assign, readonly) BOOL heartButtonPressing;

@property (nonatomic, strong) FFFeaturedFilmVCViewControllerFavoriteChanged onFavoriteChange;

- (void)updateStatuses;

@end
