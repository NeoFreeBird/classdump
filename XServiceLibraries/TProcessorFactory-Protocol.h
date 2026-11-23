//
#ifndef TProcessorFactory_Protocol_h
#define TProcessorFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TProcessorFactory <NSObject>

@required

/* required instance methods */
- (id)processorForTransport:(id)transport;

@optional

@end

#endif /* TProcessorFactory_Protocol_h */
