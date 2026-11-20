//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO21TwitterUnifiedCardsUI15ProductExplorer13DataSaverView_h
#define _TtCO21TwitterUnifiedCardsUI15ProductExplorer13DataSaverView_h
@import Foundation;

@class TwitterUnifiedCardsUI.ProductExplorer.ItemViewModel ?, TwitterUnifiedCardsUI.ProductExplorerDataSaverViewDelegate ?, UIView, _$s14TFSTwitterCore18TwitterEntityMediaCMn, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo8UIButtonC;

@interface TwitterUnifiedCardsUI.ProductExplorer.DataSaverView : UIView { // (Swift)
    /* instance variables */
    TwitterUnifiedCardsUI.ProductExplorerDataSaverViewDelegate ? delegate;
    __C.UIImageView imageView;
    __C.UIButton playButton;
    TwitterUnifiedCardsUI.ProductExplorer.ItemViewModel ? itemViewModel;
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for TFSTwitterCore.TwitterEntityMedia mediaEntity;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)tappedPlayButtonWithSender:(id)sender;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI15ProductExplorer13DataSaverView_h */
