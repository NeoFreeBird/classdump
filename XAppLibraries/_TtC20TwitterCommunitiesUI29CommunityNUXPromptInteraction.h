//
#ifndef _TtC20TwitterCommunitiesUI29CommunityNUXPromptInteraction_h
#define _TtC20TwitterCommunitiesUI29CommunityNUXPromptInteraction_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterCommunities.CommunitiesContext ?, TwitterCommunitiesUI.PromptPresenter;

@interface TwitterCommunitiesUI.CommunityNUXPromptInteraction : NSObject { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.PromptPresenter presenter;
    TwitterCommunities.CommunitiesContext ? communitiesContext;
    Swift.Bool hasBeenPresentedByThisInstance;
}

@property (nonatomic, readonly) _Bool shouldBePresented;

/* instance methods */
- (void)presentIfNeededFrom:(id)from completion:(id /* block */)completion;
- (void)presentFrom:(id)from;
- (void)presentFrom:(id)from completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC20TwitterCommunitiesUI29CommunityNUXPromptInteraction_h */
