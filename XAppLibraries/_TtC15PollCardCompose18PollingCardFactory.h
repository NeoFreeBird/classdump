//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15PollCardCompose18PollingCardFactory_h
#define _TtC15PollCardCompose18PollingCardFactory_h
@import Foundation;

@class NSObject;

@interface PollCardCompose.PollingCardFactory : NSObject // (Swift)

/* class methods */
+ (id)createPollingCardWithDuration:(double)duration isAudienceSelectionEnabled:(_Bool)enabled isSwiftMigrationEnabled:(_Bool)enabled;

/* instance methods */
- (id)init;

@end

#endif /* _TtC15PollCardCompose18PollingCardFactory_h */
