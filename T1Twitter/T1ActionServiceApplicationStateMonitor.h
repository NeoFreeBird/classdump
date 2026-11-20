//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ActionServiceApplicationStateMonitor_h
#define T1ActionServiceApplicationStateMonitor_h
@import Foundation;

#include "TASApplicationStateMonitor-Protocol.h"

@class NSObject;

@interface T1ActionServiceApplicationStateMonitor : NSObject <TASApplicationStateMonitor> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *sync;
}

/* instance methods */
- (id)init;
- (void)configureWith:(id)with;
- (void)onApplicationDidFinishLaunching:(id)launching;
- (void)onApplicationWillResignActive:(id)active;
- (void)onApplicationWillEnterForeground:(id)foreground;
- (void)onApplicationDidBecomeActive:(id)active;
- (void)onApplicationDidEnterBackground:(id)background;

@end

#endif /* T1ActionServiceApplicationStateMonitor_h */
