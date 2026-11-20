//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok23GrokConversationManager_h
#define _TtC4Grok23GrokConversationManager_h
@import Foundation;

@class Grok.GrokEventScriber ?, Grok0A13Authenticable_pSgXw, NSObject;

@interface Grok.GrokConversationManager : NSObject { // (Swift)
    /* instance variables */
    Grok0A13Authenticable_pSgXw delegate;
    Grok.GrokEventScriber ? grokEventScriber;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate grokEventScriber:(id)scriber;
- (id)init;

@end

#endif /* _TtC4Grok23GrokConversationManager_h */
