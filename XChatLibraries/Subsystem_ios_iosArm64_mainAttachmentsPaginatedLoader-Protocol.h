//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainAttachmentsPaginatedLoader_Protocol_h
#define Subsystem_ios_iosArm64_mainAttachmentsPaginatedLoader_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainAttachmentsPaginatedLoader

@required

@property (nonatomic, readonly) id isLoadingMore;

/* required instance methods */
- (_Bool)hasMoreType:(id)type;
- (_Bool)hasMoreType:(id)type;
- (void)loadMoreType:(id)type completionHandler:(id /* block */)handler;
- (void)loadMoreType:(id)type completionHandler:(id /* block */)handler;
- (id)observeAttachmentMessagesCategory:(id)category;
- (id)observeAttachmentMessagesCategory:(id)category;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainAttachmentsPaginatedLoader_Protocol_h */
