//
//  FFEventDetailsCell.h
//  laff
//
//  Created by zh on 30.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFEventDetailsCellIdentifier;
extern CGFloat const FFEventDetailsCellHeight;
extern CGFloat const FFEventDetailsCellHeightNoText;

@interface FFEventDetailsCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *cellTitle;
@property (weak, nonatomic) IBOutlet UILabel *cellDescription;

@end
