//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRSmartTagInfoAdapter_h
#define TCRSmartTagInfoAdapter_h
@import Foundation;

@class NSObject;

@interface TCRSmartTagInfoAdapter : NSObject // (Swift)

/* class methods */
+ (id)fetchInfoWithRestId:(id)id actionService:(id)service completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* TCRSmartTagInfoAdapter_h */
