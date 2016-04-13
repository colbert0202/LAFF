//
//  FFFilmSearchCell.h
//  laff
//
//  Created by zh on 30.04.14.
//  Copyright (c) 2014 The Queue Incorporated. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const FFFilmSearchCellIdentifier;
extern CGFloat const FFFilmSearchCellHeight;

typedef void (^FFFilmSearchCellTextDidChange)(NSString * text);

@interface FFFilmSearchCell : UITableViewCell <UISearchBarDelegate>

@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;

@property (nonatomic, copy) FFFilmSearchCellTextDidChange onTextDidChange;
@property (nonatomic, copy) emptyBlock onFocus;
@property (nonatomic, copy) emptyBlock onUnfocus;

@end
