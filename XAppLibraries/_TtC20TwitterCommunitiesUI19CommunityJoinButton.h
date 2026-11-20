//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI19CommunityJoinButton_h
#define _TtC20TwitterCommunitiesUI19CommunityJoinButton_h
@import Foundation;

@class TFNActivityIndicatorButton, TwitterCommunitiesUI.CommunityJoinButtonViewModel;

@interface TwitterCommunitiesUI.CommunityJoinButton : TFNActivityIndicatorButton { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunityJoinButtonViewModel viewModel;
}

/* instance methods */
- (id)init;
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;

@end

#endif /* _TtC20TwitterCommunitiesUI19CommunityJoinButton_h */
