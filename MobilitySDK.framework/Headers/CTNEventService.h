//
//  PublicHeader.h
//  CODCabforce
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
@interface CTNEventService: NSObject {

}

typedef enum {
    CTNArrival,
    CTNDeparture
} CTNArrivalOrDeparture;

typedef enum {
    CTNInbound,
    CTNOutbound
} CTNInboundOrOutbound;

// Define class properties here with @property
+ (void) ctnSendEvent:(NSString *)eventName :(NSDictionary *)params;

- (void) ctnInitialiseUserWithModels:(CTNCard *)paymentDetails
                      userProfile:(CTNUser *)userProfile;

- (void) ctnInitialiseUserWithProperties:(NSString *)userMobile
                            firstName:(NSString *)firstName
                             lastName:(NSString *)lastName
                                email:(NSString *)email
                             password:(NSString *)password
                           userRegion:(NSString *)userRegion
                       cardHolderName:(NSString *)cardHolderName
                     cardNumberMasked:(NSString *)cardNumberMasked
                             cardType:(NSString *)cardType
                           expireDate:(NSString *)expireDate
                                token:(NSString *)token;

- (void) ctnInitialisePrebookWithPnrData:(NSString *)iata
                             flightNo:(NSString *)flightNo
                   departureOrArrival:(CTNArrivalOrDeparture)departureOrArrival
                    inboundOrOutbound:(CTNInboundOrOutbound)inboundOrOutbound
                             datetime:(NSString *)datetime;

- (void) ctnSetPrebookReminderWithPnrData:(NSString *)iata
                              flightNo:(NSString *)flightNo
                    departureOrArrival:(CTNArrivalOrDeparture)departureOrArrival
                     inboundOrOutbound:(CTNInboundOrOutbound)inboundOrOutbound
                              datetime:(NSString *)datetime;
@end

