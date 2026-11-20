//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterMediaImageInformation_h
#define TFSTwitterMediaImageInformation_h
@import Foundation;

@class NSObject;

@interface TFSTwitterMediaImageInformation : NSObject

@property (readonly, nonatomic) long long imageType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterMediaImageInformation_h */
