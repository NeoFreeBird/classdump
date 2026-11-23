//
#ifndef TDLCrashlyticsOutputStream_h
#define TDLCrashlyticsOutputStream_h
@import Foundation;

@class NSMutableArray, NSObject, NSSet, TLSCrashlyticsOutputStream;
@protocol OS_dispatch_queue;

@interface TDLCrashlyticsOutputStream : TLSCrashlyticsOutputStream {
    /* instance variables */
    NSMutableArray *_queuedMessages;
    NSObject<OS_dispatch_queue> *_queuedMessagesQueue;
}

@property (copy, nonatomic) NSSet *permittedChannels;

/* instance methods */
- (id)init;
- (void)_tfn_handleCrashlyticsInitialized:(id)initialized;
- (long long)tls_shouldFilterLevel:(long long)level channel:(id)channel contextObject:(id)object;
- (void)outputLogMessageToCrashlytics:(id)crashlytics;

@end

#endif /* TDLCrashlyticsOutputStream_h */
