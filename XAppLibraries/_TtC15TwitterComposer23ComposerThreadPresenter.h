//
#ifndef _TtC15TwitterComposer23ComposerThreadPresenter_h
#define _TtC15TwitterComposer23ComposerThreadPresenter_h
@import Foundation;

@class Swift.Bool, TwitterCommunitiesUI.TweetAudienceSelectionModel ?, TwitterComposer.ComposerThreadPresenterDelegate ?, TwitterComposer.ComposerThreadReplyContextViewState, TwitterComposer.ComposerThreadView ?, TwitterComposer.SingleTweetControllerFactory, TwitterComposer0B13SeamProviders_p, _$s15TwitterComposer46TweetComposeReplyContextViewControllerProtocol_So06UIViewH0CXc, _$sSay15TwitterComposer018TweetComposeSingleC22ViewControllerProtocol_So06UIViewG0CXcG, _$sSi, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _$sSo6UIViewCSg, _TtCs12_SwiftObject;

@interface TwitterComposer.ComposerThreadPresenter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterComposer.ComposerThreadView ? view;
    [__C.UIViewController & TwitterComposer.TweetComposeSingleTweetViewControllerProtocol] singleTweetControllers;
    Swift.Int activeTweetIndex;
    TwitterComposer.ComposerThreadReplyContextViewState replyContextViewState;
    Swift.Bool loadedCompositionFromDrafts;
    __C.UIView? addToThreadFooterView;
    Swift.Bool hasLoadedView;
    __C.TFNTwitterAccount account;
    TwitterCommunitiesUI.TweetAudienceSelectionModel ? tweetAudienceSelectionModel;
    __C.TFSTwitterScribeContext scribeContext;
    __C.UIViewController & TwitterComposer.TweetComposeReplyContextViewControllerProtocol replyContextController;
    Swift.Bool isReplystormEnabled;
    TwitterComposer0B13SeamProviders_p seamProviders;
    TwitterComposer.SingleTweetControllerFactory factory;
    TwitterComposer.ComposerThreadPresenterDelegate ? delegate;
}

@end

#endif /* _TtC15TwitterComposer23ComposerThreadPresenter_h */
