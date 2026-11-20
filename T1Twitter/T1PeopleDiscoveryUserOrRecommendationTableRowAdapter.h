//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PeopleDiscoveryUserOrRecommendationTableRowAdapter_h
#define T1PeopleDiscoveryUserOrRecommendationTableRowAdapter_h
@import Foundation;

#include "T1UserOrRecommendationTableRowAdapter.h"

@interface T1PeopleDiscoveryUserOrRecommendationTableRowAdapter : T1UserOrRecommendationTableRowAdapter

/* instance methods */
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller scribeImpressionContextForItem:(id)item atIndexPath:(id)path;
- (id)dataViewController:(id)controller scribeItemForItem:(id)item atIndexPath:(id)path;

@end

#endif /* T1PeopleDiscoveryUserOrRecommendationTableRowAdapter_h */
