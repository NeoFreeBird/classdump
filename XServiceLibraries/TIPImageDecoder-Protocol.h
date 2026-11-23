//
#ifndef TIPImageDecoder_Protocol_h
#define TIPImageDecoder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageDecoder <NSObject>

@required

/* required instance methods */
- (long long)tip_detectDecodableData:(id)data isCompleteData:(_Bool)data earlyGuessImageType:(id)type;
- (id)tip_initiateDecoding:(id)decoding expectedDataLength:(unsigned long long)length buffer:(id)buffer;
- (long long)tip_append:(id)tip_append data:(id)data;
- (id)tip_renderImage:(id)image renderMode:(long long)mode targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode;
- (long long)tip_finalizeDecoding:(id)decoding;

@optional

/* optional instance methods */
- (_Bool)tip_supportsProgressiveDecoding;
- (id)tip_decodeImageWithData:(id)data targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode config:(id)config;
- (id)tip_decodeImageWithData:(id)data config:(id)config;

@end

#endif /* TIPImageDecoder_Protocol_h */
