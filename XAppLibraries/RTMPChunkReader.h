//
#ifndef RTMPChunkReader_h
#define RTMPChunkReader_h
@import Foundation;

#include "PTVRTMPMessage.h"

@class NSMutableData, NSObject;

@interface RTMPChunkReader : NSObject {
    /* instance variables */
    unsigned char _extendedTime[4];
    int _extendedTimeNeeded;
    int _extendedTimeReceived;
    int _bodyReceived;
    _Bool _expectingDelta;
    int _streamID;
    int _messageType;
    int _messageLength;
    long long _time;
    long long _timeDelta;
    NSMutableData *_body;
    int _errorBytes;
    PTVRTMPMessage *_msg;
}

@property int csid;
@property int chunkSize;

/* instance methods */
- (id)init;
- (void)resetHeader;
- (id)parseHeader:(const char *)header format:(int)format length:(long long)length;
- (int)requestedBytes;
- (id)readBytes:(id)bytes isEndOfChunk:(_Bool *)chunk;

@end

#endif /* RTMPChunkReader_h */
