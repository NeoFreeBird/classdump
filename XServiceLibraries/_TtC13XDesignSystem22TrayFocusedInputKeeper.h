//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem22TrayFocusedInputKeeper_h
#define _TtC13XDesignSystem22TrayFocusedInputKeeper_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSObject, Swift.Bool, XDesignSystem.TrayFocusedInputKeeper.Reveal, _$sSo12UIScrollViewC;

@interface XDesignSystem.TrayFocusedInputKeeper : NSObject <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    __C.UIScrollView scrollView;
    XDesignSystem.TrayFocusedInputKeeper.Reveal lastReveal;
    Swift.Bool isRevealPending;
}

/* instance methods */
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (id)init;

@end

#endif /* _TtC13XDesignSystem22TrayFocusedInputKeeper_h */
