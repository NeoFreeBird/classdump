//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift24StandardEmbeddedCardView_h
#define _TtC14T1TwitterSwift24StandardEmbeddedCardView_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNPreviewable-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.StandardEmbeddedCardViewAutoplayPlayerControllerViewContainer ?, T1TwitterSwift.StandardEmbeddedCardViewDelegate ?, T1TwitterSwift.StandardEmbeddedCardViewModel ?, UIView, _$sSo19T1CardContainerViewC, _$sSo21TFNTwitterCardContextCSg, _$sSo22TUICardViewLayoutStateCSg;

@interface T1TwitterSwift.StandardEmbeddedCardView : UIView <T1AutoplayableContainer, TFNLayoutMetricsEnvironment, TUICardViewDelegate, TFNPreviewable> { // (Swift)
    /* instance variables */
    T1TwitterSwift.StandardEmbeddedCardViewDelegate ? delegate;
    Swift.Bool loadExternalResources;
    __C.T1CardContainerView cardContainerView;
    __C.TFNTwitterCardContext? cardContext;
    __C.TUICardViewLayoutState? cardLayoutState;
    T1TwitterSwift.StandardEmbeddedCardViewAutoplayPlayerControllerViewContainer ? cardViewAutoplayPlayerControllerViewContainer;
    Swift.Bool needsCardUpdate;
    T1TwitterSwift.StandardEmbeddedCardViewModel ? viewModel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)autoplayable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;
- (void)cardView:(id)view presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* _TtC14T1TwitterSwift24StandardEmbeddedCardView_h */
