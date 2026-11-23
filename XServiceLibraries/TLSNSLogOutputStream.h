//
#ifndef TLSNSLogOutputStream_h
#define TLSNSLogOutputStream_h
@import Foundation;

#include "TLSOutputStream-Protocol.h"

@class NSObject, NSString;

@interface TLSNSLogOutputStream : NSObject <TLSOutputStream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)tls_outputLogInfo:(id)info;

@end

#endif /* TLSNSLogOutputStream_h */
