//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterFoundMediaImage_h
#define TFSTwitterFoundMediaImage_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterFoundMediaImage : NSObject

@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSString *stillImageURLString;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, nonatomic) unsigned long long dataLength;

/* class methods */
+ (id)primaryImageFromImages:(id)images;

/* instance methods */
- (id)init;
- (id)initWithURLString:(id)urlstring stillImageURLString:(id)urlstring imageDimensions:(struct CGSize { double x0; double x1; })dimensions dataLength:(unsigned long long)length;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterFoundMediaImage_h */
