/**
 * MobilitySDKManager.h
 * MobilitySDK
 *
 * Created by Tomi Kankaanpää on 20/06/16.
 * Copyright © 2016 CarTrawler. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Environments.h"

@class MobilityViewController;
@class DeeplinkDataManager;
@class MobilitySwiftEvents;
@class RequestHandler;

@protocol MobilityDelegate;

@interface MobilitySDKManager : NSObject

@property(nonatomic, strong) id<MobilityDelegate> delegate;

+ (instancetype)sharedManager;
- (BOOL)initWithOptions:(NSDictionary *)launchOptions partnerId:(NSString *)partnerId;
- (BOOL)initWithOptions:(NSDictionary *)launchOptions partnerId:(NSString *)partnerId environment:(EnvironmentEnum)environment;
- (void)closeSdkView;
- (void)setLocale:(NSString *)locale;
- (void)setPushToken:(NSString *)pushToken;
- (void)setUserToken:(NSString *)userToken;
- (void)resetUserToken;
- (void)setPNR:(NSString *)PNR;
- (void)addFlight:(NSString *)originIATA destinationIATA:(NSString *)destinationIATA flightNumber:(NSString *)flightNumber flightDepartureDate:(NSString *)flightDepartureDate flightArrivalDate:(NSString *)flightArrivalDate originAirportName:(NSString *)originAirportName destinationAirportName:(NSString *)destinationAirportName;
- (void)addFlight:(NSString *)originIATA destinationIATA:(NSString *)destinationIATA flightNumber:(NSString *)flightNumber flightDate:(NSString *)flightDate __attribute__((deprecated));
- (void)openMobility:(UIViewController *)vc type:(NSString *)type source:(NSString *)source campaign:(NSString *)campaign medium:(NSString *)medium;
- (void)showMobilityFromNotification:(UIViewController *)vc userInfo:(NSDictionary *)userInfo;
- (void)showBackButton:(BOOL)showBackButton;
- (BOOL)isNotificationOriginMobility:(NSDictionary *)userInfo;
- (void)setAppLink:(NSURL *)url;
- (void) killMobility;
- (void)setUserData:(NSString*)firstName lastName:(NSString*)lastName email:(NSString*)email mobileNumber:(NSString*)mobileNumber;
- (void) resetUserData;
- (void)showMobilityFromAppDeeplinkURL:(NSString *)encodedDeeplinkUrl viewController:(UIViewController *)viewController;
@end
