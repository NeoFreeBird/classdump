//
#ifndef T1URTOnboardingTimelineFactory_h
#define T1URTOnboardingTimelineFactory_h
@import Foundation;

@class NSObject;

@interface T1URTOnboardingTimelineFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithTimelineID:(id)id timelineContext:(id)context account:(id)account includeTweetQuickPromoteEligibility:(_Bool)eligibility requestContextTransformer:(id)transformer dataViewAdapterProvider:(id)provider scribeContext:(id)context;
+ (id)searchViewControllerWithSearchParameters:(id)parameters account:(id)account emptyStateConfiguration:(id)configuration scribeContext:(id)context enableGraphQLMigration:(_Bool)qlmigration;
+ (id)selectionViewControllerWithTimelineID:(id)id timelineContext:(id)context account:(id)account includeTweetQuickPromoteEligibility:(_Bool)eligibility dataViewAdapterProvider:(id)provider scribeContext:(id)context delegate:(id)delegate;

/* instance methods */
- (id)init;

@end

#endif /* T1URTOnboardingTimelineFactory_h */
