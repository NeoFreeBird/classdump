//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterImageCategoryVariant_h
#define TFSTwitterImageCategoryVariant_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFSTwitterImageCategoryVariant : NSObject

@property (readonly, nonatomic) long long attributes;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } boundingDimensions;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *formats;
@property (readonly, nonatomic) long long requestURLFormat;

/* instance methods */
- (id)initWithAttributes:(long long)attributes boundingDimensions:(struct CGSize { double x0; double x1; })dimensions name:(id)name formats:(id)formats requestURLFormat:(long long)urlformat;
- (id)supportedFormatForRequestedFormat:(id)format;
- (id)imageURLForBaseURLString:(id)urlstring format:(id)format;
- (id)imageURLStringForBaseURLString:(id)urlstring format:(id)format;
- (id)imageURLForTemplateURL:(id)url formatFallback:(id)fallback;
- (id)imageURLStringForTemplateURL:(id)url formatFallback:(id)fallback;

@end

#endif /* TFSTwitterImageCategoryVariant_h */
