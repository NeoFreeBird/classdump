//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
