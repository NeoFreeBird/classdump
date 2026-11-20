//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityMediaVideoVariantBuilder_h
#define TFSTwitterEntityMediaVideoVariantBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityMediaVideoVariantBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json error:(id *)error;
- (id)parseWithData:(id)data error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaVideoVariantBuilder_h */
