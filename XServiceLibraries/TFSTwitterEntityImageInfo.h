//
#ifndef TFSTwitterEntityImageInfo_h
#define TFSTwitterEntityImageInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterEntityImageInfo : NSObject <NSCoding> { // (Swift)
    /* instance variables */
    void * /* unknown */ urlString;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } dimensions;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *URLString;

/* instance methods */
- (id)initWithImageDimensions:(struct CGSize { double x0; double x1; })dimensions name:(id)name URLString:(id)urlstring;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (id)toJSONDictionary;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToImageInfo:(id)info;
- (id)init;

@end

#endif /* TFSTwitterEntityImageInfo_h */
