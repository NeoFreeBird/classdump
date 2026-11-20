//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMAppDelegateInterceptor_h
#define APMAppDelegateInterceptor_h
@import Foundation;

#include "UIApplicationDelegate-Protocol.h"

@class NSObject, NSString, UIWindow;

@interface APMAppDelegateInterceptor : NSObject <UIApplicationDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (_Bool)application:(id)application openURL:(id)url options:(id)options;
- (_Bool)application:(id)application openURL:(id)url sourceApplication:(id)application annotation:(id)annotation;
- (void)application:(id)application handleEventsForBackgroundURLSession:(id)urlsession completionHandler:(id /* block */)handler;
- (_Bool)application:(id)application continueUserActivity:(id)activity restorationHandler:(id /* block */)handler;

@end

#endif /* APMAppDelegateInterceptor_h */
