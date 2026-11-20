//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusViewInlineActionTapEventHandler_h
#define T1StatusViewInlineActionTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewInlineActionTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller scribeContext:(id)context;
- (void)performReplyActionWithAccount:(id)account event:(id)event controller:(id)controller scribeContext:(id)context scribeElement:(id)element parameters:(id)parameters originalStatus:(id)status;
- (void)performShareActionWithAccount:(id)account event:(id)event controller:(id)controller scribeContext:(id)context scribeElement:(id)element parameters:(id)parameters cell:(id)cell status:(id)status touchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)retweetMenuControllerDisplayParamsForAccount:(id)account status:(id)status bypassRetweetMenu:(_Bool *)menu allowOnlyQuoteTweet:(_Bool *)tweet;

@end

#endif /* T1StatusViewInlineActionTapEventHandler_h */
