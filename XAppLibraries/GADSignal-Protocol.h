//
#ifndef GADSignal_Protocol_h
#define GADSignal_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADSignal <NSObject>

@required

/* required instance methods */
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@optional

@end

#endif /* GADSignal_Protocol_h */
