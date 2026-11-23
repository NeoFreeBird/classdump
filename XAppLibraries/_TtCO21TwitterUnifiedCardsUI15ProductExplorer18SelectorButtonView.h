//
#ifndef _TtCO21TwitterUnifiedCardsUI15ProductExplorer18SelectorButtonView_h
#define _TtCO21TwitterUnifiedCardsUI15ProductExplorer18SelectorButtonView_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s14TFSTwitterCore18TwitterEntityMediaCMn, _$sSS, _$sSi, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg;

@interface TwitterUnifiedCardsUI.ProductExplorer.SelectorButtonView : UIView <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    __C.UIImageView imageView;
    Swift.Int index;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for TFSTwitterCore.TwitterEntityMedia mediaEntity;
    Swift.Bool selected;
    nominal type descriptor for CoreGraphics.CGFloat ImageToBorderPadding;
    Swift.String ErrorIconName;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)tui_fetchHelper:(id)helper didLoadInitialImageFromSource:(long long)source;
- (void)tui_fetchHelper:(id)helper didFailToLoadImageWithError:(id)error;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI15ProductExplorer18SelectorButtonView_h */
