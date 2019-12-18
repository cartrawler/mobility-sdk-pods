/**
 * CTNManager.h
 * CTNSDK
 *
 * Created by Tomi Kankaanpää on 20/06/16.
 * Copyright © 2016 CarTrawler. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class MobilityViewController;
@protocol MobilityDelegate;

@interface MobilitySDKManager : NSObject

@property(nonatomic, weak) id<MobilityDelegate> delegate;

+ (instancetype)sharedManager;
- (BOOL)initWithOptions:(NSDictionary *)launchOptions partnerId:(NSString *)partnerId;
- (BOOL)initWithOptions:(NSDictionary *)launchOptions partnerId:(NSString *)partnerId devMode:(BOOL)devMode;
- (void)closeSdkView;
- (UIView *)getMobilitySdkView;
- (MobilityViewController *)getMobilitySdkView:(NSDictionary *)initialProperties;

@end
