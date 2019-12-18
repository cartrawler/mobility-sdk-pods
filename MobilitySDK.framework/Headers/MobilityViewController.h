/**
 * MobilityDelegate.h
 * MobilitySDK
 *
 * Created by Tomi Kankaanpää on 20/06/16.
 * Copyright © 2016 CarTrawler. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MobilityViewController : UIViewController

- (instancetype)initWithModuleName:(NSString *)moduleName
                 initialProperties:(NSDictionary *)initialProperties;
    
@end


