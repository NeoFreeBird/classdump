//
#ifndef PTVDeferBlockObject_h
#define PTVDeferBlockObject_h
@import Foundation;

#include "PTVBlockObject.h"

@interface PTVDeferBlockObject : PTVBlockObject

@property (nonatomic) _Bool hasExecuted;

/* instance methods */
- (void)dealloc;
- (void)execute;

@end

#endif /* PTVDeferBlockObject_h */
