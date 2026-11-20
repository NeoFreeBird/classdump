//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUICardViewBaseEventHandler_h
#define TUICardViewBaseEventHandler_h
@import Foundation;

@class NSObject;

@interface TUICardViewBaseEventHandler : NSObject

/* instance methods */
- (void)logEventWithContext:(id)context displayMode:(long long)mode;

@end

#endif /* TUICardViewBaseEventHandler_h */
