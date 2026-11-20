//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppSceneDelegate_h
#define T1AppSceneDelegate_h
@import Foundation;

#include "UIWindowSceneDelegate-Protocol.h"

@class NSObject, NSString, NSUserActivity, UIWindow;

@interface T1AppSceneDelegate : NSObject <UIWindowSceneDelegate> {
    /* instance variables */
    NSUserActivity *_forwardedConnectionUserActivity;
}

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)scene:(id)scene willConnectToSession:(id)session options:(id)options;
- (void)sceneDidBecomeActive:(id)active;
- (void)scene:(id)scene openURLContexts:(id)urlcontexts;
- (void)scene:(id)scene continueUserActivity:(id)activity;
- (void)windowScene:(id)scene performActionForShortcutItem:(id)item completionHandler:(id /* block */)handler;
- (id)_t1_browsingWebUserActivityForConnectionOptions:(id)options;
- (_Bool)_t1_isForwardedConnectionUserActivity:(id)activity;
- (id)_t1_launchOptionsForConnectionOptions:(id)options browsingWebActivity:(id)activity;
- (id)_t1_openURLOptionsForURLContext:(id)urlcontext;

@end

#endif /* T1AppSceneDelegate_h */
