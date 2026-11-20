//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSURTRichText_h
#define TFSURTRichText_h
@import Foundation;

@class NSArray, NSNumber, NSObject, NSString;

@interface TFSURTRichText : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 rtl;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSArray *entities;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) NSNumber *rtlNumber;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)toAttributedStringWithFontGroup:(id)group baseTextColor:(id)color boldTextColor:(id)color;
- (id)toActiveTextRanges;
- (id)initWithText:(id)text rtl:(_Bool)rtl entities:(id)entities alignment:(long long)alignment;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSURTRichText_h */
