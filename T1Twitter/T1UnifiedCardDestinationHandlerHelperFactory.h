//
#ifndef T1UnifiedCardDestinationHandlerHelperFactory_h
#define T1UnifiedCardDestinationHandlerHelperFactory_h
@import Foundation;

#include "TUCAppStoreDestinationHandlerHelper-Protocol.h"
#include "TUCBrowserDestinationHandlerHelper-Protocol.h"
#include "TUCDestinationHandlerHelperFactory-Protocol.h"
#include "TUCPaymentDestinationHandlerHelper-Protocol.h"
#include "TUCPlayableDestinationHandlerHelper-Protocol.h"
#include "TUCTweetPerspective-Protocol.h"

@class NSObject, TFNTwitterAccount, UIView, UIViewController, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1UnifiedCardDestinationHandlerHelperFactory : NSObject <TUCDestinationHandlerHelperFactory>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) id <TUCTweetPerspective> status;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (weak, nonatomic) UIView *morphSourceView;
@property (readonly, nonatomic) id <TUCBrowserDestinationHandlerHelper> browser;
@property (readonly, nonatomic) id <TUCAppStoreDestinationHandlerHelper> appStore;
@property (readonly, nonatomic) id <TUCPlayableDestinationHandlerHelper> playable;
@property (readonly, nonatomic) id <TUCPaymentDestinationHandlerHelper> payment;

/* instance methods */
- (id)initWithAccount:(id)account status:(id)status presentingViewController:(id)controller promotedContent:(id)content morphSourceView:(id)view;

@end

#endif /* T1UnifiedCardDestinationHandlerHelperFactory_h */
