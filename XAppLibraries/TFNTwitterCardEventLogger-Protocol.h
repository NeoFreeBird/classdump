//
#ifndef TFNTwitterCardEventLogger_Protocol_h
#define TFNTwitterCardEventLogger_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterCardEventLogger <NSObject>

@required

/* required instance methods */
- (void)logEvent:(id)event;

@optional

@end

#endif /* TFNTwitterCardEventLogger_Protocol_h */
