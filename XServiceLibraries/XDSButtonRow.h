//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XDSButtonRow_h
#define XDSButtonRow_h
@import Foundation;

#include "XDSButtonLayoutDelegate-Protocol.h"

@class UIView;

@interface XDSButtonRow : UIView <XDSButtonLayoutDelegate> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 sizingMode;
    B24@0:8@"NSString"16 sizeClass;
    B24@0:8@"NSString"16 maximumWidth;
    B24@0:8@"NSString"16 contentInsets;
    B24@0:8@"NSString"16 passesThroughTouchesBetweenItems;
    B24@0:8@"NSString"16 layoutDelegate;
    B24@0:8@"NSString"16 visibleItems;
    B24@0:8@"NSString"16 overflowedItems;
    B24@0:8@"NSString"16 occupiedContentRect;
    B24@0:8@"NSString"16 onVisibleItemsChange;
    B24@0:8@"NSString"16 onOccupiedRectChange;
    B24@0:8@"NSString"16 onOverflowChange;
    B24@0:8@"NSString"16 overflowButton;
    B24@0:8@"NSString"16 axis;
    B24@0:8@"NSString"16 overflowButtonConfiguration;
    B24@0:8@"NSString"16 items;
    B24@0:8@"NSString"16 displayedEntries;
    B24@0:8@"NSString"16 animateNextArrangement;
    B24@0:8@"NSString"16 isStagingItems;
    B24@0:8@"NSString"16 isNotifyingLayoutDelegate;
    B24@0:8@"NSString"16 lastArrangedBoundsWidth;
    B24@0:8@"NSString"16 lastArrangedBoundsHeight;
    B24@0:8@"NSString"16 lastArrangedAxis;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (void)buttonDidChangeIntrinsicSize:(id)size;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* XDSButtonRow_h */
