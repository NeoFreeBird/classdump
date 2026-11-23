//
#ifndef ONBUserTileGroupTableRowAdapter_h
#define ONBUserTileGroupTableRowAdapter_h
@import Foundation;

#include "ONBLingerImpressionHelper.h"
#include "ONBUserTileGroupCell.h"
#include "ONBUserTileGroupCellDelegate-Protocol.h"
#include "ONBUserTileGroupTableRowAdapterDelegate-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSHashTable, TFNItemsTableRowAdapter, TIPImagePipeline;

@interface ONBUserTileGroupTableRowAdapter : TFNItemsTableRowAdapter <ONBUserTileGroupCellDelegate> {
    /* instance variables */
    id <ONBUserTileGroupTableRowAdapterDelegate> _delegate;
    NSHashTable *_customDisplayBlocks;
    ONBUserTileGroupCell *_prototypeCell;
    TIPImagePipeline *_imagePipeline;
    id <TPSFeatureSwitchesAccess> _featureSwitches;
}

@property (retain, nonatomic) ONBLingerImpressionHelper *lingerImpressionHelper;

/* instance methods */
- (id)initWithImagePipeline:(id)pipeline featureSwitches:(id)switches delegate:(id)delegate;
- (void)applyOptions:(id)options toCell:(id)cell withDefaultAccessoryType:(long long)type;
- (id)dataViewController:(id)controller objectIdentifierForItem:(id)item withOptions:(id)options;
- (id)identifierForUserTileGroup:(id)group;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)userTileGroupCell:(id)cell didSelectUserViewModel:(id)model inView:(id)view;
- (void)userTileGroupCell:(id)cell didDeselectUserViewModel:(id)model inView:(id)view;
- (void)userTileGroupCell:(id)cell didSelectAllForUserRecommendationGroup:(id)group;

@end

#endif /* ONBUserTileGroupTableRowAdapter_h */
