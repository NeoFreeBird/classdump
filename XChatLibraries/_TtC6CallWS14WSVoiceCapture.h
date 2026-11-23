//
#ifndef _TtC6CallWS14WSVoiceCapture_h
#define _TtC6CallWS14WSVoiceCapture_h
@import Foundation;

@class CallMedia.UnfairLock, Swift.Bool, _$s10Foundation4DateVMn ?, _$sSo13AVAudioFormatCSg, _$sSo16AVAudioConverterCSg, _TtCs12_SwiftObject;

@interface CallWS.WSVoiceCapture : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallMedia.UnfairLock lock;
    Swift.Bool isMuted;
    nominal type descriptor for Foundation.Date ? mutedUntil;
    __C.AVAudioConverter? converter;
    __C.AVAudioFormat? converterInputFormat;
}

@end

#endif /* _TtC6CallWS14WSVoiceCapture_h */
