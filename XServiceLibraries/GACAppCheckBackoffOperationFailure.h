//
#ifndef GACAppCheckBackoffOperationFailure_h
#define GACAppCheckBackoffOperationFailure_h
@import Foundation;

@class NSDate, NSError, NSObject;

@interface GACAppCheckBackoffOperationFailure : NSObject

@property (readonly, nonatomic) NSDate *finishDate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long backoffType;
@property (readonly, nonatomic) long long retryCount;

/* class methods */
+ (id)nextRetryFailureWithFailure:(id)failure finishDate:(id)date error:(id)error backoffType:(unsigned long long)type;

/* instance methods */
- (id)initWithFinishDate:(id)date error:(id)error backoffType:(unsigned long long)type retryCount:(long long)count;

@end

#endif /* GACAppCheckBackoffOperationFailure_h */
