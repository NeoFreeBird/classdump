//
#ifndef _TtC14T1TwitterSwift34URTCommunityTweetInjectionListener_h
#define _TtC14T1TwitterSwift34URTCommunityTweetInjectionListener_h
@import Foundation;

@class NSObject, Swift.Bool, T1TwitterSwift.URTAddRemoveTweetInjectionHandler, _$sSS;

@interface T1TwitterSwift.URTCommunityTweetInjectionListener : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.URTAddRemoveTweetInjectionHandler handler;
    Swift.String communityID;
    Swift.Bool allowReplyTweet;
}

/* instance methods */
- (void)dealloc;
- (void)compositionDidSend:(id)send;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34URTCommunityTweetInjectionListener_h */
