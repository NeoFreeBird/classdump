//
#ifndef T1BandwidthAggregator_h
#define T1BandwidthAggregator_h
@import Foundation;

#include "TFSCircularFIFOBufferDelegate-Protocol.h"

@class NSObject, NSString, TFSCircularFIFOBuffer;
@protocol T1BandwidthAggregatorDelegate;

@interface T1BandwidthAggregator : NSObject <TFSCircularFIFOBufferDelegate> {
    /* instance variables */
    TFSCircularFIFOBuffer *_entryBuffer;
    unsigned long long _lastPayloadSum;
}

@property (nonatomic) unsigned int minimumPayloadSize;
@property (nonatomic) double entryTTL;
@property (nonatomic) unsigned long long lowQualityThreshold;
@property (nonatomic) unsigned long long highQualityThreshold;
@property unsigned long long lastBandwidthEstimate;
@property (readonly, nonatomic) unsigned long long maximumEntries;
@property (readonly, nonatomic) unsigned long long minimumEntriesForEstimation;
@property (weak, nonatomic) id <T1BandwidthAggregatorDelegate> delegate;
@property (readonly, nonatomic) long long quality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMinimumPayloadSize:(unsigned int)size maximumEntries:(unsigned long long)entries minimumEntriesForEstimation:(unsigned long long)estimation lowQualityThreshold:(unsigned long long)threshold highQualityThreshold:(unsigned long long)threshold TTL:(double)ttl delegate:(id)delegate;
- (void)clear;
- (void)updateWithByteCount:(unsigned int)count duration:(double)duration serverResponseDuration:(double)duration;
- (void)prune;
- (void)reconfigureWithhMinimumPayloadSize:(unsigned int)size lowQualityThreshold:(unsigned long long)threshold highQualityThreshold:(unsigned long long)threshold TTL:(double)ttl;
- (void)circularFIFOBuffer:(id)fifobuffer purgedObject:(id)object;
- (void)_pruneWithMachTime:(unsigned long long)time;
- (void)_update;
- (void)_updateQuality:(long long)quality;
- (unsigned long long)_estimate;
- (long long)_calculateQualityWithEstimate:(unsigned long long)estimate;

@end

#endif /* T1BandwidthAggregator_h */
