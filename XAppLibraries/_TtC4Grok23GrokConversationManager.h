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
