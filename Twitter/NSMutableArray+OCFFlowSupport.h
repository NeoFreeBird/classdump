//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
