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
