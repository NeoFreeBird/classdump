//
#ifndef _TtCO21TwitterUnifiedCardsUI15ProductExplorer12SelectorView_h
#define _TtCO21TwitterUnifiedCardsUI15ProductExplorer12SelectorView_h
@import Foundation;

@class TwitterUnifiedCardsUI.ProductExplorer.ViewModel, TwitterUnifiedCardsUI.ProductExplorerSelectorViewDelegate ?, UIView, _$sSa -> TwitterUnifiedCardsUI.ProductExplorer.SelectorButtonView, _$sSo11UIStackViewCSg, _$sSo12UIScrollViewCSg, _$sSo16TIPImagePipelineCSg;

@interface TwitterUnifiedCardsUI.ProductExplorer.SelectorView : UIView { // (Swift)
    /* instance variables */
    TwitterUnifiedCardsUI.ProductExplorerSelectorViewDelegate ? delegate;
    __C.UIScrollView? $__lazy_storage_$_scrollView;
    __C.UIStackView? $__lazy_storage_$_stackView;
    TwitterUnifiedCardsUI.ProductExplorer.ViewModel viewModel;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Array -> TwitterUnifiedCardsUI.ProductExplorer.SelectorButtonView buttons;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)buttonPressedWithSender:(id)sender;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI15ProductExplorer12SelectorView_h */
