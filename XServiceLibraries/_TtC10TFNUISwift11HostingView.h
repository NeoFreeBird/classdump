//
#ifndef _TtC10TFNUISwift11HostingView_h
#define _TtC10TFNUISwift11HostingView_h
@import Foundation;

@class Swift.Bool, TFNUISwift.HostingEnvironmentViewModel, UIView, _$s7SwiftUI19UIHostingControllerCMn _$s7SwiftUI7AnyViewVMn, _$sSo16UIViewControllerCSgXw;

@interface TFNUISwift.HostingView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for SwiftUI.UIHostingController nominal type descriptor for SwiftUI.AnyView hostingController;
    TFNUISwift.HostingEnvironmentViewModel hostingViewModel;
    Swift.Bool managesViewControllerHierarchy;
    weak __C.UIViewController? parentController;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)dynamicColorsDidReloadWithNotification:(id)notification;
- (void)appWillEnterForeground;
- (void)willMoveToSuperview:(id)superview;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10TFNUISwift11HostingView_h */
