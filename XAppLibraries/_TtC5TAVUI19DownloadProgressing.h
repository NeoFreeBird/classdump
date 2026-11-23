//
#ifndef _TtC5TAVUI19DownloadProgressing_h
#define _TtC5TAVUI19DownloadProgressing_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSProgressing-Protocol.h"

@class NSObject, NSString, _$sSS, _$sSd;

@interface TAVUI.DownloadProgressing : NSObject <TFSProgressing> { // (Swift)
    /* instance variables */
    Swift.String progressID;
    Swift.Double progressValue;
}

@property (nonatomic, readonly) id <NSCopying> uniqueID;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) unsigned long long progressWeight;
@property (nonatomic, readonly) _Bool excludeFromProgressCenter;
@property (nonatomic, readonly) NSString *progressDisplayTitle;
@property (nonatomic, readonly) NSString *progressSuccessDisplayTitle;
@property (nonatomic, readonly) NSString *progressCanceledDisplayTitle;
@property (nonatomic, readonly) NSString *progressFailureDisplayTitle;
@property (nonatomic, readonly) _Bool activityProgressIsDeterminate;
@property (nonatomic, readonly) id /* block */ activityProgressTapAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC5TAVUI19DownloadProgressing_h */
