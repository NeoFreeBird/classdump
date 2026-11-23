//
#ifndef GADSwappableView_h
#define GADSwappableView_h
@import Foundation;

#include "GADView.h"

@class UIView;

@interface GADSwappableView : GADView {
    /* instance variables */
    UIView *_viewToSwap;
    UIView *_snapshotView;
}

/* instance methods */
- (id)initWithViewToSwap:(id)swap context:(id)context;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)addSubview:(id)subview;
- (void)swapViewForImage;
- (void)restoreSwappedView;

@end

#endif /* GADSwappableView_h */
