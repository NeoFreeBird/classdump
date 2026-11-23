//
#ifndef _TtC16FaceLivenessCore21LivenessAVAssetWriter_h
#define _TtC16FaceLivenessCore21LivenessAVAssetWriter_h
@import Foundation;

@class AVAssetWriter;

@interface FaceLivenessCore.LivenessAVAssetWriter : AVAssetWriter // (Swift)

/* instance methods */
- (id)initWithURL:(id)url fileType:(id)type error:(id *)error;
- (id)initWithContentType:(id)type;

@end

#endif /* _TtC16FaceLivenessCore21LivenessAVAssetWriter_h */
