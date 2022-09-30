//
//  DeeplinkDirection.h
//  MobilitySDK
//
//  Created by Tim Humphries on 20/07/2021.
//  Copyright © 2021 CarTrawler. All rights reserved.
//

#ifndef DeeplinkDirection_h
#define DeeplinkDirection_h


#endif /* DeeplinkDirection_h */


typedef enum {
    DROPOFF_TO_ORIGIN,
    PICKUP_FROM_DESTINATION
} DeeplinkDirectionEnum;

@interface DeeplinkDirection: NSObject
- (NSString*) getDeeplinkDirectionString:(DeeplinkDirectionEnum)enumVal;
@end
