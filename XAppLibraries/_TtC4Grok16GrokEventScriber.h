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
