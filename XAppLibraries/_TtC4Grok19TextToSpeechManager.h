//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok19TextToSpeechManager_h
#define _TtC4Grok19TextToSpeechManager_h
@import Foundation;

@class Swift.Bool, _$s7Combine19CurrentValueSubjectCMn Grok.TextToSpeechPlayer ? _$ss5NeverOMn, _$sSDySo8NSStringC Grok.TextToSpeechStreamingCore, _$sSSSgyScMYcc, _$sSaySo8NSObject_pG, _$sScs -> _$s16GrokBackendProto0a16Api_ReadResponseF0VMn _$ss5ErrorMp _$sGSS_SSSgtYaKScMYcc, _$sSi, _$sSo20NSNotificationCenterC, _$sSo7NSCacheCySo8NSStringC Grok.TextToSpeechStreamingCore, _$sSo7NSCacheCySo8NSStringC Grok.TextToSpeechWAVCore, _$sSo8NSStringCSg, _TtCs12_SwiftObject;

@interface Grok.TextToSpeechManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool keepsPlayerOpenAfterCompletion;
    @Swift.MainActor () -> Swift.String? selectedVoiceID;
    Swift.AsyncThrowingStream -> nominal type descriptor for GrokBackendProto.GrokApi_ReadResponseResponse protocol descriptor for Swift.Error _$sGSS_SSSgtYaKScMYcc readResponseStream;
    nominal type descriptor for Combine.CurrentValueSubject Grok.TextToSpeechPlayer ? nominal type descriptor for Swift.Never _currentPlayer;
    Swift.Int generation;
    Swift.Dictionary empty-list __C.NSString Grok.TextToSpeechStreamingCore activeStreamCores;
    __C.NSString? currentPlayerCacheKey;
    __C.NSCache empty-list __C.NSString Grok.TextToSpeechStreamingCore streamCoreCache;
    __C.NSCache empty-list __C.NSString Grok.TextToSpeechWAVCore wavCoreCache;
    __C.NSNotificationCenter notificationCenter;
    [__C.NSObject] lifecycleObservers;
    Swift.Bool isInBackground;
}

@end

#endif /* _TtC4Grok19TextToSpeechManager_h */
