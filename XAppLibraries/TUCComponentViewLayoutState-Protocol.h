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
