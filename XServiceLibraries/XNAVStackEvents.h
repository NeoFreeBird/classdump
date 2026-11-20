//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef XNAVStackEvents_h
#define XNAVStackEvents_h
@import Foundation;

@class NSObject;

@interface XNAVStackEvents : NSObject // (Swift)

/* class methods */
+ (id)addObserver:(id /* block */)observer;

/* instance methods */
- (id)init;

@end

#endif /* XNAVStackEvents_h */
