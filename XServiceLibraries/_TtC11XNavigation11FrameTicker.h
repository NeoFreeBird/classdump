//
#ifndef _TtC11XNavigation11FrameTicker_h
#define _TtC11XNavigation11FrameTicker_h
@import Foundation;

@class NSObject, _$sSo13CADisplayLinkCSg, _$syycSg;

@interface XNavigation.FrameTicker : NSObject { // (Swift)
    /* instance variables */
    __C.CADisplayLink? link;
    (() -> ())? onFrame;
}

/* instance methods */
- (void)step:(id)step;
- (id)init;

@end

#endif /* _TtC11XNavigation11FrameTicker_h */
