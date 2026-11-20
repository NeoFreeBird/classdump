//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFRichText_h
#define OCFRichText_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface OCFRichText : NSObject {
    /* instance variables */
    NSString *_text;
}

@property (readonly, nonatomic) NSString *unexpandedText;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) NSArray *stylingRanges;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) long long style;

/* class methods */
+ (id)fontWithSize:(long long)size style:(long long)style default:(id)_default;
+ (id)private_referenceFontForSize:(long long)size;
+ (id)private_boldReferenceFontForSize:(long long)size;

/* instance methods */
- (id)expandedRichTextWithSubtaskDataProvider:(id)provider;
- (id)expandedTextWithSubtaskDataProvider:(id)provider;
- (id)fontWithDefault:(id)_default;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithText:(id)text;
- (id)initWithText:(id)text entities:(id)entities stylingRanges:(id)ranges size:(long long)size style:(long long)style;
- (id)expandedRichTextWithSubtaskDataProvider:(id)provider expander:(id)expander;
- (id)expandedTextWithSubtaskDataProvider:(id)provider expander:(id)expander;

@end

#endif /* OCFRichText_h */
