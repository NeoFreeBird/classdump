//
#ifndef TAVTwitterPrivateLogListener_h
#define TAVTwitterPrivateLogListener_h
@import Foundation;

#include "LHLSLogListener-Protocol.h"

@class NSObject, NSString;

@interface TAVTwitterPrivateLogListener : NSObject <LHLSLogListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)lhls_logWithLevel:(long long)level file:(id)file line:(int)line message:(id)message;

@end

#endif /* TAVTwitterPrivateLogListener_h */
