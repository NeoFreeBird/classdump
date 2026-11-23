//
#ifndef T1UnifiedCardCell_h
#define T1UnifiedCardCell_h
@import Foundation;

#include "T1AutoplayableContainer-Protocol.h"
#include "T1UnifiedCardView.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"

@class NSString, TFNDataViewController, TFNTableViewCell, TFSTwitterScribeContext, TIPImagePipeline;

@interface T1UnifiedCardCell : TFNTableViewCell <TFNLayoutMetricsEnvironment, TUCComponentViewEventDelegate, T1AutoplayableContainer>

@property (retain, nonatomic) T1UnifiedCardView *unifiedCardView;
@property (weak, nonatomic) TFNDataViewController *dataViewController;
@property (retain, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (copy, nonatomic) id /* block */ unifiedCardComponentActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellLayoutForCardItem:(id)item viewRegistry:(id)registry layoutMetrics:(id)metrics withPreviousLayout:(id)layout;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (id)autoplayable;
- (void)setCellLayout:(id)layout;
- (void)prepareForReuse;
- (id)calculatedLayoutMetrics;
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;

@end

#endif /* T1UnifiedCardCell_h */
