//
#ifndef TLSStdErrOutputStream_h
#define TLSStdErrOutputStream_h
@import Foundation;

#include "TLSOutputStream-Protocol.h"

@class NSObject, NSString;

@interface TLSStdErrOutputStream : NSObject <TLSOutputStream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)tls_outputLogInfo:(id)info;
- (void)tls_flush;

@end

#endif /* TLSStdErrOutputStream_h */
