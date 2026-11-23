//
#ifndef TDLCrashlyticsNonFatalErrorOutputStream_h
#define TDLCrashlyticsNonFatalErrorOutputStream_h
@import Foundation;

#include "TLSOutputStream-Protocol.h"

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TDLCrashlyticsNonFatalErrorOutputStream : NSObject <TLSOutputStream> {
    /* instance variables */
    NSMutableArray *_queuedErrors;
    NSObject<OS_dispatch_queue> *_queuedErrorsQueue;
    NSObject<OS_dispatch_queue> *_nonFatalReportingQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)_tfn_handleCrashlyticsInitialized:(id)initialized;
- (long long)tls_shouldFilterLevel:(long long)level channel:(id)channel contextObject:(id)object;
- (void)tls_outputLogInfo:(id)info;

@end

#endif /* TDLCrashlyticsNonFatalErrorOutputStream_h */
