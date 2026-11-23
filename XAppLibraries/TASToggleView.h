//
#ifndef TASToggleView_h
#define TASToggleView_h
@import Foundation;

#include "TASToggleViewDelegate-Protocol.h"

@class TFNButton, UISwitch, UIView;

@interface TASToggleView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 toggleLabel;
}

@property (nonatomic, weak) id <TASToggleViewDelegate> delegate;
@property (nonatomic, readonly) TFNButton *toggleInfoButton;
@property (nonatomic, readonly) UISwitch *toggleSwitch;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)didTapInfoButton:(id)button;
- (void)didToggleSwitch:(id)_switch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASToggleView_h */
