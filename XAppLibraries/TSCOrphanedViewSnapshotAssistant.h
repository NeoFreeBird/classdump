//
#ifndef TSCOrphanedViewSnapshotAssistant_h
#define TSCOrphanedViewSnapshotAssistant_h
@import Foundation;

@class UIView;

@interface TSCOrphanedViewSnapshotAssistant : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 layoutMetrics;
    @40@0:8:16@24@32 scale;
    @40@0:8:16@24@32 contentView;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)prepareSnapshotFor:(id)_for layoutMetrics:(id)metrics scale:(double)scale;
- (id)snapshot;
- (id)takeSnapshot;
- (id)calculatedLayoutMetrics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TSCOrphanedViewSnapshotAssistant_h */
