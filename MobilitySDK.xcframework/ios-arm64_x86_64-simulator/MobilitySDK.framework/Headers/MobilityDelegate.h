/**
 * MobilityDelegate.h
 * MobilitySDK
 *
 * Created by Tomi Kankaanpää on 22/11/2016.
 * Copyright © 2016 CarTrawler. All rights reserved.
 */

@class MobilityViewController;

typedef NS_ENUM(NSInteger, CTNViewCloseReason) {
  CTNViewCloseReasonUserRequest = 0,
};

@protocol MobilityDelegate <NSObject>

- (void)shouldHideMobilityApp;
- (void)shouldShowMobilityApp;

@optional


- (void)shouldCloseMobilityApp DEPRECATED_MSG_ATTRIBUTE("Use shouldHideMobilityApp instead.");
- (void)shouldOpenMobilityApp DEPRECATED_MSG_ATTRIBUTE("Use shouldShowMobilityApp instead.");
- (void)didLoadMobilityJs;
- (void)didFailToLoadMobilityJs;



    
@end
