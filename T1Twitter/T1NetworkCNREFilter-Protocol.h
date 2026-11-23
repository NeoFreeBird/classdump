//
#ifndef T1NetworkCNREFilter_Protocol_h
#define T1NetworkCNREFilter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1NetworkCNREFilter <NSObject>

@required

/* required instance methods */
- (_Bool)shouldCaptureCNREForAttempt:(id)attempt;
- (id)eventType;

@optional

@end

#endif /* T1NetworkCNREFilter_Protocol_h */
