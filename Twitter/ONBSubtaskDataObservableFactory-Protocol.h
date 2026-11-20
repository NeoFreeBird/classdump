//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBSubtaskDataObservableFactory_Protocol_h
#define ONBSubtaskDataObservableFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBSubtaskDataObservableFactory <NSObject>

@required

/* required instance methods */
- (id)subtaskDataObservable:(id)observable createObservableForKey:(id)key;

@optional

@end

#endif /* ONBSubtaskDataObservableFactory_Protocol_h */
