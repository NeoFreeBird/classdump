//
#ifndef SessionStartCoordinator_h
#define SessionStartCoordinator_h
@import Foundation;

@class NSObject;

@interface SessionStartCoordinator : NSObject // (Swift)

/* class methods */
+ (void)setSessionEndToNowForAccountID:(id)id;
+ (void)setSessionStartToNowForAccountID:(id)id;
+ (_Bool)isNewSessionForAccountID:(id)id minBackgroundMinutes:(long long)minutes;
+ (double)minutesSinceLastActiveForAccountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* SessionStartCoordinator_h */
