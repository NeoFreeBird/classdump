//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UnifiedCardBrowserDestinationHandlerHelper_h
#define T1UnifiedCardBrowserDestinationHandlerHelper_h
@import Foundation;

#include "TUCBrowserDestinationHandlerHelper-Protocol.h"
#include "TUCTweetPerspective-Protocol.h"

@class NSObject, TFNTwitterAccount, UIViewController, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1UnifiedCardBrowserDestinationHandlerHelper : NSObject <TUCBrowserDestinationHandlerHelper>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) id <TUCTweetPerspective> sourceStatus;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;

/* instance methods */
- (id)initWithAccount:(id)account sourceStatus:(id)status presentingViewController:(id)controller promotedContent:(id)content;
- (id)openHandlerWithUrl:(id)url scribeContext:(id)context;
- (id)openHandlerWithUrl:(id)url mediaEntity:(id)entity videoComponentView:(id)view aspectRatio:(double)ratio transitionObject:(id)object scribeContext:(id)context;
- (id)actionItemsWith:(id)with presentingViewController:(id)controller scribeContext:(id)context promotedContent:(id)content sourceView:(id)view;
- (void)openDeeplinkWithUrl:(id)url;
- (void)openUniversalLinkStrictlyWithUrl:(id)url completion:(id /* block */)completion;
- (void)openUniversalLinkWithBrowserFallbackWithUrl:(id)url completion:(id /* block */)completion;
- (id)urlByAppendingTwitterClickIDToUrl:(id)url scribeComponent:(id)component;
- (void)prefetchContentWithJSDisabledWith:(id)with;

@end

#endif /* T1UnifiedCardBrowserDestinationHandlerHelper_h */
