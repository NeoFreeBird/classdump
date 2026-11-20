//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer19DeviceAudioRecorder_h
#define _TtC19ChatMessageComposer19DeviceAudioRecorder_h
@import Foundation;

#include "AVAudioRecorderDelegate-Protocol.h"

@class ChatMessageComposer.AudioRecorderListener ?, ChatModelsCore.ChatHost, DispatchQueue, NSObject, _$s10Foundation3URLVMn ?, _$sSo15AVAudioRecorderCSg, _$sSo24OS_dispatch_source_timer_pSg;

@interface ChatMessageComposer.DeviceAudioRecorder : NSObject <AVAudioRecorderDelegate> { // (Swift)
    /* instance variables */
    ChatMessageComposer.AudioRecorderListener ? listener;
    ChatModelsCore.ChatHost chatHost;
    DispatchQueue queue;
    __C.AVAudioRecorder? audioRecorder;
    nominal type descriptor for Foundation.URL ? fileURL;
    __C.OS_dispatch_source_timer? levelTimer;
}

/* instance methods */
- (void)audioRecorderDidFinishRecording:(id)recording successfully:(_Bool)successfully;
- (void)audioRecorderEncodeErrorDidOccur:(id)occur error:(id)error;
- (id)init;

@end

#endif /* _TtC19ChatMessageComposer19DeviceAudioRecorder_h */
