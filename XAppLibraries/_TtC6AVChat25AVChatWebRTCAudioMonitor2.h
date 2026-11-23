//
#ifndef _TtC6AVChat25AVChatWebRTCAudioMonitor2_h
#define _TtC6AVChat25AVChatWebRTCAudioMonitor2_h
@import Foundation;

#include "PTVWebRTCAudioMonitor-Protocol.h"
#include "RTCAudioMonitor-Protocol.h"

@class NSObject, _$s10Foundation4DateVMn ?, _$ss5Int32VMn, _$ss5Int32VMn acc_AA5countt;

@interface AVChat.AVChatWebRTCAudioMonitor2 : NSObject <PTVWebRTCAudioMonitor, RTCAudioMonitor> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Date ? updateTimeStamp;
    nominal type descriptor for Swift.Int32 acc_AA5countt updateLevels;
}

@property (nonatomic) int audioLevel;

/* instance methods */
- (void)onAudioBuffer:(void *)buffer frames:(int)frames channels:(int)channels bits:(int)bits;
- (id)init;

@end

#endif /* _TtC6AVChat25AVChatWebRTCAudioMonitor2_h */
