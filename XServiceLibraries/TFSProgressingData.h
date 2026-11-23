//
#ifndef TFSProgressingData_h
#define TFSProgressingData_h
@import Foundation;

@class NSObject, NSString;

@interface TFSProgressingData : NSObject

@property (nonatomic) double progress;
@property (readonly, nonatomic) unsigned long long weight;
@property (copy, nonatomic) NSString *displayTitle;
@property (copy, nonatomic) NSString *successDisplayTitle;
@property (copy, nonatomic) NSString *canceledDisplayTitle;
@property (copy, nonatomic) NSString *failureDisplayTitle;
@property (copy, nonatomic) id /* block */ activityProgressCancelAction;
@property (copy, nonatomic) id /* block */ activityProgressTapAction;
@property (nonatomic) _Bool ended;
@property (nonatomic) _Bool excludeFromActivityProgress;
@property (nonatomic) _Bool activityProgressIsDeterminate;

/* instance methods */
- (id)init;
- (id)initWithWeight:(unsigned long long)weight;
- (_Bool)isEnded;

@end

#endif /* TFSProgressingData_h */
