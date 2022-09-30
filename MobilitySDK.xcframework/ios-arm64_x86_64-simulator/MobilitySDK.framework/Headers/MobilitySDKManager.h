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
#import "TripType.h"
#import "PickupTimeType.h"
#import "DeeplinkDirection.h"

@class MobilityViewController;
@class DeeplinkDataManager;
@class MobilitySwiftEvents;
@class RequestHandler;

@protocol MobilityDelegate;

@interface MobilitySDKManager : NSObject

@property(nonatomic, strong) id<MobilityDelegate> delegate;

+ (instancetype)sharedManager;
- (BOOL)initWithOptions:(NSDictionary *)launchOptions partnerId:(NSString *)partnerId;
- (BOOL)initWithOptions:(NSDictionary *)launchOptions partnerId:(NSString *)partnerId environment:(EnvironmentEnum)environment shouldSendTracking:(BOOL *)shouldSendTracking;
- (void)closeSdkView;
- (void)setLocale:(NSString *)locale;
- (void)setPushToken:(NSString *)pushToken;
- (void)setUserToken:(NSString *)userToken;
- (void)resetUserToken;
- (void)addFlight:(NSString *)originIATA destinationIATA:(NSString *)destinationIATA flightNumber:(NSString *)flightNumber flightDepartureDate:(NSString *)flightDepartureDate flightArrivalDate:(NSString *)flightArrivalDate originAirportName:(NSString *)originAirportName destinationAirportName:(NSString *)destinationAirportName direction:(DeeplinkDirectionEnum)direction;
- (void)setMobilityBookingId:(NSString *)mobilityBookingId;
- (void)setBookingReference:(NSString *)bookingReference;
- (void)setTripType:(TripTypeEnum)tripType;
- (void)setPassengers:(NSInteger)adults children:(NSInteger)children infants:(NSInteger)infants;
- (void)openMobility:(UIViewController *)vc type:(NSString *)type source:(NSString *)source campaign:(NSString *)campaign medium:(NSString *)medium DEPRECATED_MSG_ATTRIBUTE("Use showMobility instead.");
- (void)showMobility:(UIViewController *)vc type:(NSString *)type source:(NSString *)source campaign:(NSString *)campaign medium:(NSString *)medium;
- (void)showMobilityFromNotification:(UIViewController *)vc userInfo:(NSDictionary *)userInfo;
- (void)showBackButton:(BOOL)showBackButton;
- (BOOL)isNotificationOriginMobility:(NSDictionary *)userInfo;
- (void)setAppLink:(NSURL *)url;
- (void)killMobility;
- (void)setUserData:(NSString *)firstName lastName:(NSString *)lastName email:(NSString *)email mobileNumber:(NSString *)mobileNumber;
- (void)resetUserData;
- (void)showMobilityFromAppDeeplinkURL:(NSString *)encodedDeeplinkUrl viewController:(UIViewController *)viewController;
- (void)setSession:(NSString *)session;
- (void)setPickupTimeType:(PickupTimeTypeEnum)pickupTimeType;
- (void)updateRTLLayout:(BOOL)isRTL;
- (void)reinitReactBundle;
- (void)setTracking:(BOOL *)shouldSendTracking;
@end
