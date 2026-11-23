//
#ifndef TASSharingObserver_Protocol_h
#define TASSharingObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASSharingObserver <NSObject>

@required

/* required instance methods */
- (void)sharingDidUpdateSharedItemViewModels:(id)models;

@optional

@end

#endif /* TASSharingObserver_Protocol_h */
