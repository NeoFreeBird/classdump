//
#ifndef TCRComposeUndoView_h
#define TCRComposeUndoView_h
@import Foundation;

#include "TCRComposeUndoViewDelegate-Protocol.h"

@class UIView;

@interface TCRComposeUndoView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 feedbackGenerator;
    @40@0:8:16@24@32 $__lazy_storage_$_stackView;
    @40@0:8:16@24@32 $__lazy_storage_$_undoButton;
    @40@0:8:16@24@32 $__lazy_storage_$_redoButton;
}

@property (nonatomic, weak) id <TCRComposeUndoViewDelegate> delegate;
@property (nonatomic) _Bool canUndo;
@property (nonatomic) _Bool canRedo;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)undoTapped;
- (void)redoTapped;

@end

#endif /* TCRComposeUndoView_h */
