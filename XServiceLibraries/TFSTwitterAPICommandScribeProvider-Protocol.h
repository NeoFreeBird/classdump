//
#ifndef TFSTwitterAPICommandScribeProvider_Protocol_h
#define TFSTwitterAPICommandScribeProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPICommandScribeProvider <NSObject>

@required

/* required instance methods */
- (id)accountScribeForCommand:(id)command;
- (id)guestScribeForCommand:(id)command;

@optional

@end

#endif /* TFSTwitterAPICommandScribeProvider_Protocol_h */
