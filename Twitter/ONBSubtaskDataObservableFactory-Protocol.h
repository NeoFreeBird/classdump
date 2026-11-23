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
