//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileImageUploadService_h
#define T1ProfileImageUploadService_h
@import Foundation;

@class NSObject;

@interface T1ProfileImageUploadService : NSObject

/* class methods */
+ (void)cancelUploadsOfType:(unsigned long long)type fromAccount:(id)account;
+ (void)uploadPhoto:(id)photo ofType:(unsigned long long)type fromAccount:(id)account completion:(id /* block */)completion;
+ (id)_uploadOperationKeyForType:(unsigned long long)type fromAccount:(id)account;
+ (id)_uploadFailedMessageForType:(unsigned long long)type;
+ (id)_uploadFailedReasonForError:(id)error;
+ (id)_perfEventNameWithElement:(id)element action:(id)action type:(unsigned long long)type;

@end

#endif /* T1ProfileImageUploadService_h */
