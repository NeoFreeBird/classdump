//
#ifndef TFSProgressing_Protocol_h
#define TFSProgressing_Protocol_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSProgressing <NSObject>

@required

@property (nonatomic, readonly) id <NSCopying> uniqueID;
@property (nonatomic, readonly) NSString *progressDisplayTitle;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) unsigned long long progressWeight;
@property (nonatomic, readonly) _Bool excludeFromProgressCenter;
@property (nonatomic, readonly) _Bool excludeFromActivityProgress;
@property (nonatomic, readonly) NSString *progressSuccessDisplayTitle;
@property (nonatomic, readonly) NSString *progressCanceledDisplayTitle;
@property (nonatomic, readonly) NSString *progressFailureDisplayTitle;
@property (nonatomic, readonly) _Bool activityProgressIsDeterminate;
@property (nonatomic, readonly) id /* block */ activityProgressCancelAction;
@property (nonatomic, readonly) id /* block */ activityProgressTapAction;

@optional

@end

#endif /* TFSProgressing_Protocol_h */
