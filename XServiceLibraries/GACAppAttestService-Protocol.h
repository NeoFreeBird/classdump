//
#ifndef GACAppAttestService_Protocol_h
#define GACAppAttestService_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GACAppAttestService <NSObject>

@required

@property (readonly) _Bool supported;

/* required instance methods */
- (void)generateKeyWithCompletionHandler:(id /* block */)handler;
- (void)attestKey:(id)key clientDataHash:(id)hash completionHandler:(id /* block */)handler;
- (void)generateAssertion:(id)assertion clientDataHash:(id)hash completionHandler:(id /* block */)handler;
- (_Bool)isSupported;

@optional

@end

#endif /* GACAppAttestService_Protocol_h */
