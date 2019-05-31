/**
 * CODManagerDelegate.h
 * CODSDK
 *
 * Created by Tomi Kankaanpää on 22/11/2016.
 * Copyright © 2016 CarTrawler. All rights reserved.
 */

@class CTNViewController;

typedef NS_ENUM(NSInteger, CTNViewCloseReason) {
  CTNViewCloseReasonUserRequest = 0,
};

@protocol CTNManagerDelegate <NSObject>

@optional

- (void)didLoadCTNView;
- (void)didFailToLoadCTNView;

- (void)shouldCloseCTNViewWithReason:(CTNViewCloseReason)reason;
- (void)shouldOpenCTNViewWithReason:(CTNViewCloseReason)reason;
    
@end
