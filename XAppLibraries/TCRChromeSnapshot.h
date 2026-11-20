//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRChromeSnapshot_h
#define TCRChromeSnapshot_h
@import Foundation;

@class NSObject, UIColor;

@interface TCRChromeSnapshot : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) _Bool opaque;

/* instance methods */

@end

#endif /* TCRChromeSnapshot_h */
