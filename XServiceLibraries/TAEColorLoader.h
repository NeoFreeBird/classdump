//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAEColorLoader_h
#define TAEColorLoader_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface TAEColorLoader : NSObject {
    /* instance variables */
    NSObject *_palette;
    NSMutableDictionary *_colorCache;
}

/* instance methods */
- (id)initWithPalette:(id)palette;
- (id)colorForPropertyName:(id)name;

@end

#endif /* TAEColorLoader_h */
