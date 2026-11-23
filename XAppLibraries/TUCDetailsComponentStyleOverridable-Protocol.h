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
