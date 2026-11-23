//
#ifndef T1StatusCellLayout_h
#define T1StatusCellLayout_h
@import Foundation;

#include "TTACoreStatusViewLayoutState-Protocol.h"

@class TFNDataViewCellLayout;

@interface T1StatusCellLayout : TFNDataViewCellLayout

@property (nonatomic) unsigned long long statusOptions;
@property (retain, nonatomic) id <TTACoreStatusViewLayoutState> statusViewLayoutState;

/* instance methods */

@end

#endif /* T1StatusCellLayout_h */
