//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPXMP4Codec_h
#define TIPXMP4Codec_h
@import Foundation;

#include "TIPImageCodec-Protocol.h"
#include "TIPImageDecoder-Protocol.h"
#include "TIPImageEncoder-Protocol.h"
#include "TIPXMP4DecoderConfig-Protocol.h"

@class NSObject, NSString;

@interface TIPXMP4Codec : NSObject <TIPImageCodec>

@property (readonly, nonatomic) id <TIPImageDecoder> tip_decoder;
@property (readonly, nonatomic) id <TIPImageEncoder> tip_encoder;
@property (readonly, nonatomic) id <TIPXMP4DecoderConfig> defaultDecoderConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)decoderConfigWithMaxDecodableFramesCount:(unsigned long long)count;

/* instance methods */
- (id)init;
- (id)initWithDefaultDecoderConfig:(id)config;

@end

#endif /* TIPXMP4Codec_h */
