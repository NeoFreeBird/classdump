//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASLinkHelper_h
#define TASLinkHelper_h
@import Foundation;

@class NSObject;

@interface TASLinkHelper : NSObject // (Swift)

/* class methods */
+ (id)buildAttributedActiveTextModelWithHtmlString:(id)string font:(id)font alignment:(long long)alignment;

/* instance methods */
- (id)init;

@end

#endif /* TASLinkHelper_h */
