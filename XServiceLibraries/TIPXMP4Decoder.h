//
#ifndef TIPXMP4Decoder_h
#define TIPXMP4Decoder_h
@import Foundation;

#include "TIPImageDecoder-Protocol.h"
#include "TIPXMP4DecoderConfig-Protocol.h"

@class NSObject, NSString;

@interface TIPXMP4Decoder : NSObject <TIPImageDecoder>

@property (readonly, nonatomic) id <TIPXMP4DecoderConfig> defaultDecoderConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDefaultDecoderConfig:(id)config;
- (long long)tip_detectDecodableData:(id)data isCompleteData:(_Bool)data earlyGuessImageType:(id)type;
- (id)tip_initiateDecoding:(id)decoding expectedDataLength:(unsigned long long)length buffer:(id)buffer;
- (long long)tip_append:(id)tip_append data:(id)data;
- (id)tip_renderImage:(id)image renderMode:(long long)mode targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode;
- (long long)tip_finalizeDecoding:(id)decoding;

@end

#endif /* TIPXMP4Decoder_h */
