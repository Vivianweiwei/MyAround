//
//  SCHomeTableViewCell.h
//  SocialProject
//
//  Created by Vivian02 on 8/20/17.
//  Copyright © 2017 Vivian02. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell

- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end
