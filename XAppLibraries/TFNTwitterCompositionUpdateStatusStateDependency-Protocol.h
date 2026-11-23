//
#ifndef TFNTwitterCompositionUpdateStatusStateDependency_Protocol_h
#define TFNTwitterCompositionUpdateStatusStateDependency_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSError;

@protocol TFNTwitterCompositionUpdateStatusStateDependency <NSObject>

@required

@property unsigned long long updateStatusState;
@property (retain) NSError *updateStatusError;

@optional

@end

#endif /* TFNTwitterCompositionUpdateStatusStateDependency_Protocol_h */
