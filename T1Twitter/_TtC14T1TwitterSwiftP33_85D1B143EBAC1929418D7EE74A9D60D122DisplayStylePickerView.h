//
#ifndef _TtC14T1TwitterSwiftP33_85D1B143EBAC1929418D7EE74A9D60D122DisplayStylePickerView_h
#define _TtC14T1TwitterSwiftP33_85D1B143EBAC1929418D7EE74A9D60D122DisplayStylePickerView_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@class UIView;

@interface T1TwitterSwift.(DisplayStylePickerView in _85D1B143EBAC1929418D7EE74A9D60D1) : UIView <UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *onStyleSelected;
    NSNumber"16@0:8 *isActive;
    NSNumber"16@0:8 *selectedStyle;
    NSNumber"16@0:8 *entries;
    NSNumber"16@0:8 *cashTagViews;
    NSNumber"16@0:8 *lastScrollOffsetX;
    NSNumber"16@0:8 *isInitialScrollPending;
    NSNumber"16@0:8 *pageChangeWorkItem;
    NSNumber"16@0:8 *lastClosestIndex;
    NSNumber"16@0:8 *suppressCrossingHaptic;
    NSNumber"16@0:8 *$__lazy_storage_$_collectionView;
    NSNumber"16@0:8 *$__lazy_storage_$_dataSource;
}

/* instance methods */
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwiftP33_85D1B143EBAC1929418D7EE74A9D60D122DisplayStylePickerView_h */
