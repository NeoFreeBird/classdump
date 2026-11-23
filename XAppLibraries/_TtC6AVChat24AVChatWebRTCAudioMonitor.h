//
#ifndef _TtC6AVChat24AVChatWebRTCAudioMonitor_h
#define _TtC6AVChat24AVChatWebRTCAudioMonitor_h
@import Foundation;

#include "PTVWebRTCAudioMonitor-Protocol.h"

@class NSObject, _$sSo15PTVAudioMonitorC;

@interface AVChat.AVChatWebRTCAudioMonitor : NSObject <PTVWebRTCAudioMonitor> { // (Swift)
    /* instance variables */
    __C.PTVAudioMonitor _ptvAudioMonitor;
}

@property (nonatomic, readonly) int audioLevel;

/* instance methods */
- (void)onAudioBuffer:(void *)buffer frames:(int)frames channels:(int)channels bits:(int)bits;
- (id)init;

@end

#endif /* _TtC6AVChat24AVChatWebRTCAudioMonitor_h */
