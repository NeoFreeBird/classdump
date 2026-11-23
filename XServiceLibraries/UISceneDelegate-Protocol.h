//
#ifndef UISceneDelegate_Protocol_h
#define UISceneDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UISceneDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)scene:(id)scene willConnectToSession:(id)session options:(id)options;
- (void)sceneDidDisconnect:(id)disconnect;
- (void)sceneDidBecomeActive:(id)active;
- (void)sceneWillResignActive:(id)active;
- (void)sceneWillEnterForeground:(id)foreground;
- (void)sceneDidEnterBackground:(id)background;
- (void)scene:(id)scene openURLContexts:(id)urlcontexts;
- (id)stateRestorationActivityForScene:(id)scene;
- (void)scene:(id)scene restoreInteractionStateWithUserActivity:(id)activity;
- (void)scene:(id)scene willContinueUserActivityWithType:(id)type;
- (void)scene:(id)scene continueUserActivity:(id)activity;
- (void)scene:(id)scene didFailToContinueUserActivityWithType:(id)type error:(id)error;
- (void)scene:(id)scene didUpdateUserActivity:(id)activity;

@end

#endif /* UISceneDelegate_Protocol_h */
