//
#ifndef _TtC4Grok22OldGrokScrollViewModel_h
#define _TtC4Grok22OldGrokScrollViewModel_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Grok.OldGrokScrollViewOptions, NSObject, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn __C.CGSize _$ss5NeverOMn, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$s12CoreGraphics7CGFloatVMn ?, _$s7Combine9PublishedVMn _$sSSSg, _$sSD -> _$ss11AnyHashableVMn __C.CGRect, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo12UIScrollViewCSgXw, _$sSo22UIViewPropertyAnimatorCSg;

@interface Grok.OldGrokScrollViewModel : NSObject <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    Grok.OldGrokScrollViewOptions options;
    nominal type descriptor for Combine.Published Swift.Bool _stickToBottom;
    nominal type descriptor for Combine.Published Swift.String? _alignTopItemID;
    nominal type descriptor for Combine.CurrentValueSubject __C.CGSize nominal type descriptor for Swift.Never scrollContentSize;
    Swift.Dictionary -> nominal type descriptor for Swift.AnyHashable __C.CGRect itemIDToFrame;
    weak __C.UIScrollView? scrollView;
    nominal type descriptor for Combine.Published Swift.Bool _isAtBottom;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never reachedTop;
    nominal type descriptor for Combine.Published nominal type descriptor for CoreGraphics.CGFloat ? _contentMinimumHeight;
    __C.UIViewPropertyAnimator? $__lazy_storage_$_animator;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (id)init;

@end

#endif /* _TtC4Grok22OldGrokScrollViewModel_h */
