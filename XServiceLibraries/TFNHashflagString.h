//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNHashflagString_h
#define TFNHashflagString_h
@import Foundation;

@class NSArray, NSAttributedString, NSObject, NSString;

@interface TFNHashflagString : NSObject

@property (readonly, copy, nonatomic) NSString *originalText;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, copy, nonatomic) NSArray *hashflagsDownloading;

/* instance methods */
- (id)initWithString:(id)string font:(id)font;

@end

#endif /* TFNHashflagString_h */
