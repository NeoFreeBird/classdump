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
