//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
