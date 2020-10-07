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
- (void) setPushToken:(NSString *)pushToken;
- (void) setDeeplinkDataWithType:(NSString *)type PNR:(NSString *)PNR flights:(NSArray<Flight *> *)flights UTM:(UTM *)UTM;
- (void) setAppLinkData:(NSString *)code state:(NSString *)state error:(NSString *)error;
@end

