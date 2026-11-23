//
#ifndef _TtC20TwitterCommunitiesUI37UpdateCommunityQuestionViewController_h
#define _TtC20TwitterCommunitiesUI37UpdateCommunityQuestionViewController_h
@import Foundation;

@class TFNLegacyFormViewController, TwitterCommunities.CommunityModel, TwitterCommunitiesUI.UpdateCommunityQuestionForm, UIBarButtonItem;

@interface TwitterCommunitiesUI.UpdateCommunityQuestionViewController : TFNLegacyFormViewController { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.UpdateCommunityQuestionForm updateQuestionForm;
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

#endif /* _TtC20TwitterCommunitiesUI37UpdateCommunityQuestionViewController_h */
