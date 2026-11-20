//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCO21TwitterUnifiedCardsUI15ProductExplorer11Model3DView_h
#define _TtCO21TwitterUnifiedCardsUI15ProductExplorer11Model3DView_h
@import Foundation;

#include "SCNSceneRendererDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class SCNView, TwitterUnifiedCards.ProductExplorerRotationType, TwitterUnifiedCardsUI.ProductExplorerModel3DViewDelegate ?, _$sSf, _$sSfSg, _$sSo22UIPanGestureRecognizerCSg, _$sSo7SCNNodeCSg, _$sSo8SCNSceneCSg, __C.CGPoint;

@interface TwitterUnifiedCardsUI.ProductExplorer.Model3DView : SCNView <SCNSceneRendererDelegate, UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    Swift.Float PerspectiveElevationAmount;
    __C.SCNScene? modelScene;
    __C.SCNNode? cameraOrbit;
    TwitterUnifiedCards.ProductExplorerRotationType rotationType;
    TwitterUnifiedCardsUI.ProductExplorerModel3DViewDelegate ? viewDelegate;
    __C.UIPanGestureRecognizer? $__lazy_storage_$_gestureRecognizer;
    __C.CGPoint previousPanTranslation;
    Swift.Float? previousScrollHeightRatio;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)didPanWithRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame options:(id)options;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtCO21TwitterUnifiedCardsUI15ProductExplorer11Model3DView_h */
