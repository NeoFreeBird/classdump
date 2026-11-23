//
#ifndef PTVModalPresentationManagerDelegate_Protocol_h
#define PTVModalPresentationManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVModalPresentationManagerDelegate <NSObject>

@required

/* required instance methods */
- (void)presentUserModalForUserId:(id)id configureBlock:(id /* block */)block;
- (void)presentBroadcast:(id)broadcast withWatchContext:(id)context inCollection:(id)collection;

@optional

/* optional instance methods */
- (void)addAsGuestFromModalWithUserId:(id)id;
- (void)acceptAsGuestButtonPressedForUserID:(id)id withGuestSessionState:(unsigned long long)state;

@end

#endif /* PTVModalPresentationManagerDelegate_Protocol_h */
