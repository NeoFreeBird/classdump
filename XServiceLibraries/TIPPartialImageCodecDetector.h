//
#ifndef TIPPartialImageCodecDetector_h
#define TIPPartialImageCodecDetector_h
@import Foundation;

#include "TIPImageCodec-Protocol.h"

@class NSMutableData, NSMutableDictionary, NSObject, NSString;

@interface TIPPartialImageCodecDetector : NSObject {
    /* instance variables */
    unsigned long long _expectedDataLength;
    struct CGImageSource * _codecDetectionImageSource;
    NSMutableDictionary *_potentialCodecs;
}

@property (readonly, nonatomic) NSMutableData *codecDetectionBuffer;
@property (readonly, nonatomic) id <TIPImageCodec> detectedCodec;
@property (readonly, copy, nonatomic) NSString *detectedImageType;

/* instance methods */
- (id)initWithExpectedDataLength:(unsigned long long)length;
- (_Bool)appendData:(id)data final:(_Bool)final;
- (void)dealloc;

@end

#endif /* TIPPartialImageCodecDetector_h */
