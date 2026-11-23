//
#ifndef PTVSSLStream_h
#define PTVSSLStream_h
@import Foundation;

#include "LHLSSocketListener-Protocol.h"
#include "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSMutableArray, NSObject, NSOutputStream, NSString;
@protocol OS_dispatch_queue, PTVModelSSLPinningDelegate;

@interface PTVSSLStream : NSObject <NSStreamDelegate> {
    /* instance variables */
    id <PTVModelSSLPinningDelegate> _sslPinningDelegate;
    id _weakSelf;
    NSInputStream *_input;
    NSOutputStream *_output;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_sendQueue;
    long long _bytesInQueue;
    long long _bytesSent;
    long long _headSent;
    _Bool _isValidated;
    _Bool _openCompleted;
    _Bool _streamClosed;
    NSString *_host;
    int _port;
    _Bool _ssl;
    void * _isOnQueue;
    id /* block */ _onDrained;
}

@property (weak, nonatomic) id <LHLSSocketListener> listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithListener:(id)listener sslPinningDelegate:(id)delegate connectTo:(id)to remotePort:(id)port ssl:(_Bool)ssl;
- (void)setDrainEvent:(id /* block */)event;
- (void)dealloc;
- (void)makeConnection;
- (void)stream:(id)stream handleEvent:(unsigned long long)event;
- (void)onQueuedEvent:(unsigned long long)event stream:(id)stream;
- (void)tryWrite;
- (void)onRead;
- (void)onOpen:(id)open;
- (void)send:(id)send;
- (void)getAndResetBytesSent:(long long *)sent queueLength:(long long *)length;
- (long long)getQueueLength;
- (void)doShutdown;
- (void)shutdown;

@end

#endif /* PTVSSLStream_h */
