//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSJetfuelAttachment_h
#define TFSJetfuelAttachment_h
@import Foundation;

@class NSObject, NSString;

@interface TFSJetfuelAttachment : NSObject // (Swift)

@property (nonatomic, readonly) NSString *payload;
@property (nonatomic, readonly) long long height;

/* instance methods */
- (id)init;

@end

#endif /* TFSJetfuelAttachment_h */
