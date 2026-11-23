//
#ifndef T1ComposableModuleTreeCellLayout_h
#define T1ComposableModuleTreeCellLayout_h
@import Foundation;

#include "T1ComposableModuleTreeViewLayoutState.h"

@class TFNDataViewCellLayout;

@interface T1ComposableModuleTreeCellLayout : TFNDataViewCellLayout

@property (retain, nonatomic) T1ComposableModuleTreeViewLayoutState *layoutState;

/* instance methods */
- (void)setSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })size;

@end

#endif /* T1ComposableModuleTreeCellLayout_h */
