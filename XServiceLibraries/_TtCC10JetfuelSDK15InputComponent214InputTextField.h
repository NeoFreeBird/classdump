//
#ifndef _TtCC10JetfuelSDK15InputComponent214InputTextField_h
#define _TtCC10JetfuelSDK15InputComponent214InputTextField_h
@import Foundation;

@class UITextField, _$syycSg;

@interface JetfuelSDK.InputComponent2.InputTextField : UITextField { // (Swift)
    /* instance variables */
    (() -> ())? onNonTransparentSubviewAddition;
    (() -> ())? onNonTransparentSubviewRemoval;
}

/* instance methods */
- (void)addSubview:(id)subview;
- (void)willRemoveSubview:(id)subview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtCC10JetfuelSDK15InputComponent214InputTextField_h */
