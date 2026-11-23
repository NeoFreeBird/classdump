//
#ifndef TAVFoundationCaptionSource_h
#define TAVFoundationCaptionSource_h
@import Foundation;

#include "AVPlayerItemLegibleOutputPushDelegate-Protocol.h"
#include "TAVCaptionSink-Protocol.h"
#include "TAVCaptionSource-Protocol.h"
#include "TAVCaptionStyle.h"

@class AVPlayerItemLegibleOutput, NSObject, NSString;

@interface TAVFoundationCaptionSource : NSObject <AVPlayerItemLegibleOutputPushDelegate, TAVCaptionSource>

@property (readonly, nonatomic) TAVCaptionStyle *captionStyle;
@property (readonly, nonatomic) AVPlayerItemLegibleOutput *legibleOutput;
@property (nonatomic) _Bool captionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id <TAVCaptionSink> captionSink;

/* instance methods */
- (id)init;
- (void)legibleOutput:(id)output didOutputAttributedStrings:(id)strings nativeSampleBuffers:(id)buffers forItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)outputSequenceWasFlushed:(id)flushed;

@end

#endif /* TAVFoundationCaptionSource_h */
