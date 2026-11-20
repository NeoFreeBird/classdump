//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TPSBugReportAttachment_h
#define TPSBugReportAttachment_h
@import Foundation;

@class NSObject;

@interface TPSBugReportAttachment : NSObject

/* class methods */
+ (id)bugReportAttachmentDictionaryWithAccountID:(id)id;

@end

#endif /* TPSBugReportAttachment_h */
