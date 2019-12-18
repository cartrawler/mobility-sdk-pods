/**
 * CODManagerDelegate.h
 * CODSDK
 *
 * Created by Tomi Kankaanpää on 22/11/2016.
 * Copyright © 2016 CarTrawler. All rights reserved.
 */

@class MobilityViewController;

typedef NS_ENUM(NSInteger, CTNViewCloseReason) {
  CTNViewCloseReasonUserRequest = 0,
};

@protocol MobilityDelegate <NSObject>

- (void)shouldCloseMobilityApp;
- (void)shouldOpenMobilityApp;

@optional

- (void)didLoadMobilityView;
- (void)didFailToLoadMobilityView;



    
@end
