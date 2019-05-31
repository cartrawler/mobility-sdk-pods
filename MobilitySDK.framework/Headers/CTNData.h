//
//  CODDelegate.h
//  CODCabforce
//
//  Created by Flann McMorrow on 30/05/2018.
//  Copyright © 2018 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CTNData;


@interface CTNData : NSObject

- (void) updateMarketplaceProperties: (NSDictionary *)updatedProperties;

@property (nonatomic, assign) BOOL canOpenOnDemand;
@property (nonatomic, retain) NSArray *prebookOrders;

- (void) openCTNFromJS;

@end
