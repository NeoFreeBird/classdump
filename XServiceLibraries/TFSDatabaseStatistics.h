//
#ifndef TFSDatabaseStatistics_h
#define TFSDatabaseStatistics_h
@import Foundation;

@class NSObject;

@interface TFSDatabaseStatistics : NSObject {
    /* instance variables */
    double _totalReadTransactionDuration;
    long long _concurrentReadTransactionCount;
    double _totalWriteTransactionStartLatency;
    double _totalWriteTransactionDuration;
}

@property (readonly, nonatomic) long long readTransactionCount;
@property (readonly, nonatomic) double averageReadTransactionDuration;
@property (readonly, nonatomic) double maximumReadTransactionDuration;
@property (readonly, nonatomic) long long maximumConcurrentReadTransactionCount;
@property (readonly, nonatomic) long long writeTransactionCount;
@property (readonly, nonatomic) double averageWriteTransactionStartLatency;
@property (readonly, nonatomic) double maximumWriteTransactionStartLatency;
@property (readonly, nonatomic) double averageWriteTransactionDuration;
@property (readonly, nonatomic) double maximumWriteTransactionDuration;

/* instance methods */
- (void)startReadTransaction;
- (void)recordCompletedReadTransactionWithDuration:(double)duration;
- (void)recordCompletedWriteTransactionWithStartLatency:(double)latency duration:(double)duration;
- (id)copyAndReset;

@end

#endif /* TFSDatabaseStatistics_h */
