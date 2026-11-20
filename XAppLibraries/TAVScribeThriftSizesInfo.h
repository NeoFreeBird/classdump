//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVScribeThriftSizesInfo_h
#define TAVScribeThriftSizesInfo_h
@import Foundation;

@class NSObject;

@interface TAVScribeThriftSizesInfo : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } viewportSize;
@property (nonatomic) struct CGSize { double x0; double x1; } adSize;

/* instance methods */
- (id)initWithViewportSize:(struct CGSize { double x0; double x1; })size adSize:(struct CGSize { double x0; double x1; })size;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)marshallerDictionary;
- (id)_tav_thriftDimensionsWithSize:(struct CGSize { double x0; double x1; })size;

@end

#endif /* TAVScribeThriftSizesInfo_h */
