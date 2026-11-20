//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDAdSessionDelegate_Protocol_h
#define GADOMIDAdSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDAdSessionDelegate <NSObject>

@required

/* required instance methods */
- (void)adSessionDidStart:(id)start;
- (void)adSessionDidFinish:(id)finish;
- (void)adSession:(id)session didRegisterAdView:(id)view;

@optional

@end

#endif /* GADOMIDAdSessionDelegate_Protocol_h */
