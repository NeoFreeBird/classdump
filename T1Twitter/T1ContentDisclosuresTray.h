//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ContentDisclosuresTray_h
#define T1ContentDisclosuresTray_h
@import Foundation;

@class NSObject;

@interface T1ContentDisclosuresTray : NSObject // (Swift)

/* class methods */
+ (_Bool)presentFromViewController:(id)controller toggleItems:(id)items;

/* instance methods */
- (id)init;

@end

#endif /* T1ContentDisclosuresTray_h */
