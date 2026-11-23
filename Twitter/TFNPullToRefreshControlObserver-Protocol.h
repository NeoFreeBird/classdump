//
#ifndef TFNPullToRefreshControlObserver_Protocol_h
#define TFNPullToRefreshControlObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPullToRefreshControlObserver <NSObject>

@required

/* required instance methods */
- (void)pullToRefreshControl:(id)control didUpdatePullFraction:(double)fraction dragging:(_Bool)dragging;
- (void)pullToRefreshControl:(id)control didBeginRefreshingFromPull:(_Bool)pull;
- (void)pullToRefreshControlDidEndRefreshing:(id)refreshing;

@optional

@end

#endif /* TFNPullToRefreshControlObserver_Protocol_h */
