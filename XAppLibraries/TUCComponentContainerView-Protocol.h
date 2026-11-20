//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentContainerView_Protocol_h
#define TUCComponentContainerView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNPreviewable-Protocol.h"

@class TIPImagePipeline;

@protocol TUCComponentContainerView <NSObject, TFNPreviewable>

@required

@property (nonatomic) _Bool hideBorder;
@property (nonatomic) _Bool roundBottomCorners;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (nonatomic) _Bool dataSaverEnabled;
@property (copy, nonatomic) id /* block */ containerShouldTap;

/* class methods */
+ (id)containerViewWithUnifiedCard:(id)card container:(id)container reusableComponentViews:(id)views componentViewRegistry:(id)registry eventDelegate:(id)delegate;
+ (id)sharedLayoutDelegate;

/* required instance methods */
- (_Bool)canSetLayoutState:(id)state;
- (void)injectViewControllerForCarousel:(id)carousel scribeContext:(id)context;
- (void)prepareForReuse;
- (id)autoplayableContainerView;
- (id)accessibilityCustomUCActions;
- (_Bool)hasURL;
- (_Bool)openURL;
- (id)componentViewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)accessibilityLabelForSuperview;
- (id)allComponentViews;
- (_Bool)isDataSaverEnabled;

@optional

@end

#endif /* TUCComponentContainerView_Protocol_h */
