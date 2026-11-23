//
#ifndef ONBUserTileGroupTableRowAdapterDelegate_Protocol_h
#define ONBUserTileGroupTableRowAdapterDelegate_Protocol_h
@import Foundation;

@protocol ONBUserTileGroupTableRowAdapterDelegate

@required

/* required instance methods */
- (void)userTileGroupAdapter:(id)adapter didSelectUserViewModel:(id)model inView:(id)view;
- (void)userTileGroupAdapter:(id)adapter didDeselectUserViewModel:(id)model inView:(id)view;
- (void)userTileGroupAdapter:(id)adapter didSelectAllForUserRecommendationGroup:(id)group;

@optional

@end

#endif /* ONBUserTileGroupTableRowAdapterDelegate_Protocol_h */
