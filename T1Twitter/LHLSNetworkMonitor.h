//
#ifndef LHLSNetworkMonitor_h
#define LHLSNetworkMonitor_h
@import Foundation;

#include "LHLSBandwidthSource-Protocol.h"

@class NSMutableArray, NSObject;

@interface LHLSNetworkMonitor : NSObject <LHLSBandwidthSource> {
    /* instance variables */
    int _totalBytes;
    double _totalDuration;
    NSMutableArray *_byteRecords;
    NSMutableArray *_durationRecords;
}

@property (readonly, nonatomic) int bandwidthBytesPerSecond;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initSharedInstance;
- (void)recordDownload:(int)download duration:(double)duration;

@end

#endif /* LHLSNetworkMonitor_h */
