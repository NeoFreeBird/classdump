//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

@property (readonly, nonatomic) id <TUCBrowserDestinationHandlerHelper> browser;
@property (readonly, nonatomic) id <TUCAppStoreDestinationHandlerHelper> appStore;
@property (readonly, nonatomic) id <TUCPlayableDestinationHandlerHelper> playable;
@property (readonly, nonatomic) id <TUCPaymentDestinationHandlerHelper> payment;

@optional

@end

#endif /* TUCDestinationHandlerHelperFactory_Protocol_h */
