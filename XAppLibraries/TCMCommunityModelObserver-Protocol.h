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
