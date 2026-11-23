//
#ifndef PTVNormalDistributionDataModel_h
#define PTVNormalDistributionDataModel_h
@import Foundation;

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PTVNormalDistributionDataModel : NSObject {
    /* instance variables */
    NSMutableArray *_sortedDataSet;
    double _mean;
    double _median;
    double _stdDev;
    double _min;
    double _max;
    double _p95;
    double _p99;
    NSObject<OS_dispatch_queue> *_calculationQueue;
}

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)addData:(double)data;
- (void)calculationQueue_addData:(double)data;
- (void)calculateStats;
- (void)calculationQueue_calculateStats;
- (double)mean;
- (double)median;
- (double)stdDev;
- (double)min;
- (double)max;
- (double)p95;
- (double)p99;

@end

#endif /* PTVNormalDistributionDataModel_h */
