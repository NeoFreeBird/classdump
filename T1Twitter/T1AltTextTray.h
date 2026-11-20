//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AltTextTray_h
#define T1AltTextTray_h
@import Foundation;

@class NSObject;

@interface T1AltTextTray : NSObject // (Swift)

/* class methods */
+ (_Bool)presentFromViewController:(id)controller altText:(id)text;

/* instance methods */
- (id)init;

@end

#endif /* T1AltTextTray_h */
