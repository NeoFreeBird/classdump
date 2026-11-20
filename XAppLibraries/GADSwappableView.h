//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
