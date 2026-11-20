//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardCollectionViewCell_h
#define T1UnifiedCardCollectionViewCell_h
@import Foundation;

#include "T1UnifiedCardView.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"

@class NSString, TFNCollectionViewCell, TFNDataViewController, TFSTwitterScribeContext, TIPImagePipeline;

@interface T1UnifiedCardCollectionViewCell : TFNCollectionViewCell <TFNLayoutMetricsEnvironment, TUCComponentViewEventDelegate>

@property (retain, nonatomic) T1UnifiedCardView *unifiedCardView;
@property (weak, nonatomic) TFNDataViewController *dataViewController;
@property (copy, nonatomic) id /* block */ unifiedCardCollectionComponentActionBlock;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellLayoutForCardItem:(id)item viewRegistry:(id)registry layoutMetrics:(id)metrics withPreviousLayout:(id)layout;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setCellLayout:(id)layout;
- (void)prepareForReuse;
- (id)calculatedLayoutMetrics;
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;

@end

#endif /* T1UnifiedCardCollectionViewCell_h */
