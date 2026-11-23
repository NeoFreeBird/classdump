//
#ifndef PTVBroadcastEditSaveChangesView_h
#define PTVBroadcastEditSaveChangesView_h
@import Foundation;

#include "PTVBroadcastEditSaveChangesViewDelegate-Protocol.h"

@class UIButton, UIView;

@interface PTVBroadcastEditSaveChangesView : UIView

@property (readonly, nonatomic) UIButton *saveChangesButton;
@property (readonly, weak, nonatomic) id <PTVBroadcastEditSaveChangesViewDelegate> delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)traitCollectionDidChange:(id)change;
- (void)saveChangesButtonPressed;
- (void)enterSaveChangesState;
- (void)enterSavingState;
- (void)enterSavedState;

@end

#endif /* PTVBroadcastEditSaveChangesView_h */
