//
//  MobilityEvents.h
//  MobilitySDK
//
//  Created by Flann McMorrow on 24/05/2018.
//  Copyright © 2018 Facebook. All rights reserved.
//
#import <Foundation/Foundation.h>

#if __has_include(<MobilitySDK/CTNUser.h>)
#import <MobilitySDK/CTNUser.h>
#elif __has_include("Models/CTNUser.h")
#import "Models/CTNUser.h"
#endif

#if __has_include(<MobilitySDK/CTNUser.h>)
#import <MobilitySDK/CTNCard.h>
#elif __has_include("Models/CTNCard.h")
#import "Models/CTNCard.h"
#endif

@class Flight;
@class UTM;
@class Persona;

@interface MobilityEvents: NSObject {
    
}

typedef enum {
    MobilityArrival,
    MobilityDeparture
} CTNArrivalOrDeparture;

typedef enum {
    MobilityInbound,
    MobilityOutbound
} CTNInboundOrOutbound;

+ (instancetype)sharedManager;
- (void) setLocale:(NSString *)locale;
- (void) setTracking:(BOOL *)shouldSendTracking;
- (void) setPushToken:(NSString *)pushToken;
- (void) setUserToken:(NSString *)userToken;
- (void) resetUserToken;
- (void) setDeeplinkDataWithType:(NSString *)type flights:(NSArray<Flight *> *)flights UTM:(UTM *)UTM persona:(Persona *)persona mobilityBookingId:(NSString *)mobilityBookingId surveyUrl:(NSString *)surveyUrl pickupTimeType:(NSString *)pickupTimeType;
- (void) setAppLinkData:(NSString *)code state:(NSString *)state error:(NSString *)error;
- (void) setUserData:(NSString *)firstName lastName:(NSString *)lastName email:(NSString *)email mobileNumber:(NSString *)mobileNumber;
- (void) resetUserData;
@end

