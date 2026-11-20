//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1URTViewControllerAwareAdapter_Protocol_h
#define T1URTViewControllerAwareAdapter_Protocol_h
@import Foundation;

@protocol T1URTViewControllerAwareAdapter

@required

/* required instance methods */
- (void)adapterWasUsedByURTViewController:(id)controller;

@optional

@end

#endif /* T1URTViewControllerAwareAdapter_Protocol_h */
