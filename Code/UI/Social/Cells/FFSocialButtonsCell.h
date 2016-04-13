//
//  FFSocialButtonsCell.h
//  laff
//
//  Created by zh on 29.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFSocialButtonsCellIdentifier;
extern CGFloat const FFSocialButtonsCellHeight;

typedef void (^FFSocialButtonsCellFacebookTaped)();

@interface FFSocialButtonsCell : UITableViewCell

@property (nonatomic, strong) FFSocialButtonsCellFacebookTaped onFacebookTaped;

@end
