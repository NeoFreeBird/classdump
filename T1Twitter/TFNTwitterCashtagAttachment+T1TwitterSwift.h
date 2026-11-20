//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterCashtagAttachment_T1TwitterSwift_h
#define TFNTwitterCashtagAttachment_T1TwitterSwift_h
@import Foundation;

@interface TFNTwitterCashtagAttachment (T1TwitterSwift)

/* class methods */
+ (id)attachmentFromTypeaheadCashtag:(id)cashtag;

/* instance methods */
- (id)asTypeaheadCashtag;

@end

#endif /* TFNTwitterCashtagAttachment_T1TwitterSwift_h */
