//
#ifndef RTMPChunkSender_h
#define RTMPChunkSender_h
@import Foundation;

#include "PTVSSLStream.h"

@class NSObject;

@interface RTMPChunkSender : NSObject {
    /* instance variables */
    PTVSSLStream *_socket;
    char * _chunkBuffer;
    int _chunkLen;
}

@property (nonatomic) int chunkSize;
@property int csid;
@property int streamID;
@property int msgSize;
@property int messageType;
@property double time;
@property long long timeDelta;

/* instance methods */
- (id)initWithSocket:(id)socket;
- (void)dealloc;
- (void)resetHeader;
- (_Bool)send:(id)send;
- (void)writeHeader:(id)header length:(int)length msgLen:(int)len;
- (void)writeMidPacketHeader;

@end

#endif /* RTMPChunkSender_h */
