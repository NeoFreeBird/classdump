//
#ifndef TFNTwitterCompositionUpdateStatusResultProvider_Protocol_h
#define TFNTwitterCompositionUpdateStatusResultProvider_Protocol_h
@import Foundation;

#include "TAPTwitterCompositionTweetPerspective-Protocol.h"

@protocol TFNTwitterCompositionUpdateStatusResultProvider

@required

@property (readonly) id <TAPTwitterCompositionTweetPerspective> resultStatus;

@optional

@end

#endif /* TFNTwitterCompositionUpdateStatusResultProvider_Protocol_h */
