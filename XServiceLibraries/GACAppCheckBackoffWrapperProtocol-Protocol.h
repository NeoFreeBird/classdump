//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GACAppCheckBackoffWrapperProtocol_Protocol_h
#define GACAppCheckBackoffWrapperProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppCheckBackoffWrapperProtocol <NSObject>

@required

/* required instance methods */
- (id)applyBackoffToOperation:(id /* block */)operation errorHandler:(id /* block */)handler;
- (id /* block */)defaultAppCheckProviderErrorHandler;

@optional

@end

#endif /* GACAppCheckBackoffWrapperProtocol_Protocol_h */
