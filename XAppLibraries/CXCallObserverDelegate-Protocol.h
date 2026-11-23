//
#ifndef CXCallObserverDelegate_Protocol_h
#define CXCallObserverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol CXCallObserverDelegate <NSObject>

@required

/* required instance methods */
- (void)callObserver:(id)observer callChanged:(id)changed;

@optional

@end

#endif /* CXCallObserverDelegate_Protocol_h */
