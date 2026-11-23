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
