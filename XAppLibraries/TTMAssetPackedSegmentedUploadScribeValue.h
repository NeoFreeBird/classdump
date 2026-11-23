//
#ifndef TTMAssetPackedSegmentedUploadScribeValue_h
#define TTMAssetPackedSegmentedUploadScribeValue_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDate, NSError, NSNumber, NSObject, NSString;

@interface TTMAssetPackedSegmentedUploadScribeValue : NSObject <NSCopying>

@property (copy, nonatomic) NSString *mediaID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *completeDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long errorPhase;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long totalSegmentsUploaded;
@property (nonatomic) float progress;
@property (nonatomic) unsigned long long totalInitRetries;
@property (nonatomic) unsigned long long totalAppendRetries;
@property (nonatomic) unsigned long long totalFinalizeRetries;
@property (nonatomic) unsigned long long maxConcurrentAppendRequests;
@property (retain, nonatomic) NSNumber *totalBytesWired;
@property (retain, nonatomic) NSNumber *minConcurrentAppendRequests;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMAssetPackedSegmentedUploadScribeValue_h */
