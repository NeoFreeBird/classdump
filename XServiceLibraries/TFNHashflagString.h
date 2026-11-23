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
