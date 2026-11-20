//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CompositionStatusAdapter_h
#define T1CompositionStatusAdapter_h
@import Foundation;

#include "T1StatusTableRowAdapter.h"
#include "_TtP14TFSTwitterCore18URTImpressionCache_-Protocol.h"

@class TFNItemsTableRowAdapter, TFNTwitterAccount, TFSObjectCache;

@interface T1CompositionStatusAdapter : TFNItemsTableRowAdapter

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) id <TFSTwitterCore.URTImpressionCache> scribeImpressionCache;
@property (retain, nonatomic) T1StatusTableRowAdapter *statusAdapter;
@property (retain, nonatomic) TFSObjectCache *undoableTweetImpressionCache;
@property (copy, nonatomic) id /* block */ statusOptionsBlock;

/* instance methods */
- (id)initWithAccount:(id)account scribeImpressionCache:(id)cache;
- (id)init;
- (id)dataViewController:(id)controller objectIdentifierForItem:(id)item withOptions:(id)options;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller cellLayoutForItem:(id)item withOptions:(id)options previousLayout:(id)layout atIndexPath:(id)path;
- (id)dataViewController:(id)controller cellLayoutObjectIdentifierForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)t1_didTapUndoTweetEvent:(id)event controller:(id)controller;
- (void)showUndoableTweetDetail:(id)detail;

@end

#endif /* T1CompositionStatusAdapter_h */
