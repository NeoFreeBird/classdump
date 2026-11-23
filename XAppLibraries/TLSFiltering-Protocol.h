//
#ifndef TLSFiltering_Protocol_h
#define TLSFiltering_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLSFiltering <NSObject>

@required

@optional

/* optional instance methods */
- (long long)tls_shouldFilterLevel:(long long)level channel:(id)channel contextObject:(id)object;

@end

#endif /* TLSFiltering_Protocol_h */
