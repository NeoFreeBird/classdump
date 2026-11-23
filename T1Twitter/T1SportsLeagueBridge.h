//
#ifndef T1SportsLeagueBridge_h
#define T1SportsLeagueBridge_h
@import Foundation;

@class NSObject;

@interface T1SportsLeagueBridge : NSObject // (Swift)

/* class methods */
+ (_Bool)isKnownLeague:(id)league;
+ (id)pushEntrySource;
+ (id)makeGameViewControllerForLeague:(id)league account:(id)account gameID:(id)id page:(id)page entrySource:(id)source;
+ (id)makeHubViewControllerForLeague:(id)league account:(id)account entrySource:(id)source segment:(id)segment hubAction:(id)action;
+ (id)makeSettingsViewControllerForAccount:(id)account;
+ (void)startLiveActivityRegistration;
+ (void)unregisterLiveActivityPushToStartForAccount:(id)account completion:(id /* block */)completion;
+ (void)warmHubLeaguesWithAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1SportsLeagueBridge_h */
