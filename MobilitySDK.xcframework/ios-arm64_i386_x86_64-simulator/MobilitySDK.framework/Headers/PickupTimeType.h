//
//  PickupTimeType.h
//  MobilitySDK
//
//  Created by Christophe Chabot on 08/06/2022.
//  Copyright © 2022 CarTrawler. All rights reserved.
//

#ifndef PickupTimeType_h
#define PickupTimeType_h


#endif /* PickupTimeType_h */

typedef enum {
    INSTANT,
    SCHEDULED
} PickupTimeTypeEnum;

@interface PickupTimeType: NSObject
- (NSString*) getPickupTimeTypeString:(PickupTimeTypeEnum)enumVal;
@end

