//
#ifndef AVVideoCompositionInstruction_Protocol_h
#define AVVideoCompositionInstruction_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol AVVideoCompositionInstruction <NSObject>

@required

@property (nonatomic, readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (nonatomic, readonly) _Bool enablePostProcessing;
@property (nonatomic, readonly) _Bool containsTweening;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) int passthroughTrackID;
@property (nonatomic, readonly) NSArray *requiredSourceSampleDataTrackIDs;

@optional

@end

#endif /* AVVideoCompositionInstruction_Protocol_h */
