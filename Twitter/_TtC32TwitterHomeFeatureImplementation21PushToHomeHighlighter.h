//
#ifndef _TtC32TwitterHomeFeatureImplementation21PushToHomeHighlighter_h
#define _TtC32TwitterHomeFeatureImplementation21PushToHomeHighlighter_h
@import Foundation;

@class NSObject, _$sSo13InjectedTweetCSg, _$sSo42THMHomeTimelineItemsViewControllerProtocol_So012TFNItemsDatadE0CXcSgyc;

@interface TwitterHomeFeatureImplementation.PushToHomeHighlighter : NSObject { // (Swift)
    /* instance variables */
    () -> (__C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol)? homeTimelineViewController;
    __C.InjectedTweet? pendingInjectedTweet;
}

/* instance methods */
- (void)dealloc;
- (void)streamDidUpdateFromAPI:(id)api;
- (void)pushToHomeInjectionDidFail:(id)fail;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation21PushToHomeHighlighter_h */
