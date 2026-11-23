//
#ifndef TFNThreadInfo_h
#define TFNThreadInfo_h
@import Foundation;

@class NSObject, NSString;

@interface TFNThreadInfo : NSObject

@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) NSString *pThreadName;
@property (readonly, nonatomic) NSString *dispatchQueueLabel;
@property (readonly, nonatomic) int pThreadPolicy;
@property (readonly, nonatomic) int pThreadPriority;
@property (readonly, nonatomic) double userTime;
@property (readonly, nonatomic) double systemTime;
@property (readonly, nonatomic) double CPUUsageFraction;
@property (readonly, nonatomic) int policy;
@property (readonly, nonatomic) int runState;
@property (readonly, nonatomic) int flags;
@property (readonly, nonatomic) int suspendCount;
@property (readonly, nonatomic) double sleepTime;

/* class methods */
+ (id)loggingHeader;
+ (id)currentThreadInfos;

/* instance methods */
- (id)initWithMachThread:(unsigned int)thread;
- (id)loggingLine;
- (id)loggingLineWithTimingsRelativeToThreadInfo:(id)info;

@end

#endif /* TFNThreadInfo_h */
