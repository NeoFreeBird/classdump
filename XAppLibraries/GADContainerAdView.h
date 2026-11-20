//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADContainerAdView_h
#define GADContainerAdView_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADView.h"

@class NSArray, UIView;

@interface GADContainerAdView : GADView {
    /* instance variables */
    NSArray *_fixedSizeConstraints;
    GADObserverCollection *_observer;
}

@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) id resizeMessageSource;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame context:(id)context;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)constrainSubviewToSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* GADContainerAdView_h */
