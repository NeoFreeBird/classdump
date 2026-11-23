//
#ifndef TFNInterfaceOrientationChangeListenerDelegate_Protocol_h
#define TFNInterfaceOrientationChangeListenerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNInterfaceOrientationChangeListenerDelegate <NSObject>

@required

/* required instance methods */
- (void)interfaceOrientationChangeListener:(id)listener didObserveInterfaceOrientationChange:(long long)change;

@optional

@end

#endif /* TFNInterfaceOrientationChangeListenerDelegate_Protocol_h */
