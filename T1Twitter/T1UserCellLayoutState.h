//
#ifndef T1UserCellLayoutState_h
#define T1UserCellLayoutState_h
@import Foundation;

#include "T1UserViewLayoutState.h"
#include "T1UserViewOptions-Protocol.h"

@class TFNDataViewCellLayout, TFNLayoutMetrics;

@interface T1UserCellLayoutState : TFNDataViewCellLayout

@property (retain, nonatomic) TFNLayoutMetrics *layoutMetrics;
@property (retain, nonatomic) id <T1UserViewOptions> userViewOptions;
@property (retain, nonatomic) T1UserViewLayoutState *userViewLayoutState;
@property (nonatomic) _Bool showingOriginal;

/* instance methods */
- (_Bool)isShowingOriginal;

@end

#endif /* T1UserCellLayoutState_h */
