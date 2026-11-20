//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentViewLayoutState_Protocol_h
#define TUCComponentViewLayoutState_Protocol_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"

@protocol TUCComponentViewLayoutState

@required

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) id <TUCComponentModel> component;

@optional

@end

#endif /* TUCComponentViewLayoutState_Protocol_h */
