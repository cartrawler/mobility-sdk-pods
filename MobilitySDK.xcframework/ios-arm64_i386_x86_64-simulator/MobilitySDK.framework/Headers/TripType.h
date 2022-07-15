//
//  TripType.h
//  MobilitySDK
//
//  Created by Christophe Chabot on 13/07/2021.
//  Copyright © 2021 CarTrawler. All rights reserved.
//

#ifndef TripType_h
#define TripType_h


#endif /* TripType_h */

typedef enum {
    LEISURE,
    BUSINESS
} TripTypeEnum;

@interface TripType: NSObject
- (NSString*) getTripTypeString:(TripTypeEnum)enumVal;
@end

