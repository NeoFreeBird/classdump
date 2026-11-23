//
#ifndef OIDAuthStateChangeDelegate_Protocol_h
#define OIDAuthStateChangeDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OIDAuthStateChangeDelegate <NSObject>

@required

/* required instance methods */
- (void)didChangeState:(id)state;

@optional

@end

#endif /* OIDAuthStateChangeDelegate_Protocol_h */
