//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterFeatureAccountScope_Protocol_h
#define TFSTwitterFeatureAccountScope_Protocol_h
@import Foundation;

@protocol TFSTwitterFeatureAccountScope

@required

/* required instance methods */
- (void)loadAccountDetailInfo;
- (void)saveAccountDetailInfo;

@optional

@end

#endif /* TFSTwitterFeatureAccountScope_Protocol_h */
