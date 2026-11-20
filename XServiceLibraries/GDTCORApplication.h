//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCORApplication_h
#define GDTCORApplication_h
@import Foundation;

#include "GDTCORApplicationDelegate-Protocol.h"
#include "GDTCORApplicationProtocol-Protocol.h"

@class NSObject, NSString, UIWindow;

@interface GDTCORApplication : NSObject <GDTCORApplicationProtocol, GDTCORApplicationDelegate>

@property _Bool isRunningInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

/* class methods */
+ (void)load;
+ (void)initialize;
+ (id)sharedApplication;

/* instance methods */
- (id)init;
- (unsigned long long)beginBackgroundTaskWithName:(id)name expirationHandler:(id /* block */)handler;
- (void)endBackgroundTask:(unsigned long long)task;
- (_Bool)isAppExtension;
- (id)sharedApplicationForBackgroundTask;
- (void)iOSApplicationDidEnterBackground:(id)background;
- (void)iOSApplicationWillEnterForeground:(id)foreground;
- (void)iOSApplicationWillTerminate:(id)terminate;

@end

#endif /* GDTCORApplication_h */
