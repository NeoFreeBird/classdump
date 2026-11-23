//
#ifndef TUCWebAdOverlay_h
#define TUCWebAdOverlay_h
@import Foundation;

#include "TAFBottomOverlayContentViewProvider-Protocol.h"
#include "TAFBottomOverlayContentViewable-Protocol.h"
#include "TAFBottomOverlayContentViewableDelegate-Protocol.h"
#include "TUCDetailsComponentModel.h"
#include "TUCUnifiedCard.h"

@class NSObject, TIPImagePipeline;

@interface TUCWebAdOverlay : NSObject <TAFBottomOverlayContentViewableDelegate, TAFBottomOverlayContentViewProvider> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 $__lazy_storage_$_overlayView;
}

@property (nonatomic, readonly) id <TAFBottomOverlayContentViewable> overlayContentView;
@property (nonatomic, readonly) TUCUnifiedCard *unifiedCard;
@property (nonatomic, readonly) Class imageViewType;
@property (nonatomic, readonly) TIPImagePipeline *imagePipeline;
@property (nonatomic, readonly) TUCDetailsComponentModel *detailsComponentModel;
@property (nonatomic, readonly) id /* block */ tapHandler;

/* instance methods */
- (void)bottomOverlayWasTappedWithOverlay:(id)overlay;
- (id)initWithUnifiedCard:(id)card imageViewType:(Class)type imagePipeline:(id)pipeline tapHandler:(id /* block */)handler;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUCWebAdOverlay_h */
