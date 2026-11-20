//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
