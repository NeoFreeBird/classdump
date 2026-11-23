//
#ifndef TDLLoggingAlertScribeOutputStream_h
#define TDLLoggingAlertScribeOutputStream_h
@import Foundation;

#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TLSOutputStream-Protocol.h"

@class NSObject, NSString;

@interface TDLLoggingAlertScribeOutputStream : NSObject <TLSOutputStream>

@property (retain, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribeLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)tls_outputLogInfo:(id)info;
- (long long)tls_shouldFilterLevel:(long long)level channel:(id)channel contextObject:(id)object;

@end

#endif /* TDLLoggingAlertScribeOutputStream_h */
