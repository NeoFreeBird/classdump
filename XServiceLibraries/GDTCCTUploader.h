//
#ifndef GDTCCTUploader_h
#define GDTCCTUploader_h
@import Foundation;

#include "GDTCCTUploadMetadataProvider-Protocol.h"
#include "GDTCORUploader-Protocol.h"
#include "NSURLSessionDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface GDTCCTUploader : NSObject <NSURLSessionDelegate, GDTCCTUploadMetadataProvider, GDTCORUploader>

@property (readonly, nonatomic) NSOperationQueue *uploadOperationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;
@property (readonly, nonatomic) NSMutableDictionary *nextUploadTimeByTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)load;
+ (id)sharedInstance;
+ (void)setTestServerURL:(id)url;
+ (id)testServerURL;
+ (id)serverURLForTarget:(long long)target;

/* instance methods */
- (id)init;
- (void)uploadTarget:(long long)target withConditions:(long long)conditions;
- (id)FLLAndCSHAndINTAPIKey;
- (id)nextUploadTimeForTarget:(long long)target;
- (void)setNextUploadTime:(id)time forTarget:(long long)target;
- (id)APIKeyForTarget:(long long)target;

@end

#endif /* GDTCCTUploader_h */
