//
#ifndef NSMutableArray_OCFFlowSupport_h
#define NSMutableArray_OCFFlowSupport_h
@import Foundation;

@interface NSMutableArray (OCFFlowSupport)

/* instance methods */
- (void)t1_popToObjectAtIndex:(unsigned long long)index;
- (void)t1_moveObjectAtIndexToTop:(unsigned long long)top;

@end

#endif /* NSMutableArray_OCFFlowSupport_h */
