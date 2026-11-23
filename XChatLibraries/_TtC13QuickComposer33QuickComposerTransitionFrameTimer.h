//
#ifndef _TtC13QuickComposer33QuickComposerTransitionFrameTimer_h
#define _TtC13QuickComposer33QuickComposerTransitionFrameTimer_h
@import Foundation;

@class NSObject, QuickComposer.QuickComposerTransitionFrameTimer ?, _$sSbycSg, _$sSi, _$sSo13CADisplayLinkCSg, _$syycSg;

@interface QuickComposer.QuickComposerTransitionFrameTimer : NSObject { // (Swift)
    /* instance variables */
    __C.CADisplayLink? link;
    Swift.Int remaining;
    (() -> ())? action;
    (() -> Swift.Bool)? condition;
    QuickComposer.QuickComposerTransitionFrameTimer ? retainedSelf;
}

/* instance methods */
- (void)tick;
- (id)init;

@end

#endif /* _TtC13QuickComposer33QuickComposerTransitionFrameTimer_h */
