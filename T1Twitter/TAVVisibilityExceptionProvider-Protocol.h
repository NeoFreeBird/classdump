//
#ifndef TAVVisibilityExceptionProvider_Protocol_h
#define TAVVisibilityExceptionProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TAVVisibilityExceptionProvider <NSObject>

@required

@property (readonly, nonatomic) _Bool tav_isPlayerViewAlwaysVisibile;

@optional

@end

#endif /* TAVVisibilityExceptionProvider_Protocol_h */
