//
#ifndef PTVWatchViewDelegate_Protocol_h
#define PTVWatchViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVWatchViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)canLoadFromNetwork;
- (void)didSelectHashtag:(id)hashtag;
- (void)socialProofHeightDidChange;

@end

#endif /* PTVWatchViewDelegate_Protocol_h */
