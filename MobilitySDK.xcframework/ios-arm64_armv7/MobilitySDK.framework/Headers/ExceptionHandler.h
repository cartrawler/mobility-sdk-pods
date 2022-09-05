//
//  ExceptionHandler.h
//  DemoIntegration
//
//  Created by Tim Humphries on 29/10/2020.
//  Copyright © 2020 CarTrawler. All rights reserved.
//
// Taken from https://github.com/a7ul/react-native-exception-handler


#import <Foundation/Foundation.h>
#import  <UIKit/UIKit.h>
#include <libkern/OSAtomic.h>
#include <execinfo.h>

@class RequestHandler;

@interface ExceptionHandler : NSObject
+ (void) releaseExceptionHold;
- (void) setHandlerforNativeException;
- (void) setSession:(NSString *)session;
- (void) setLocale:(NSString *)incomingSession;
- (void) setTracking:(BOOL *)incomingTrackingSetting;

@end

