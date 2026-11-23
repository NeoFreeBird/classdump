//
#ifndef LHLSSocketListener_Protocol_h
#define LHLSSocketListener_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSSocketListener <NSObject>

@required

/* required instance methods */
- (void)socketConnected:(id)connected error:(long long)error;
- (void)socketBound:(id)bound error:(long long)error;
- (void)socketClosed:(id)closed;
- (void)socket:(id)socket gotData:(id)data from:(id)from;

@optional

@end

#endif /* LHLSSocketListener_Protocol_h */
