//
#ifndef ONBUserTileGroupCellDelegate_Protocol_h
#define ONBUserTileGroupCellDelegate_Protocol_h
@import Foundation;

@protocol ONBUserTileGroupCellDelegate

@required

/* required instance methods */
- (void)userTileGroupCell:(id)cell didSelectUserViewModel:(id)model inView:(id)view;
- (void)userTileGroupCell:(id)cell didDeselectUserViewModel:(id)model inView:(id)view;
- (void)userTileGroupCell:(id)cell didSelectAllForUserRecommendationGroup:(id)group;

@optional

@end

#endif /* ONBUserTileGroupCellDelegate_Protocol_h */
