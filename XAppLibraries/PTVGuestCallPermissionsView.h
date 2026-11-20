//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestCallPermissionsView_h
#define PTVGuestCallPermissionsView_h
@import Foundation;

#include "PTVGuestCallPermissionsViewDelegate-Protocol.h"

@class UIButton, UIView;

@interface PTVGuestCallPermissionsView : UIView {
    /* instance variables */
    PTVGuestCallPermissionsView *_weakSelf;
}

@property (retain, nonatomic) UIButton *cameraButton;
@property (retain, nonatomic) UIButton *microphoneButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (weak, nonatomic) id <PTVGuestCallPermissionsViewDelegate> delegate;
@property (nonatomic) unsigned long long mode;

/* class methods */
+ (double)HeightForMode:(unsigned long long)mode;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setupButtons;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)reloadPermissions;
- (void)handleTapOnButton:(id)button;
- (void)displayButtons:(id)buttons;

@end

#endif /* PTVGuestCallPermissionsView_h */
