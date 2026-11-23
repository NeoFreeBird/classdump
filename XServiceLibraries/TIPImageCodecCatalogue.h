//
#ifndef TIPImageCodecCatalogue_h
#define TIPImageCodecCatalogue_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TIPImageCodecCatalogue : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_codecQueue;
    NSMutableDictionary *_codecs;
}

@property (readonly) NSDictionary *allCodecs;

/* class methods */
+ (id)defaultCodecs;
+ (id)sharedInstance;

/* instance methods */
- (_Bool)codecWithImageTypeSupportsProgressiveLoading:(id)loading;
- (_Bool)codecWithImageTypeSupportsAnimation:(id)animation;
- (_Bool)codecWithImageTypeSupportsDecoding:(id)decoding;
- (_Bool)codecWithImageTypeSupportsEncoding:(id)encoding;
- (long long)propertiesForCodecWithImageType:(id)type;
- (id)decodeImageWithData:(id)data targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode decoderConfigMap:(id)map imageType:(out id *)type;
- (_Bool)encodeImage:(id)image toFilePath:(id)path withImageType:(id)type quality:(float)quality options:(long long)options atomic:(_Bool)atomic error:(out id *)error;
- (id)encodeImage:(id)image withImageType:(id)type quality:(float)quality options:(long long)options error:(out id *)error;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)objectForKeyedSubscript:(id)subscript;
- (id)init;
- (id)initWithCodecsProvider:(id /* block */)provider;
- (void)removeCodecForImageType:(id)type;
- (void)removeCodecForImageType:(id)type removedCodec:(id *)codec;
- (void)setCodec:(id)codec forImageType:(id)type;
- (void)replaceCodecForImageType:(id)type usingBlock:(id /* block */)block;
- (id)codecForImageType:(id)type;

@end

#endif /* TIPImageCodecCatalogue_h */
