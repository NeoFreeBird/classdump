//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentContainerViewLayoutState_Protocol_h
#define TUCComponentContainerViewLayoutState_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TUCComponentContainer-Protocol.h"
#include "TUCLayoutContext.h"

@protocol TUCComponentContainerViewLayoutState <NSObject>

@required

@property (readonly, nonatomic) id <TUCComponentContainer> container;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) TUCLayoutContext *layoutContext;

@optional

@end

#endif /* TUCComponentContainerViewLayoutState_Protocol_h */
