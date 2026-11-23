//
#ifndef _TtC20TwitterCommunitiesUI40UpdateCommunityDescriptionViewController_h
#define _TtC20TwitterCommunitiesUI40UpdateCommunityDescriptionViewController_h
@import Foundation;

@class TFNLegacyFormViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.UpdateCommunityDescriptionForm, UIBarButtonItem;

@interface TwitterCommunitiesUI.UpdateCommunityDescriptionViewController : TFNLegacyFormViewController { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.UpdateCommunityDescriptionForm updateDescriptionForm;
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

#endif /* _TtC20TwitterCommunitiesUI40UpdateCommunityDescriptionViewController_h */
