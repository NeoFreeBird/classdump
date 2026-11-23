//
#ifndef T1LiveEventCarouselCellsRowAdapter_h
#define T1LiveEventCarouselCellsRowAdapter_h
@import Foundation;

#include "T1LiveEventCarouselCellsRowAdapterDelegate-Protocol.h"
#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "_TtP14TFSTwitterCore18URTImpressionCache_-Protocol.h"

@class NSString, TFNItemsTableRowAdapter, TFNTwitterScribeImpressionLogger, TIPImagePipeline, TUIUserBadger;

@interface T1LiveEventCarouselCellsRowAdapter : TFNItemsTableRowAdapter <TFNCellVisibilityBroadcasterDelegate>

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) TUIUserBadger *userBadger;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) id <TFSTwitterCore.URTImpressionCache> scribeImpressionCache;
@property (readonly, nonatomic) TFNTwitterScribeImpressionLogger *impressionLogger;
@property (weak, nonatomic) id <T1LiveEventCarouselCellsRowAdapterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImagePipeline:(id)pipeline userBadger:(id)badger scribe:(id)scribe scribeImpressionCache:(id)cache impressionLogger:(id)logger;
- (id)init;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (void)_t1_setupCellVisibilityBroadcasterForDataViewController:(id)controller cell:(id)cell indexPath:(id)path viewModel:(id)model;
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;

@end

#endif /* T1LiveEventCarouselCellsRowAdapter_h */
