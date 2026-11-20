//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusViewCombinedViewModel_h
#define T1StatusViewCombinedViewModel_h
@import Foundation;

#include "TSFSuperFollowsStatusViewModel-Protocol.h"
#include "TSFSuperFollowsStatusViewModelProvider-Protocol.h"

@class NSString, TTAStatusViewCombinedViewModel;

@interface T1StatusViewCombinedViewModel : TTAStatusViewCombinedViewModel <TSFSuperFollowsStatusViewModelProvider>

@property (nonatomic, readonly) _Bool t1_showsBoostSocialContextLabel;
@property (nonatomic, readonly) NSString *t1_boostSocialContextLabelText;
@property (nonatomic, readonly) _Bool t1_boostSocialContextTappable;
@property (nonatomic, readonly) _Bool t1_showsTrendingTopicSocialContextLabel;
@property (nonatomic, readonly) NSString *t1_trendingTopicSocialContextLabelText;
@property (nonatomic, readonly) NSString *t1_trendingTopicSocialContextEmphasizedText;
@property (nonatomic, readonly) NSString *t1_trendingTopicSocialContextBadgeName;
@property (nonatomic, readonly) _Bool t1_trendingTopicSocialContextSeeLessIconEnabled;
@property (nonatomic, readonly) id <TSFSuperFollowsStatusViewModel> superFollowsStatusViewModel;

/* instance methods */
- (_Bool)hasStandardSocialContextBannerText;
- (id)standardSocialContextBannerText;
- (id)socialContextLinkText;
- (id)initWithStatusViewModel:(id)model options:(unsigned long long)options account:(id)account scribeContext:(id)context;
- (void)_t1_handleReportOrBlockFromNotification:(id)notification;

@end

#endif /* T1StatusViewCombinedViewModel_h */
