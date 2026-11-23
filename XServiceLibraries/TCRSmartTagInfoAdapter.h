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
