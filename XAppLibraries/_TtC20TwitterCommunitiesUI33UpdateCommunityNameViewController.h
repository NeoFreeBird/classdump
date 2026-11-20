//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI33UpdateCommunityNameViewController_h
#define _TtC20TwitterCommunitiesUI33UpdateCommunityNameViewController_h
@import Foundation;

@class TFNLegacyFormViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.UpdateCommunityNameForm, UIBarButtonItem;

@interface TwitterCommunitiesUI.UpdateCommunityNameViewController : TFNLegacyFormViewController { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.UpdateCommunityNameForm updateNameForm;
    TwitterCommunities.CommunityModel communityModel;
}

@property (nonatomic, readonly) UIBarButtonItem *doneBarButtonItem;
@property (nonatomic, readonly) _Bool addsDoneBarButtonButtonItemToNavigationBar;

/* instance methods */
- (void)form:(id)form didChangeSubmittability:(_Bool)submittability;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)didSelectCancel;
- (void)didSelectDone;
- (id)initWithForm:(id)form appearance:(id)appearance;

@end

#endif /* _TtC20TwitterCommunitiesUI33UpdateCommunityNameViewController_h */
