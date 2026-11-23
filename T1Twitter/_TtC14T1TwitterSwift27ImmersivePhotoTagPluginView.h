//
#ifndef _TtC14T1TwitterSwift27ImmersivePhotoTagPluginView_h
#define _TtC14T1TwitterSwift27ImmersivePhotoTagPluginView_h
@import Foundation;

#include "_TtP14T1TwitterSwift20T1TagSetViewDelegate_-Protocol.h"

@class T1TwitterSwift.ImmersiveCardViewModelProtocol ?, T1TwitterSwift.ImmersiveFeatureFlags, T1TwitterSwift.ImmersivePluginViewDelegate ?, T1TwitterSwift.T1TagSetView, UIView, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.ImmersivePhotoTagPluginView : UIView <T1TwitterSwift.T1TagSetViewDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ImmersivePluginViewDelegate ? delegate;
    T1TwitterSwift.ImmersiveCardViewModelProtocol ? viewModel;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.ImmersiveFeatureFlags featureFlags;
    T1TwitterSwift.T1TagSetView taggingView;
}

/* instance methods */
- (void)tagSetViewDidTap:(id)tap;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift27ImmersivePhotoTagPluginView_h */
