//
#ifndef T1UserRecommendationListActionControlProviderDelegate_Protocol_h
#define T1UserRecommendationListActionControlProviderDelegate_Protocol_h
@import Foundation;

@protocol T1UserRecommendationListActionControlProviderDelegate

@required

/* required instance methods */
- (void)actionControlProvider:(id)provider didSelectUserReference:(id)reference actionControl:(id)control scribeContext:(id)context;
- (void)actionControlProvider:(id)provider didSelectUserReference:(id)reference actionControl:(id)control scribeContext:(id)context;
- (void)actionControlProvider:(id)provider didDeselectUserReference:(id)reference actionControl:(id)control scribeContext:(id)context;
- (void)actionControlProvider:(id)provider didDeselectUserReference:(id)reference actionControl:(id)control scribeContext:(id)context;
- (_Bool)actionControlProvider:(id)provider shouldSelectUserReference:(id)reference;
- (_Bool)actionControlProvider:(id)provider shouldSelectUserReference:(id)reference;

@optional

@end

#endif /* T1UserRecommendationListActionControlProviderDelegate_Protocol_h */
