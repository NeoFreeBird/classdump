//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
