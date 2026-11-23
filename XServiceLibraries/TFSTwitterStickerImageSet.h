//
#ifndef TFSTwitterStickerImageSet_h
#define TFSTwitterStickerImageSet_h
@import Foundation;

@class NSArray, NSMutableDictionary, NSObject, NSString;

@interface TFSTwitterStickerImageSet : NSObject {
    /* instance variables */
    NSArray *_ascendingKeys;
    NSMutableDictionary *_sources;
}

@property (copy, nonatomic) NSString *imageID;

/* instance methods */
- (id)initWithSourcesDictionary:(id)dictionary;
- (id)init;
- (void)_indexKeysFromSources;
- (id)sourceURLForDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterStickerImageSet_h */
