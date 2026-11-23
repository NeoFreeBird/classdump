//
#ifndef ONBUserRecommendationsTableRowAdapter_h
#define ONBUserRecommendationsTableRowAdapter_h
@import Foundation;

#include "T1URTViewControllerAwareAdapter-Protocol.h"
#include "T1UserOrRecommendationTableRowAdapterDelegate-Protocol.h"

@class T1UserOrRecommendationTableRowAdapter;

@interface ONBUserRecommendationsTableRowAdapter : T1UserOrRecommendationTableRowAdapter <T1URTViewControllerAwareAdapter>

@property (weak, nonatomic) id <T1UserOrRecommendationTableRowAdapterDelegate> originalUserAdapterDelegate;

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)adapterWasUsedByURTViewController:(id)controller;

@end

#endif /* ONBUserRecommendationsTableRowAdapter_h */
