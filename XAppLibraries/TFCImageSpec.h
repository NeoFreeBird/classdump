//
#ifndef TFCImageSpec_h
#define TFCImageSpec_h
@import Foundation;

@class NSObject, NSString, TFSTwitterMediaColorPalette;

@interface TFCImageSpec : NSObject {
    /* instance variables */
    NSString *_uniqueIdentifier;
    NSString *_cachedDefaultURLString;
}

@property (readonly, copy, nonatomic) NSString *specKey;
@property (readonly, copy, nonatomic) NSString *baseURLString;
@property (readonly, copy, nonatomic) NSString *format;
@property (readonly, copy, nonatomic) NSString *defaultVariantName;
@property (readonly, nonatomic) long long URLFormat;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } originalDimensions;
@property (readonly, copy, nonatomic) NSString *altText;
@property (readonly, nonatomic) TFSTwitterMediaColorPalette *colorPalette;

/* class methods */
+ (id)imageSpecWithCardDataImageDictionary:(id)dictionary key:(id)key colorPaletteArray:(id)array;
+ (id)imageSpecWithKey:(id)key imageURLString:(id)urlstring originalDimensions:(struct CGSize { double x0; double x1; })dimensions altText:(id)text colorPalette:(id)palette;

/* instance methods */
- (id)initWithKey:(id)key baseURLString:(id)urlstring format:(id)format URLFormat:(long long)urlformat originalDimensions:(struct CGSize { double x0; double x1; })dimensions defaultVariantName:(id)name altText:(id)text colorPalette:(id)palette;
- (id)defaultImageURLString;
- (id)defaultImageURL;
- (id)description;
- (_Bool)isEqualToImageSpec:(id)spec;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;

@end

#endif /* TFCImageSpec_h */
