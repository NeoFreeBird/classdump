//
#ifndef TTSRecentSearchCollectionItemAdapter_h
#define TTSRecentSearchCollectionItemAdapter_h
@import Foundation;

#include "TTSRecentSearchCollectionItemAdapterDelegate-Protocol.h"

@class TFNItemsCollectionItemAdapter, TIPImagePipeline;
@protocol TTSExternalViewProviderContext, TTSRecentSearchCollectionItemAdapterContext, TTSRecentSearchCollectionViewCellContext;

@interface TTSRecentSearchCollectionItemAdapter : TFNItemsCollectionItemAdapter

@property (readonly, nonatomic) id <TTSRecentSearchCollectionViewCellContext> cellContext;
@property (readonly, nonatomic) id <TTSExternalViewProviderContext> externalViewContext;
@property (readonly, nonatomic) id <TTSRecentSearchCollectionItemAdapterContext> itemAdapterContext;
@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (weak, nonatomic) id <TTSRecentSearchCollectionItemAdapterDelegate> delegate;

/* instance methods */
- (id)initWithImagePipeline:(id)pipeline cellContext:(id)context externalViewContext:(id)context itemAdapterContext:(id)context;
- (id)init;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TTSRecentSearchCollectionItemAdapter_h */
