//
#ifndef _TFNLinkTextLabelProperties_h
#define _TFNLinkTextLabelProperties_h
@import Foundation;

@class NSLayoutManager, NSObject, NSTextContainer, NSTextStorage, UIColor;

@interface _TFNLinkTextLabelProperties : NSObject {
    /* instance variables */
    _Bool _highlightIsOn;
    UIColor *_highlightBackgroundColor;
    long long _highlightBehavior;
    id /* block */ _tapHandler;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
}

/* instance methods */

@end

#endif /* _TFNLinkTextLabelProperties_h */
