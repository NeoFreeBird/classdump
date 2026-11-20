//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSURTDismissInfo_h
#define TFSURTDismissInfo_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSURTDismissInfo : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *callbacks;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSURTDismissInfo_h */
