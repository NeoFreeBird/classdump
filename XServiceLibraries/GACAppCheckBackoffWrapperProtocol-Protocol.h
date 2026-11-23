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
