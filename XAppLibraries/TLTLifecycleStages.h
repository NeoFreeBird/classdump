//
#ifndef TLTLifecycleStages_h
#define TLTLifecycleStages_h
@import Foundation;

@class NSObject;

@interface TLTLifecycleStages : NSObject

/* class methods */
+ (void)load;
+ (_Bool)configure;

@end

#endif /* TLTLifecycleStages_h */
