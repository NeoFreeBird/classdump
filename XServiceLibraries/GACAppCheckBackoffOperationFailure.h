//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
