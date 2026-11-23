//
#ifndef TAVAVAssetTranscoderContext_h
#define TAVAVAssetTranscoderContext_h
@import Foundation;

#include "TAVTVideoFilterExecutionGate-Protocol.h"

@class NSObject;

@interface TAVAVAssetTranscoderContext : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 outputURL;
    B24@0:8@"NSString"16 maxDimensions;
    B24@0:8@"NSString"16 decoderDownscalingMode;
    B24@0:8@"NSString"16 videoFilters;
    B24@0:8@"NSString"16 hasCustomFilters;
    B24@0:8@"NSString"16 videoOutputSettings;
    B24@0:8@"NSString"16 audioOutputSettings;
    B24@0:8@"NSString"16 progressUpdateBlock;
}

@property (nonatomic, retain) id <TAVTVideoFilterExecutionGate> videoFilterExecutionGate;

/* instance methods */
- (id)init;
- (id)initWithOutputURL:(id)url maxDimensions:(struct CGSize { double x0; double x1; })dimensions decoderDownscalingMode:(long long)mode videoFilters:(id)filters hasCustomFilters:(_Bool)filters videoOutputSettings:(id)settings audioOutputSettings:(id)settings progressUpdateBlock:(id /* block */)block;

@end

#endif /* TAVAVAssetTranscoderContext_h */
