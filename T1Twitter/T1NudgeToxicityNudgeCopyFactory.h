//
#ifndef T1NudgeToxicityNudgeCopyFactory_h
#define T1NudgeToxicityNudgeCopyFactory_h
@import Foundation;

@class NSObject;

@interface T1NudgeToxicityNudgeCopyFactory : NSObject

/* class methods */
+ (id)nudgeCopyProviderForAccount:(id)account andTweetType:(long long)type;

/* instance methods */
- (id)init;

@end

#endif /* T1NudgeToxicityNudgeCopyFactory_h */
