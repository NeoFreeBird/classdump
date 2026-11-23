//
#ifndef TLSOSLogOutputStream_h
#define TLSOSLogOutputStream_h
@import Foundation;

#include "TLSOutputStream-Protocol.h"

@class NSObject, NSString;

@interface TLSOSLogOutputStream : NSObject <TLSOutputStream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (_Bool)supported;

/* instance methods */
- (void)tls_outputLogInfo:(id)info;
- (_Bool)logInfoIsSensitive:(id)sensitive;

@end

#endif /* TLSOSLogOutputStream_h */
