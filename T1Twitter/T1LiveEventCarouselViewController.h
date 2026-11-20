//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCarouselViewController_h
#define T1LiveEventCarouselViewController_h
@import Foundation;

#include "T1LiveEventCarousel.h"
#include "T1LiveEventCarouselCellsRowAdapterDelegate-Protocol.h"
#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventCarouselViewControllerDelegate-Protocol.h"

@class NSIndexPath, NSNumber, NSString, TFNItemsDataViewController, UICollectionViewFlowLayout;

@interface T1LiveEventCarouselViewController : TFNItemsDataViewController <T1LiveEventCarouselCellsRowAdapterDelegate>

@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) _Bool hasSetInitialContentOffset;
@property (retain, nonatomic) T1LiveEventCarousel *carousel;
@property (retain, nonatomic) NSNumber *selectedCarouselIndex;
@property (retain, nonatomic) T1LiveEventCarouselEntry *selectedEntry;
@property (weak, nonatomic) id <T1LiveEventCarouselViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithCarousel:(id)carousel imagePipeline:(id)pipeline userBadger:(id)badger scribe:(id)scribe impressionLogger:(id)logger;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)tfn_fontSizeChanged;
- (id)_t1_viewModelsForCarouselEntries:(id)entries;
- (void)_t1_centerItemAtIndexPathOnCarousel:(id)carousel;
- (void)_t1_invalidateCollectionViewLayoutIfNeeded;
- (void)_t1_selectCarouselEntryAtIndexPath:(id)path;
- (void)_t1_deselectCarouselEntryAtIndexPath:(id)path;
- (id)scribeContextForCarouselCellsRowAdapter:(id)adapter tilePosition:(id)position;

@end

#endif /* T1LiveEventCarouselViewController_h */
