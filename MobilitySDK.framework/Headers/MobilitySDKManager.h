/**
 * CTNManager.h
 * CTNSDK
 *
 * Created by Tomi Kankaanpää on 20/06/16.
 * Copyright © 2016 CarTrawler. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class CTNViewController;
@protocol CTNManagerDelegate;

@interface MobilitySDKManager : NSObject

@property(nonatomic, weak) id<CTNManagerDelegate> delegate;
@property (nonatomic, copy) NSString *partnerId;

+ (instancetype)sharedManager;

- (BOOL)initWithOptions:(NSDictionary *)launchOptions partnerId:(NSString *)partnerId;

- (UIView *)getMobilitySdkView;

- (CTNViewController *)getMobilitySdkView:(NSDictionary *)initialProperties;

// Required to register for notifications
- (void)application:(UIApplication *)application didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;
// Required for the register event.
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
// Required for the notification event. You must call the completion handler after handling the remote notification.
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo
fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
// Required for the registrationError event.
- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
// Required for the localNotification event.
- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler;

////Called when a notification is delivered to a foreground app.
//-(void)userNotificationCenter:(UNUserNotificationCenter *)center willPresentNotification:(UNNotification *)notification withCompletionHandler:(void (^)(UNNotificationPresentationOptions options))completionHandler;
@end
