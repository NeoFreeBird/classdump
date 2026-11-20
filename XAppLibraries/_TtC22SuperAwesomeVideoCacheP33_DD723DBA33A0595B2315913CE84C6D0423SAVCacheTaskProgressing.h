//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC22SuperAwesomeVideoCacheP33_DD723DBA33A0595B2315913CE84C6D0423SAVCacheTaskProgressing_h
#define _TtC22SuperAwesomeVideoCacheP33_DD723DBA33A0595B2315913CE84C6D0423SAVCacheTaskProgressing_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSProgressing-Protocol.h"

@class NSObject, NSString;

@interface SuperAwesomeVideoCache.(SAVCacheTaskProgressing in _DD723DBA33A0595B2315913CE84C6D04) : NSObject <TFSProgressing> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 progressID;
    @40@0:8:16@24@32 cacheTask;
    @40@0:8:16@24@32 progressValue;
}

@property (nonatomic, readonly) id <NSCopying> uniqueID;
@property (nonatomic, readonly) NSString *progressDisplayTitle;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) unsigned long long progressWeight;
@property (nonatomic, readonly) _Bool excludeFromProgressCenter;
@property (nonatomic, readonly) NSString *progressSuccessDisplayTitle;
@property (nonatomic, readonly) NSString *progressCanceledDisplayTitle;
@property (nonatomic, readonly) NSString *progressFailureDisplayTitle;
@property (nonatomic, readonly) _Bool activityProgressIsDeterminate;
@property (nonatomic, readonly) id /* block */ activityProgressCancelAction;
@property (nonatomic, readonly) id /* block */ activityProgressTapAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC22SuperAwesomeVideoCacheP33_DD723DBA33A0595B2315913CE84C6D0423SAVCacheTaskProgressing_h */
