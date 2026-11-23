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
