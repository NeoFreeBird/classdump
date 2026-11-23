//
#ifndef TFNTwitterCompositionUpdateStatusDependency_Protocol_h
#define TFNTwitterCompositionUpdateStatusDependency_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TAPTwitterCompositionTweetPerspective-Protocol.h"

@protocol TFNTwitterCompositionUpdateStatusDependency <NSObject>

@required

@property (retain) id <TAPTwitterCompositionTweetPerspective> status;

@optional

@end

#endif /* TFNTwitterCompositionUpdateStatusDependency_Protocol_h */
