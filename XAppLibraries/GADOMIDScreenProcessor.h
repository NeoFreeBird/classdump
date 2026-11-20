//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDScreenProcessor_h
#define GADOMIDScreenProcessor_h
@import Foundation;

@class NSObject;

@interface GADOMIDScreenProcessor : NSObject

@property (nonatomic) unsigned long long outputDeviceStatus;

/* instance methods */
- (id)init;
- (id)stateForContainer:(id)container;
- (id)windowsForContainer:(id)container;
- (_Bool)isInternalWindow:(id)window;
- (void)updateOutputDeviceStatus;

@end

#endif /* GADOMIDScreenProcessor_h */
