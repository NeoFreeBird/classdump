//
#ifndef TFNComposableViewLayoutStateSet_h
#define TFNComposableViewLayoutStateSet_h
@import Foundation;

#include "TFNLayoutMetrics.h"

@class NSMutableArray, NSObject;

@interface TFNComposableViewLayoutStateSet : NSObject {
    /* instance variables */
    NSMutableArray *_layoutState;
}

@property (readonly, nonatomic) id viewModel;
@property (readonly, nonatomic) TFNLayoutMetrics *layoutMetrics;

/* instance methods */
- (id)initWithViewModel:(id)model layoutMetrics:(id)metrics;
- (id)init;
- (id)objectAtIndexedSubscript:(long long)subscript;
- (void)setObject:(id)object atIndexedSubscript:(long long)subscript;
- (void)enumerateLayoutStateUsingBlock:(id /* block */)block;

@end

#endif /* TFNComposableViewLayoutStateSet_h */
