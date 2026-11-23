//
#ifndef _TtC11ChatGrokBot23GrokBotConnectorBrowser_h
#define _TtC11ChatGrokBot23GrokBotConnectorBrowser_h
@import Foundation;

#include "SFSafariViewControllerDelegate-Protocol.h"
#include "UIAdaptivePresentationControllerDelegate-Protocol.h"

@class NSObject, _$sSo22SFSafariViewControllerCSg, _$syycSg;

@interface ChatGrokBot.GrokBotConnectorBrowser : NSObject <UIAdaptivePresentationControllerDelegate, SFSafariViewControllerDelegate> { // (Swift)
    /* instance variables */
    __C.SFSafariViewController? controller;
    (() -> ())? onUserDismiss;
}

/* instance methods */
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)safariViewControllerDidFinish:(id)finish;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot23GrokBotConnectorBrowser_h */
