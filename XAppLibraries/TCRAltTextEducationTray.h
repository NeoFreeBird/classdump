//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRAltTextEducationTray_h
#define TCRAltTextEducationTray_h
@import Foundation;

@class NSObject;

@interface TCRAltTextEducationTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithScribe:(id)scribe onWrite:(id /* block */)write;
+ (_Bool)shouldShowEducationForAccountID:(id)id;
+ (void)recordAltTextSavedForAccountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* TCRAltTextEducationTray_h */
