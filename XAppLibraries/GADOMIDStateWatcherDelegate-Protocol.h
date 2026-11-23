//
#ifndef GADOMIDStateWatcherDelegate_Protocol_h
#define GADOMIDStateWatcherDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDStateWatcherDelegate <NSObject>

@required

/* required instance methods */
- (void)appDidBecomeActive;
- (void)appDidResignActive;

@optional

@end

#endif /* GADOMIDStateWatcherDelegate_Protocol_h */
