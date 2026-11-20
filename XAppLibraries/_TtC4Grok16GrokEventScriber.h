//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok16GrokEventScriber_h
#define _TtC4Grok16GrokEventScriber_h
@import Foundation;

@class Grok.GrokSettingsProviding, NSObject, _$sSo13TFNScribeSink_p, _$sSo23TFSTwitterScribeContextC;

@interface Grok.GrokEventScriber : NSObject { // (Swift)
    /* instance variables */
    __C.TFSTwitterScribeContext scribeContext;
    __C.TFNScribeSink scribeSink;
    Grok.GrokSettingsProviding settingsProvider;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC4Grok16GrokEventScriber_h */
