//
#ifndef TIPInspectableCache_Protocol_h
#define TIPInspectableCache_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPInspectableCache <NSObject>

@required

/* required instance methods */
- (void)inspect:(id /* block */)inspect;

@optional

@end

#endif /* TIPInspectableCache_Protocol_h */
