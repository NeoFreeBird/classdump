//
#ifndef _TtC14T1TwitterSwift36UploadContactsOperationChunkProgress_h
#define _TtC14T1TwitterSwift36UploadContactsOperationChunkProgress_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSProgressing-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$sSd, _$sSo9NSCopying_p, _$sSu;

@interface T1TwitterSwift.UploadContactsOperationChunkProgress : NSObject <TFSProgressing> // (Swift)

@property (nonatomic, readonly) _Bool excludeFromProgressCenter;
@property (nonatomic, readonly) id <NSCopying> uniqueID;
@property (nonatomic, readonly) unsigned long long progressWeight;
@property (nonatomic) double progress;
@property (nonatomic, readonly) NSString *progressDisplayTitle;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift36UploadContactsOperationChunkProgress_h */
