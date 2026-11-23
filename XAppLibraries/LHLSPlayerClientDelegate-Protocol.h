//
#ifndef LHLSPlayerClientDelegate_Protocol_h
#define LHLSPlayerClientDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSPlayerClientDelegate <NSObject>

@required

/* required instance methods */
- (void)receivedData;

@optional

@end

#endif /* LHLSPlayerClientDelegate_Protocol_h */
