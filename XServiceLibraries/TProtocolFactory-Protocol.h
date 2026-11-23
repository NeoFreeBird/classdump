//
#ifndef TProtocolFactory_Protocol_h
#define TProtocolFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TProtocolFactory <NSObject>

@required

/* required instance methods */
- (id)newProtocolOnTransport:(id)transport;

@optional

@end

#endif /* TProtocolFactory_Protocol_h */
