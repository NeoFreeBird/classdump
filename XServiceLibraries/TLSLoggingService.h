//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLSLoggingService_h
#define TLSLoggingService_h
@import Foundation;

@class NSDate, NSMutableSet, NSObject, NSSet;
@protocol OS_dispatch_queue, TLSLoggingServiceDelegate;

@interface TLSLoggingService : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    double _baseTimestamp;
    NSMutableSet *_streamsM;
    NSObject<OS_dispatch_queue> *_quickFilterQueue;
    long long _quickFilterLevels;
    NSMutableSet *_quickFilterOffChannelsM;
    unsigned long long _quickFilterOutputStreamCount;
}

@property (weak) id <TLSLoggingServiceDelegate> delegate;
@property (nonatomic) unsigned long long maximumSafeMessageLength;
@property (readonly, nonatomic) NSDate *startupTimestamp;
@property (readonly) NSSet *outputStreams;
@property (nonatomic) unsigned long long maximumSafeMessageLength;
@property (weak) id <TLSLoggingServiceDelegate> delegate;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)removeOutputStream:(id)stream;
- (void)updateOutputStream:(id)stream;
- (void)dispatchSynchronousTransaction:(id /* block */)transaction;
- (void)flush;
- (id)outputStreamsThatSupportLoggedDataRetrieval;
- (id)retrieveLoggedDataFromOutputStream:(id)stream maxBytes:(unsigned long long)bytes;
- (id)init;
- (void)dealloc;
- (void)addOutputStream:(id)stream;
- (void)logWithLevel:(long long)level channel:(id)channel file:(id)file function:(id)function line:(long long)line contextObject:(id)object options:(long long)options message:(id)message;

@end

#endif /* TLSLoggingService_h */
