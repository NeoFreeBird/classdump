//
#ifndef PTVAuthErrorObserverDelegate_Protocol_h
#define PTVAuthErrorObserverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVAuthErrorObserverDelegate <NSObject>

@required

/* required instance methods */
- (void)authErrorObserver:(id)observer didObserveAuthError:(id)error;

@optional

@end

#endif /* PTVAuthErrorObserverDelegate_Protocol_h */
