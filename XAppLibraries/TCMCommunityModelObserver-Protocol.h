//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCMCommunityModelObserver_Protocol_h
#define TCMCommunityModelObserver_Protocol_h
@import Foundation;

@protocol TCMCommunityModelObserver

@required

@optional

/* optional instance methods */
- (void)communityModelDidUpdate:(id)update;
- (void)communityModelDidReload:(id)reload withSuccess:(_Bool)success error:(id)error;
- (void)communityModelDidJoin:(id)join;
- (void)communityModelDidLeave:(id)leave;

@end

#endif /* TCMCommunityModelObserver_Protocol_h */
