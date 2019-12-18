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

- (void) updateUserPreferences:(NSString *)currency
                      language:(NSString *)language;

- (void) updateUserProfile:(NSString *)userMobile
                            firstName:(NSString *)firstName
                             lastName:(NSString *)lastName
                                email:(NSString *)email;

- (void) updatePartnerProgramWithToken:(NSString *)token;

- (void) updatePartnerProgram:(NSString *)userName
                     password:(NSString *)password;

- (void) updatePartnerProgram:(NSString *)userName;


@end

