//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVRTMPStreamSet_h
#define PTVRTMPStreamSet_h
@import Foundation;

#include "PTVSSLStream.h"
#include "RTMPChunkReader.h"

@class NSMutableArray, NSObject;

@interface PTVRTMPStreamSet : NSObject {
    /* instance variables */
    PTVSSLStream *_socket;
    NSMutableArray *_sendingStreams;
    NSMutableArray *_readingStreams;
    RTMPChunkReader *_reader;
    unsigned char _header[15];
    int _headerLength;
    int _headerReceived;
    int _peerChunkSize;
    int _ourChunkSize;
}

/* class methods */
+ (id)createForSocket:(id)socket;

/* instance methods */
- (id)initWithSocket:(id)socket;
- (id)streamForCSID:(int)csid;
- (id)getReaderForCSID:(int)csid;
- (void)setPeerChunkSize:(int)size;
- (void)setOurChunkSize:(int)size;
- (_Bool)sendMessage:(id)message;
- (int)requestedBytes;
- (id)readBytes:(id)bytes;

@end

#endif /* PTVRTMPStreamSet_h */
