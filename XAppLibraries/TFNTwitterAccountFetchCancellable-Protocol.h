//
#ifndef TFNTwitterAccountFetchCancellable_Protocol_h
#define TFNTwitterAccountFetchCancellable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterAccountFetchCancellable <NSObject>

@required

/* required instance methods */
- (void)cancel;

@optional

@end

#endif /* TFNTwitterAccountFetchCancellable_Protocol_h */
