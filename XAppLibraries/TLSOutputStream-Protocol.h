//
#ifndef TLSOutputStream_Protocol_h
#define TLSOutputStream_Protocol_h
@import Foundation;

#include "TLSFiltering-Protocol.h"

@protocol TLSOutputStream <TLSFiltering>

@required

/* required instance methods */
- (void)tls_outputLogInfo:(id)info;

@optional

/* optional instance methods */
- (void)tls_flush;

@end

#endif /* TLSOutputStream_Protocol_h */
