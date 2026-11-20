//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BlockOrReportActionContextTargetList_h
#define T1BlockOrReportActionContextTargetList_h
@import Foundation;

@class NSObject, TFSTwitterUserReference;

@interface T1BlockOrReportActionContextTargetList : NSObject

@property (readonly, nonatomic) long long listID;
@property (readonly, nonatomic) TFSTwitterUserReference *ownerUserReference;

/* instance methods */
- (id)initWithListID:(long long)id ownerUserReference:(id)reference;
- (id)init;

@end

#endif /* T1BlockOrReportActionContextTargetList_h */
