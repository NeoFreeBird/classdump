//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardAppStorePresenter_Protocol_h
#define T1CardAppStorePresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardAppStorePresenter <NSObject>

@required

/* required instance methods */
- (void)present:(id)present deepLinkOption:(unsigned long long)option didDismiss:(id /* block */)dismiss completion:(id /* block */)completion;

@optional

@end

#endif /* T1CardAppStorePresenter_Protocol_h */
