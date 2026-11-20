//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFImageInfo_h
#define OCFImageInfo_h
@import Foundation;

@class NSObject, NSString;

@interface OCFImageInfo : NSObject

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) NSString *altText;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFImageInfo_h */
