//
#ifndef T1ProfileHeaderViewControllerAnnouncementView_h
#define T1ProfileHeaderViewControllerAnnouncementView_h
@import Foundation;

#include "T1ProfileViewModel-Protocol.h"

@class UIView;

@interface T1ProfileHeaderViewControllerAnnouncementView : UIView

@property (weak, nonatomic) id <T1ProfileViewModel> viewModel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)init;
- (id)accessibilityLabel;
- (void)accessibilityElementDidLoseFocus;
- (void)_t1_cleanup;

@end

#endif /* T1ProfileHeaderViewControllerAnnouncementView_h */
