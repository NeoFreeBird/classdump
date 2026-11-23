//
#ifndef _TtC17TwitterTextEditor25TextViewDelegateForwarder_h
#define _TtC17TwitterTextEditor25TextViewDelegateForwarder_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSObject, _$sSo18UITextViewDelegate_pSgXw, _$sSo20UIScrollViewDelegate_pSgXw;

@interface TwitterTextEditor.TextViewDelegateForwarder : NSObject <UIScrollViewDelegate, UITextViewDelegate> { // (Swift)
    /* instance variables */
    weak __C.UIScrollViewDelegate? scrollViewDelegate;
    weak __C.UITextViewDelegate? textViewDelegate;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidZoom:(id)zoom;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (id)viewForZoomingInScrollView:(id)view;
- (void)scrollViewWillBeginZooming:(id)zooming withView:(id)view;
- (void)scrollViewDidEndZooming:(id)zooming withView:(id)view atScale:(double)scale;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)scrollViewDidChangeAdjustedContentInset:(id)inset;
- (_Bool)textViewShouldBeginEditing:(id)editing;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidChangeSelection:(id)selection;
- (void)textViewDidChange:(id)change;
- (id)init;

@end

#endif /* _TtC17TwitterTextEditor25TextViewDelegateForwarder_h */
