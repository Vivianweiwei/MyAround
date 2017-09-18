//
//  SCPost.h
//  SocialProject
//
//  Created by Vivian02 on 8/17/17.
//  Copyright © 2017 Vivian02. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CLLocation;

@interface SCPost : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) CLLocation *location;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
