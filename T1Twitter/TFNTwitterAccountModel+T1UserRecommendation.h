//
#ifndef TFNTwitterAccountModel_T1UserRecommendation_h
#define TFNTwitterAccountModel_T1UserRecommendation_h
@import Foundation;

#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSArray, NSDictionary, NSObject, NSString, TFNTwitterUser, TFSTwitterUserWhyToFollow;

@interface TFNTwitterAccountModel (T1UserRecommendation)

/* instance methods */
- (void)t1_userPageForUserPage:(id)page completion:(id /* block */)completion;
- (void)bulkInsertAndFixupRecommendations:(id)recommendations completion:(id /* block */)completion;
- (void)bulkInsertAndFixupRecommendationArray:(id)array completion:(id /* block */)completion;

@end

#endif /* TFNTwitterAccountModel_T1UserRecommendation_h */
