//
#ifndef TUCDestinationHandlerHelperFactory_Protocol_h
#define TUCDestinationHandlerHelperFactory_Protocol_h
@import Foundation;

#include "TUCAppStoreDestinationHandlerHelper-Protocol.h"
#include "TUCBrowserDestinationHandlerHelper-Protocol.h"
#include "TUCPaymentDestinationHandlerHelper-Protocol.h"
#include "TUCPlayableDestinationHandlerHelper-Protocol.h"

@protocol TUCDestinationHandlerHelperFactory

@required

@property (nonatomic, readonly) id <TUCBrowserDestinationHandlerHelper> browser;
@property (nonatomic, readonly) id <TUCAppStoreDestinationHandlerHelper> appStore;
@property (nonatomic, readonly) id <TUCPlayableDestinationHandlerHelper> playable;
@property (nonatomic, readonly) id <TUCPaymentDestinationHandlerHelper> payment;

@optional

@end

#endif /* TUCDestinationHandlerHelperFactory_Protocol_h */
