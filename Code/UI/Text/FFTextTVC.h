//
//  FFTextTVC.h
//  laff
//
//  Created by zh on 19.05.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFTextTVCIdentifier;

@interface FFTextTVC : UITableViewController

@property (nonatomic, strong) NSString * text;
@property (nonatomic, strong) NSAttributedString * atext;

@end
