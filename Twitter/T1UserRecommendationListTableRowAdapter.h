//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationListTableRowAdapter_h
#define T1UserRecommendationListTableRowAdapter_h
@import Foundation;

#include "ONBLingerImpressionHelper.h"

@class NSHashTable, T1UserOrRecommendationTableRowAdapter;

@interface T1UserRecommendationListTableRowAdapter : T1UserOrRecommendationTableRowAdapter {
    /* instance variables */
    NSHashTable *_customDisplayBlocks;
}

@property (retain, nonatomic) ONBLingerImpressionHelper *lingerImpressionHelper;

/* instance methods */
- (id)dataViewController:(id)controller scribeImpressionContextForItem:(id)item atIndexPath:(id)path;
- (id)dataViewController:(id)controller previewConfigurationForItem:(id)item withOptions:(id)options location:(struct CGPoint { double x0; double x1; })location inCell:(id)cell atIndexPath:(id)path;
- (void)applyOptions:(id)options toCell:(id)cell withDefaultAccessoryType:(long long)type;
- (id /* block */)private_cellIdentifierBlock;

@end

#endif /* T1UserRecommendationListTableRowAdapter_h */
