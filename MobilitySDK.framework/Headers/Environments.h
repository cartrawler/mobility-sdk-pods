//
//  Environments.h
//  MobilitySDK
//
//  Created by Tim Humphries on 15/04/2020.
//  Copyright © 2020 CarTrawler. All rights reserved.
//

#ifndef Environments_h
#define Environments_h


#endif /* Environments_h */


typedef enum {
    DEVELOPMENT,
    PRODUCTION
} EnvironmentEnum;

@interface Environments: NSObject
- (NSString*) getEnvironmentString:(EnvironmentEnum)enumVal;
@end

