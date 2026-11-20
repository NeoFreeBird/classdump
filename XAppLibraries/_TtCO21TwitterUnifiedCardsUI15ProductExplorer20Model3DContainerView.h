//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO21TwitterUnifiedCardsUI15ProductExplorer20Model3DContainerView_h
#define _TtCO21TwitterUnifiedCardsUI15ProductExplorer20Model3DContainerView_h
@import Foundation;

@class TwitterUnifiedCardsUI.LoadingIndicatorView, TwitterUnifiedCardsUI.ProductExplorer.ItemViewModel, TwitterUnifiedCardsUI.ProductExplorer.Model3DView, UIView, _$s13XDesignSystem4BlurCMn, _$sSS, _$sSd, _$sSo11UIImageViewC, _$sSo11UIImageViewCSg, _$sSo17TUITwitterTooltipCSg, __C.CGSize;

@interface TwitterUnifiedCardsUI.ProductExplorer.Model3DContainerView : UIView { // (Swift)
    /* instance variables */
    Swift.String IconName;
    Swift.String TooltipEvent;
    Swift.String ErrorIconName;
    Swift.Double ErrorIconHeight;
    __C.CGSize SpinnerSize;
    TwitterUnifiedCardsUI.LoadingIndicatorView activityIndicator;
    __C.TUITwitterTooltip? tooltip;
    __C.UIImageView iconImageView;
    nominal type descriptor for XDesignSystem.Blur blurView;
    TwitterUnifiedCardsUI.ProductExplorer.Model3DView model3DView;
    __C.UIImageView? errorImageView;
    TwitterUnifiedCardsUI.ProductExplorer.ItemViewModel itemViewModel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)didScrollWithNotification:(id)notification;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI15ProductExplorer20Model3DContainerView_h */
