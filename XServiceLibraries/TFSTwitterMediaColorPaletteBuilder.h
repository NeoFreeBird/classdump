//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterMediaColorPaletteBuilder_h
#define TFSTwitterMediaColorPaletteBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterMediaColorPaletteBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJsonArray:(id)array;
- (id)parseWithJson:(id)json;
- (id)parseWithData:(id)data;
- (id)init;

@end

#endif /* TFSTwitterMediaColorPaletteBuilder_h */
