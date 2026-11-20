//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCORUploadBatch_h
#define GDTCORUploadBatch_h
@import Foundation;

@class NSNumber, NSObject, NSSet;

@interface GDTCORUploadBatch : NSObject

@property (readonly, nonatomic) NSNumber *batchID;
@property (readonly, nonatomic) NSSet *events;

/* instance methods */
- (id)initWithBatchID:(id)id events:(id)events;

@end

#endif /* GDTCORUploadBatch_h */
