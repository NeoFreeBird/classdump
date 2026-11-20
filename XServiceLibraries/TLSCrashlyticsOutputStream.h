//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSCrashlyticsOutputStream_h
#define TLSCrashlyticsOutputStream_h
@import Foundation;

#include "TLSOutputStream-Protocol.h"

@class NSObject, NSString;

@interface TLSCrashlyticsOutputStream : NSObject <TLSOutputStream>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)tls_outputLogInfo:(id)info;
- (void)outputLogMessageToCrashlytics:(id)crashlytics;
- (_Bool)discardLargeLogMessages;

@end

#endif /* TLSCrashlyticsOutputStream_h */
