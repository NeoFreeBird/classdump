//
#ifndef PTVContextualMenuActionButton_h
#define PTVContextualMenuActionButton_h
@import Foundation;

@class NSLayoutConstraint, UIButton;

@interface PTVContextualMenuActionButton : UIButton {
    /* instance variables */
    NSLayoutConstraint *_separatorHeightConstraint;
}

/* instance methods */
- (id)initWithAction:(id)action hasBottomSeparator:(_Bool)separator;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* PTVContextualMenuActionButton_h */
