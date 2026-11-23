//
#ifndef TTAClippedSnapshotView_h
#define TTAClippedSnapshotView_h
@import Foundation;

@class UIView;

@interface TTAClippedSnapshotView : UIView {
    /* instance variables */
    UIView *_snapshot;
    struct CGPoint { double x; double y; } _snapshotOrigin;
}

/* instance methods */
- (id)initWithSnapshot:(id)snapshot frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)clipToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* TTAClippedSnapshotView_h */
