//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationViewModelData_h
#define T1UserRecommendationViewModelData_h
@import Foundation;

#include "T1UserRecommendation.h"
#include "T1UserViewModel-Protocol.h"

@class NSObject;

@interface T1UserRecommendationViewModelData : NSObject

@property (readonly, nonatomic) id <T1UserViewModel> userViewModel;
@property (readonly, nonatomic) T1UserRecommendation *userRecommendation;
@property (readonly, nonatomic) _Bool showBlocked;

/* instance methods */
- (id)initWithUserRecommendation:(id)recommendation userViewModel:(id)model showUserBlocked:(_Bool)blocked;
- (id)init;

@end

#endif /* T1UserRecommendationViewModelData_h */
