//
//  SCLocationManager.h
//  SocialProject
//
//  Created by Vivian02 on 8/22/17.
//  Copyright © 2017 Vivian02. All rights reserved.
//


#import <Foundation/Foundation.h>
@class CLLocation;

extern NSString * const SCLocationUpdateNotification;

@interface SCLocationManager : NSObject

+ (instancetype)sharedManager;
- (void)getUserPermission;
+ (BOOL)isLocationServicesEnabled;
- (void)startLoadUserLocation;
- (void)stopLoadUserLocation;
- (CLLocation *)getUserCurrentLocation;

@end
