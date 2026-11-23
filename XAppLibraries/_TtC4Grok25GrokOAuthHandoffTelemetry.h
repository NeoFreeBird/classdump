//
#ifndef _TtC4Grok25GrokOAuthHandoffTelemetry_h
#define _TtC4Grok25GrokOAuthHandoffTelemetry_h
@import Foundation;

@class NSObject, _$sSo13TFNScribeSink_pSSSgc;

@interface Grok.GrokOAuthHandoffTelemetry : NSObject { // (Swift)
    /* instance variables */
    (Swift.String?) -> __C.TFNScribeSink sinkProvider;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)recordHandoffSchemeDeeplinkIfNeeded:(id)needed;
- (id)init;

@end

#endif /* _TtC4Grok25GrokOAuthHandoffTelemetry_h */
