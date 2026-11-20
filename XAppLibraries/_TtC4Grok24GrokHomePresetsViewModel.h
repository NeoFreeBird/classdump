//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok24GrokHomePresetsViewModel_h
#define _TtC4Grok24GrokHomePresetsViewModel_h
@import Foundation;

@class Grok.GrokEventScriber, Grok.GrokSettingsProvider, _$s7Combine9PublishedVMn _$sySa -> Grok.GrokPreset, _$sSbyc, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sySSc, _$syyc, _$syycSg, _TtCs12_SwiftObject;

@interface Grok.GrokHomePresetsViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> Grok.GrokPreset _presets;
    Grok.GrokEventScriber grokScriber;
    Grok.GrokSettingsProvider settingsProvider;
    () -> () focusInputBar;
    () -> () goToVoiceMode;
    () -> Swift.Bool isVoiceModeAvailable;
    (Swift.String) -> () openPaywall;
    Grok.GrokSectionPrompt function type (escaping) sendPreset;
    (() -> ())? presentAccountLinkEntry;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC4Grok24GrokHomePresetsViewModel_h */
