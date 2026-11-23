//
#ifndef TTACoreStatusViewLayoutStateGenerator_Protocol_h
#define TTACoreStatusViewLayoutStateGenerator_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTACoreStatusViewLayoutStateGenerator <NSObject>

@required

/* required instance methods */
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account layoutMetrics:(id)metrics withPreviousLayoutState:(id)state;

@optional

/* optional instance methods */
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account width:(double)width layoutMetrics:(id)metrics withPreviousLayoutState:(id)state;

@end

#endif /* TTACoreStatusViewLayoutStateGenerator_Protocol_h */
