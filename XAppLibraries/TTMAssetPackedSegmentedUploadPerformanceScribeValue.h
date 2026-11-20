//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetPackedSegmentedUploadPerformanceScribeValue_h
#define TTMAssetPackedSegmentedUploadPerformanceScribeValue_h
@import Foundation;

#include "TTMAssetPackedSegmentedUploadContext.h"

@class NSDate, NSError, NSObject, NSString;

@interface TTMAssetPackedSegmentedUploadPerformanceScribeValue : NSObject

@property (readonly, nonatomic) NSString *scribeElement;
@property (readonly, nonatomic) NSString *scribeDurationBucket;
@property (readonly, nonatomic) NSString *scribeAction;
@property (readonly, nonatomic) NSString *scribeUploadSource;
@property (readonly, nonatomic) NSString *scribeEnvironment;
@property (readonly, nonatomic) TTMAssetPackedSegmentedUploadContext *context;
@property (readonly, nonatomic) unsigned long long process;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, nonatomic) long long uploadSource;
@property (readonly, nonatomic) unsigned long long uploadSourceType;
@property (readonly, nonatomic) double ingestDuration;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *mediaID;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *completeDate;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) double eventDuration;
@property (readonly, copy, nonatomic) NSString *eventImpressionID;
@property (readonly, copy, nonatomic) NSString *eventMetadata;
@property (readonly, nonatomic) _Bool shouldScribeToPerftown;
@property (readonly, nonatomic) _Bool isLocalFile;

/* instance methods */
- (id)initWithContext:(id)context process:(unsigned long long)process action:(unsigned long long)action startDate:(id)date completeDate:(id)date mediaID:(id)id error:(id)error;

@end

#endif /* TTMAssetPackedSegmentedUploadPerformanceScribeValue_h */
