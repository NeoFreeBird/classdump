//
#ifndef _TtC18TwitterCommunities17UserToInviteModel_h
#define _TtC18TwitterCommunities17UserToInviteModel_h
@import Foundation;

@class NSObject, TwitterCommunities.CommunitiesContext ?, TwitterCommunities.UserToInviteModel.State, TwitterCommunities.UserToInviteModelDelegate ?, _$s13TFSObservable15ObservableInputVMn TwitterCommunities.UserToInviteModel.State, _$s13TFSObservable16ObservableEntityCMn TwitterCommunities.UserToInviteModel.State, _$sSS, _$sSo7NSTimerCSg;

@interface TwitterCommunities.UserToInviteModel : NSObject { // (Swift)
    /* instance variables */
    TwitterCommunities.CommunitiesContext ? communitiesContext;
    Swift.String communityID;
    TwitterCommunities.UserToInviteModelDelegate ? delegate;
    TwitterCommunities.UserToInviteModel.State state;
    nominal type descriptor for TFSObservable.ObservableEntity TwitterCommunities.UserToInviteModel.State observableState;
    nominal type descriptor for TFSObservable.ObservableInput TwitterCommunities.UserToInviteModel.State observableInput;
    __C.NSTimer? transitioningTimer;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterCommunities17UserToInviteModel_h */
