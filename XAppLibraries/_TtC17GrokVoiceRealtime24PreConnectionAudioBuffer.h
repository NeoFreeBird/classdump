//
#ifndef _TtC17GrokVoiceRealtime24PreConnectionAudioBuffer_h
#define _TtC17GrokVoiceRealtime24PreConnectionAudioBuffer_h
@import Foundation;

@class Swift.Bool, _$sSa -> _$s10Foundation4DataVMn, _$sSi, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.PreConnectionAudioBuffer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int maxBufferBytes;
    Swift.Array -> nominal type descriptor for Foundation.Data buffer;
    __C.NSLock lock;
    Swift.Bool isSessionReady;
}

@end

#endif /* _TtC17GrokVoiceRealtime24PreConnectionAudioBuffer_h */
