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
