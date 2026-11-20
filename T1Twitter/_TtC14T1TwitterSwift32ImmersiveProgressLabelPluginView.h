//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32ImmersiveProgressLabelPluginView_h
#define _TtC14T1TwitterSwift32ImmersiveProgressLabelPluginView_h
@import Foundation;

@class T1TwitterSwift.ImmersiveCardState ?, T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersivePluginViewDelegate ?, UIView, _$sSo7UILabelCSg;

@interface T1TwitterSwift.ImmersiveProgressLabelPluginView : UIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardState ? state;
    __C.UILabel? $__lazy_storage_$_progressLabel;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift32ImmersiveProgressLabelPluginView_h */
