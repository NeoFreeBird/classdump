//
#ifndef _TtC14TFSTwitterCore27UsernameAvailabilityAdapter_h
#define _TtC14TFSTwitterCore27UsernameAvailabilityAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.UsernameAvailabilityAdapter : NSObject // (Swift)

/* class methods */
+ (void)checkUsernameAvailabilityWithUsername:(id)username actionService:(id)service completion:(id /* block */)completion;
+ (void)getSuggestionsWithAccountID:(id)id fullName:(id)name username:(id)username email:(id)email actionService:(id)service completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore27UsernameAvailabilityAdapter_h */
