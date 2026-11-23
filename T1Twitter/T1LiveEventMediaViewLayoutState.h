//
#ifndef T1LiveEventMediaViewLayoutState_h
#define T1LiveEventMediaViewLayoutState_h
@import Foundation;

#include "T1BroadcastContainerViewLayoutState.h"

@class NSObject;

@interface T1LiveEventMediaViewLayoutState : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } broadcastContainerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoContainerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } audiospaceContainerViewFrame;
@property (retain, nonatomic) T1BroadcastContainerViewLayoutState *broadcastContainerViewLayoutState;

/* instance methods */

@end

#endif /* T1LiveEventMediaViewLayoutState_h */
