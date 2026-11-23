//
#ifndef PTVRTMPConnection_h
#define PTVRTMPConnection_h
@import Foundation;

#include "LHLSSocketListener-Protocol.h"
#include "PTVRTMPStreamSet.h"
#include "PTVSSLStream.h"

@class NSData, NSDate, NSDictionary, NSMutableArray, NSObject, NSString;

@interface PTVRTMPConnection : NSObject <LHLSSocketListener> {
    /* instance variables */
    NSDictionary *_params;
    PTVSSLStream *_socket;
    int _state;
    NSDate *_timebase;
    NSData *_handshake;
    long long _headConsumed;
    NSMutableArray *_receivedQueue;
    PTVRTMPStreamSet *_rtmp;
    int _bytesNext;
    unsigned int _peerWindowSize;
    unsigned int _receivedFromPeer;
    unsigned int _lastAckSentAt;
    int _lastTransaction;
    id /* block */ _onMessage;
    id /* block */ _onConnect;
    int _portInUse;
    _Bool _useTLS;
    _Bool _usePSP;
    NSDate *_lastMessage;
    _Bool _draining;
}

@property int mediaStream;
@property (retain) NSString *target;
@property unsigned int windowSize;
@property unsigned int lastAckReceived;
@property unsigned int totalSent;
@property _Bool wasProxyError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)connectToServer:(id)server withBlock:(id /* block */)block onConnect:(id /* block */)connect sslPinningDelegate:(id)delegate;
- (void)shutdown;
- (void)drainQueue:(id /* block */)queue;
- (void)sendInitialHandshake;
- (void)sendConnect;
- (void)appendData:(id)data;
- (id)getReceivedLength:(int)length;
- (int)timeInMS;
- (void)setBufferLength:(int)length forStream:(int)stream;
- (void)setChunkSize:(int)size;
- (_Bool)sendMessage:(id)message;
- (void)sendCommand:(id)command params:(id)params;
- (void)onMessage:(id)message;
- (void)socketConnected:(id)connected error:(long long)error;
- (void)socketBound:(id)bound error:(long long)error;
- (void)socketClosed:(id)closed;
- (void)socket:(id)socket gotData:(id)data from:(id)from;
- (void)processPacket:(id)packet;
- (void)getAndResetBytesSent:(long long *)sent dropped:(long long *)dropped queueLength:(long long *)length;

@end

#endif /* PTVRTMPConnection_h */
