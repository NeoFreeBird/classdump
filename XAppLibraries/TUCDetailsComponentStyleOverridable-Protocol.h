//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDetailsComponentStyleOverridable_Protocol_h
#define TUCDetailsComponentStyleOverridable_Protocol_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCDetailsComponentStyleOverride.h"

@protocol TUCDetailsComponentStyleOverridable <TUCComponentModel>

@required

@property (readonly, nonatomic) TUCDetailsComponentStyleOverride *styleOverride;

@optional

@end

#endif /* TUCDetailsComponentStyleOverridable_Protocol_h */
