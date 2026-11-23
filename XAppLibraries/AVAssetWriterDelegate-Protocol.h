//
#ifndef AVAssetWriterDelegate_Protocol_h
#define AVAssetWriterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVAssetWriterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)assetWriter:(id)writer didOutputSegmentData:(id)data segmentType:(long long)type segmentReport:(id)report;
- (void)assetWriter:(id)writer didOutputSegmentData:(id)data segmentType:(long long)type;

@end

#endif /* AVAssetWriterDelegate_Protocol_h */
