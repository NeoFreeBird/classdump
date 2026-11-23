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
