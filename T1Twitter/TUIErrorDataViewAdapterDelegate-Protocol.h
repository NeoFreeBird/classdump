//
#ifndef TUIErrorDataViewAdapterDelegate_Protocol_h
#define TUIErrorDataViewAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUIErrorDataViewAdapterDelegate <NSObject>

@required

/* required instance methods */
- (void)errorItemTapped:(id)tapped;

@optional

@end

#endif /* TUIErrorDataViewAdapterDelegate_Protocol_h */
