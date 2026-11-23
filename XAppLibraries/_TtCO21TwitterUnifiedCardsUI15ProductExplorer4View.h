//
#ifndef _TtCO21TwitterUnifiedCardsUI15ProductExplorer4View_h
#define _TtCO21TwitterUnifiedCardsUI15ProductExplorer4View_h
@import Foundation;

#include "SCNSceneRendererDelegate-Protocol.h"

@class Swift.Bool, TFNLayoutableView, TwitterUnifiedCards.ProductExplorerRotationType, TwitterUnifiedCardsUI.ProductExplorer.DataSaverView ?, TwitterUnifiedCardsUI.ProductExplorer.Model3DContainerView ?, TwitterUnifiedCardsUI.ProductExplorer.SelectorView ?, TwitterUnifiedCardsUI.ProductExplorer.ViewModel, TwitterUnifiedCardsUI.ProductExplorerViewDelegate ?, _$sSo16TIPImagePipelineCSg, _$sSo9TFNButtonC;

@interface TwitterUnifiedCardsUI.ProductExplorer.View : TFNLayoutableView <SCNSceneRendererDelegate> { // (Swift)
    /* instance variables */
    TwitterUnifiedCardsUI.ProductExplorer.SelectorView ? selectorView;
    __C.TFNButton buttonView;
    TwitterUnifiedCardsUI.ProductExplorer.Model3DContainerView ? model3DContainerView;
    TwitterUnifiedCardsUI.ProductExplorer.DataSaverView ? dataSaverView;
    TwitterUnifiedCardsUI.ProductExplorer.ViewModel viewModel;
    TwitterUnifiedCards.ProductExplorerRotationType rotationType;
    TwitterUnifiedCardsUI.ProductExplorerViewDelegate ? delegate;
    Swift.Bool isDataSaverEnabled;
    __C.TIPImagePipeline? imagePipeline;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)tappedCTAButtonWithSender:(id)sender;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI15ProductExplorer4View_h */
