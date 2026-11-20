//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
